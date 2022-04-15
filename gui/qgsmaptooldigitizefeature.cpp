/***************************************************************************
  qgsmaptooldigitizefeature.cpp

 ---------------------
 begin                : 7.12.2017
 copyright            : (C) 2017 by David Signer
 email                : david@opengis.ch
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgsmaptooldigitizefeature.h"
#include "qgsadvanceddigitizingdockwidget.h"
#include "qgsapplication.h"
#include "qgsattributedialog.h"
#include "qgsexception.h"
#include "qgscurvepolygon.h"
#include "qgsfields.h"
#include "qgsgeometry.h"
#include "qgslinestring.h"
#include "qgsmultipoint.h"
#include "qgsmapcanvas.h"
#include "qgsmapmouseevent.h"
#include "qgspolygon.h"
#include "qgsproject.h"
#include "qgsvectordataprovider.h"
#include "qgsvectorlayer.h"
#include "qgslogger.h"

#include <QSettings>

QgsMapToolDigitizeFeature::QgsMapToolDigitizeFeature( QgsMapCanvas *canvas, QgsAdvancedDigitizingDockWidget *cadDockWidget, CaptureMode mode )
  : QgsMapToolCapture( canvas, cadDockWidget, mode )
  , mCheckGeometryType( true )
{
  mToolName = tr( "Digitize feature" );
  connect( QgsProject::instance(), &QgsProject::cleared, this, &QgsMapToolDigitizeFeature::stopCapturing );
  connect( QgsProject::instance(), &QgsProject::readProject, this, &QgsMapToolDigitizeFeature::stopCapturing );
}

QgsMapToolCapture::Capabilities QgsMapToolDigitizeFeature::capabilities() const
{
  return QgsMapToolCapture::SupportsCurves;
}

void QgsMapToolDigitizeFeature::digitized( const QgsFeature &f )
{
  emit digitizingCompleted( f );
}

void QgsMapToolDigitizeFeature::activate()
{
  QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( mLayer );
  if ( !vlayer )
    vlayer = currentVectorLayer();

  if ( vlayer && vlayer->geometryType() == QgsWkbTypes::NullGeometry )
  {
    QgsFeature f;
    digitized( f );
    return;
  }

  if ( mLayer )
  {
    //remember current layer
    mCurrentLayer = mCanvas->currentLayer();
    //set the layer with the given
    mCanvas->setCurrentLayer( mLayer );
  }

  QgsMapToolCapture::activate();
}

void QgsMapToolDigitizeFeature::deactivate()
{
  QgsMapToolCapture::deactivate();

  if ( mCurrentLayer )
    //set the layer back to the one remembered
    mCanvas->setCurrentLayer( mCurrentLayer );
  emit digitizingFinished();
}

bool QgsMapToolDigitizeFeature::checkGeometryType() const
{
  return mCheckGeometryType;
}

void QgsMapToolDigitizeFeature::setCheckGeometryType( bool checkGeometryType )
{
  mCheckGeometryType = checkGeometryType;
}

void QgsMapToolDigitizeFeature::cadCanvasReleaseEvent( QgsMapMouseEvent *e )
{
  QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( mLayer );

  if ( !vlayer )
    //if no given layer take the current from canvas
    vlayer = currentVectorLayer();

  if ( !vlayer )
  {
    notifyNotVectorLayer();
    return;
  }

  QgsWkbTypes::Type layerWKBType = vlayer->wkbType();

  QgsVectorDataProvider *provider = vlayer->dataProvider();

  if ( !( provider->capabilities() & QgsVectorDataProvider::AddFeatures ) )
  {
    emit messageEmitted( tr( "The data provider for this layer does not support the addition of features." ), Qgis::Warning );
    return;
  }

  if ( !vlayer->isEditable() )
  {
    notifyNotEditableLayer();
    return;
  }

  // POINT CAPTURING
  if ( mode() == CapturePoint )
  {
    if ( e->button() != Qt::LeftButton )
      return;

    //check we only use this tool for point/multipoint layers
    if ( vlayer->geometryType() != QgsWkbTypes::PointGeometry && mCheckGeometryType )
    {
      emit messageEmitted( tr( "Wrong editing tool, cannot apply the 'capture point' tool on this vector layer" ), Qgis::Warning );
      return;
    }

    QgsPoint savePoint; //point in layer coordinates
    bool isMatchPointZ = false;
    try
    {
      QgsPoint fetchPoint;
      int res;
      res = fetchLayerPoint( e->mapPointMatch(), fetchPoint );
      if ( QgsWkbTypes::hasZ( fetchPoint.wkbType() ) )
        isMatchPointZ = true;

      if ( res == 0 )
      {
        if ( isMatchPointZ )
          savePoint = fetchPoint;
        else
          savePoint = QgsPoint( fetchPoint.x(), fetchPoint.y() );
      }
      else
      {
        QgsPointXY layerPoint = toLayerCoordinates( vlayer, e->mapPoint() );
        if ( isMatchPointZ )
          savePoint = QgsPoint( QgsWkbTypes::PointZ, layerPoint.x(), layerPoint.y(), fetchPoint.z() );
        else
          savePoint = QgsPoint( layerPoint.x(), layerPoint.y() );
      }
    }
    catch ( QgsCsException &cse )
    {
      Q_UNUSED( cse )
      emit messageEmitted( tr( "Cannot transform the point to the layers coordinate system" ), Qgis::Warning );
      return;
    }

    //only do the rest for provider with feature addition support
    //note that for the grass provider, this will return false since
    //grass provider has its own mechanism of feature addition
    if ( provider->capabilities() & QgsVectorDataProvider::AddFeatures )
    {
      QgsFeature f( vlayer->fields() );

      QgsGeometry g;
      if ( layerWKBType == QgsWkbTypes::Point )
      {
        g = QgsGeometry( qgis::make_unique<QgsPoint>( savePoint ) );
      }
      else if ( !QgsWkbTypes::isMultiType( layerWKBType ) && QgsWkbTypes::hasZ( layerWKBType ) )
      {
        g = QgsGeometry( qgis::make_unique<QgsPoint>( savePoint.x(), savePoint.y(), isMatchPointZ ? savePoint.z() : defaultZValue() ) );
      }
      else if ( QgsWkbTypes::isMultiType( layerWKBType ) && !QgsWkbTypes::hasZ( layerWKBType ) )
      {
        g = QgsGeometry::fromMultiPointXY( QgsMultiPointXY() << savePoint );
      }
      else if ( QgsWkbTypes::isMultiType( layerWKBType ) && QgsWkbTypes::hasZ( layerWKBType ) )
      {
        QgsMultiPoint *mp = new QgsMultiPoint();
        mp->addGeometry( new QgsPoint( QgsWkbTypes::PointZ, savePoint.x(), savePoint.y(), isMatchPointZ ? savePoint.z() : defaultZValue() ) );
        g.set( mp );
      }
      else
      {
        // if layer supports more types (mCheckGeometryType is false)
        g = QgsGeometry( qgis::make_unique<QgsPoint>( savePoint ) );
      }

      if ( QgsWkbTypes::hasM( layerWKBType ) )
      {
        g.get()->addMValue();
      }

      f.setGeometry( g );
      f.setValid( true );

      // The snapping result needs to be added so it's available in the @snapping_results variable of default value etc. expression contexts
      addVertex( e->mapPoint(), e->mapPointMatch() );

      digitized( f );

      stopCapturing();

      // we are done with digitizing for now so instruct advanced digitizing dock to reset its CAD points
      cadDockWidget()->clearPoints();
    }
  }

  // LINE AND POLYGON CAPTURING
  else if ( mode() == CaptureLine || mode() == CapturePolygon )
  {
    //check we only use the line tool for line/multiline layers
    if ( mode() == CaptureLine && vlayer->geometryType() != QgsWkbTypes::LineGeometry && mCheckGeometryType )
    {
      emit messageEmitted( tr( "Wrong editing tool, cannot apply the 'capture line' tool on this vector layer" ), Qgis::Warning );
      return;
    }

    //check we only use the polygon tool for polygon/multipolygon layers
    if ( mode() == CapturePolygon && vlayer->geometryType() != QgsWkbTypes::PolygonGeometry && mCheckGeometryType )
    {
      emit messageEmitted( tr( "Wrong editing tool, cannot apply the 'capture polygon' tool on this vector layer" ), Qgis::Warning );
      return;
    }

    //add point to list and to rubber band
    if ( e->button() == Qt::LeftButton )
    {
      int error = addVertex( e->mapPoint(), e->mapPointMatch() );
      if ( error == 1 )
      {
        //current layer is not a vector layer
        return;
      }
      else if ( error == 2 )
      {
        //problem with coordinate transformation
        emit messageEmitted( tr( "Cannot transform the point to the layers coordinate system" ), Qgis::Warning );
        return;
      }

      startCapturing();
    }
    else if ( e->button() == Qt::RightButton )
    {
      // End of string
      deleteTempRubberBand();

      //lines: bail out if there are not at least two vertices
      if ( mode() == CaptureLine && size() < 2 )
      {
        stopCapturing();
        return;
      }

      //polygons: bail out if there are not at least two vertices
      if ( mode() == CapturePolygon && size() < 3 )
      {
        stopCapturing();
        return;
      }

      if ( mode() == CapturePolygon || e->modifiers() == Qt::ShiftModifier )
      {
        closePolygon();
      }

      //create QgsFeature with wkb representation
      std::unique_ptr< QgsFeature > f( new QgsFeature( vlayer->fields(), 0 ) );

      //does compoundcurve contain circular strings?
      //does provider support circular strings?
      bool hasCurvedSegments = captureCurve()->hasCurvedSegments();
      bool providerSupportsCurvedSegments = vlayer->dataProvider()->capabilities() & QgsVectorDataProvider::CircularGeometries;

      QList<QgsPointLocator::Match> snappingMatchesList;
      QgsCurve *curveToAdd = nullptr;
      if ( hasCurvedSegments && providerSupportsCurvedSegments )
      {
        curveToAdd = captureCurve()->clone();
      }
      else
      {
        curveToAdd = captureCurve()->curveToLine();
        snappingMatchesList = snappingMatches();
      }

      if ( mode() == CaptureLine )
      {
        QgsGeometry g( curveToAdd );
        f->setGeometry( g );
      }
      else
      {
        QgsCurvePolygon *poly = nullptr;
        if ( hasCurvedSegments && providerSupportsCurvedSegments )
        {
          poly = new QgsCurvePolygon();
        }
        else
        {
          poly = new QgsPolygon();
        }
        poly->setExteriorRing( curveToAdd );
        QgsGeometry g( poly );
        f->setGeometry( g );

        QList<QgsVectorLayer *>  avoidIntersectionsLayers;
        switch ( QgsProject::instance()->avoidIntersectionsMode() )
        {
          case QgsProject::AvoidIntersectionsMode::AvoidIntersectionsCurrentLayer:
            avoidIntersectionsLayers.append( vlayer );
            break;
          case QgsProject::AvoidIntersectionsMode::AvoidIntersectionsLayers:
            avoidIntersectionsLayers = QgsProject::instance()->avoidIntersectionsLayers();
            break;
          case QgsProject::AvoidIntersectionsMode::AllowIntersections:
            break;
        }
        if ( avoidIntersectionsLayers.size() > 0 )
        {
          QgsGeometry featGeom = f->geometry();
          int avoidIntersectionsReturn = featGeom.avoidIntersections( avoidIntersectionsLayers );
          f->setGeometry( featGeom );
          if ( avoidIntersectionsReturn == 1 )
          {
            //not a polygon type. Impossible to get there
          }
          if ( f->geometry().isEmpty() ) //avoid intersection might have removed the whole geometry
          {
            emit messageEmitted( tr( "The feature cannot be added because its geometry collapsed due to intersection avoidance" ), Qgis::Critical );
            stopCapturing();
            return;
          }
        }
      }
      f->setValid( true );

      digitized( *f );

      stopCapturing();
    }
  }
}

void QgsMapToolDigitizeFeature::setLayer( QgsMapLayer *vl )
{
  mLayer = vl;
}

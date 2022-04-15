/***************************************************************************
    qgsmaptooledit.cpp  -  base class for editing map tools
    ---------------------
    begin                : Juli 2007
    copyright            : (C) 2007 by Marco Hugentobler
    email                : marco dot hugentobler at karto dot baug dot ethz dot ch
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgsmaptooledit.h"
#include "qgsproject.h"
#include "qgsmapcanvas.h"
#include "qgsgeometryrubberband.h"
#include "qgsrubberband.h"
#include "qgsvectorlayer.h"
#include "qgssettings.h"

#include <QKeyEvent>


QgsMapToolEdit::QgsMapToolEdit( QgsMapCanvas *canvas )
  : QgsMapTool( canvas )
{
  if ( mCanvas->project() )
  {
    connect( mCanvas->project(), &QgsProject::layersAdded, this, &QgsMapToolEdit::connectLayers );
    connectLayers( mCanvas->project()->mapLayers().values() );  // Connect existing layers
  }
}

double QgsMapToolEdit::defaultZValue() const
{
  return QgsSettings().value( QStringLiteral( "/qgis/digitizing/default_z_value" ), Qgis::DEFAULT_Z_COORDINATE ).toDouble();
}

QColor QgsMapToolEdit::digitizingStrokeColor()
{
  QgsSettings settings;
  QColor color(
    settings.value( QStringLiteral( "qgis/digitizing/line_color_red" ), 255 ).toInt(),
    settings.value( QStringLiteral( "qgis/digitizing/line_color_green" ), 0 ).toInt(),
    settings.value( QStringLiteral( "qgis/digitizing/line_color_blue" ), 0 ).toInt() );
  double myAlpha = settings.value( QStringLiteral( "qgis/digitizing/line_color_alpha" ), 200 ).toInt() / 255.0;
  color.setAlphaF( myAlpha );
  return color;
}

int QgsMapToolEdit::digitizingStrokeWidth()
{
  QgsSettings settings;
  return settings.value( QStringLiteral( "qgis/digitizing/line_width" ), 1 ).toInt();
}

QColor QgsMapToolEdit::digitizingFillColor()
{
  QgsSettings settings;
  QColor fillColor(
    settings.value( QStringLiteral( "qgis/digitizing/fill_color_red" ), 255 ).toInt(),
    settings.value( QStringLiteral( "qgis/digitizing/fill_color_green" ), 0 ).toInt(),
    settings.value( QStringLiteral( "qgis/digitizing/fill_color_blue" ), 0 ).toInt() );
  double myAlpha = settings.value( QStringLiteral( "qgis/digitizing/fill_color_alpha" ), 30 ).toInt() / 255.0;
  fillColor.setAlphaF( myAlpha );
  return fillColor;
}


QgsRubberBand *QgsMapToolEdit::createRubberBand( QgsWkbTypes::GeometryType geometryType, bool alternativeBand )
{
  QgsSettings settings;
  QgsRubberBand *rb = new QgsRubberBand( mCanvas, geometryType );
  rb->setWidth( digitizingStrokeWidth() );
  QColor color = digitizingStrokeColor();
  if ( alternativeBand )
  {
    double alphaScale = settings.value( QStringLiteral( "qgis/digitizing/line_color_alpha_scale" ), 0.75 ).toDouble();
    color.setAlphaF( color.alphaF() * alphaScale );
    rb->setLineStyle( Qt::DotLine );
  }
  rb->setStrokeColor( color );

  QColor fillColor = digitizingFillColor();
  rb->setFillColor( fillColor );

  rb->show();
  return rb;
}

QgsVectorLayer *QgsMapToolEdit::currentVectorLayer()
{
  return mCanvas ? qobject_cast<QgsVectorLayer *>( mCanvas->currentLayer() ) : nullptr;
}


QgsMapToolEdit::TopologicalResult QgsMapToolEdit::addTopologicalPoints( const QVector<QgsPoint> &vertices )
{
  if ( !mCanvas )
  {
    return QgsMapToolEdit::InvalidCanvas;
  }

  //find out current vector layer
  QgsVectorLayer *vlayer = currentVectorLayer();

  if ( !vlayer )
  {
    return QgsMapToolEdit::InvalidLayer;
  }

  QVector<QgsPoint>::const_iterator list_it = vertices.constBegin();
  for ( ; list_it != vertices.constEnd(); ++list_it )
  {
    vlayer->addTopologicalPoints( *list_it );
  }
  return QgsMapToolEdit::Success;
}

QgsMapToolEdit::TopologicalResult QgsMapToolEdit::addTopologicalPoints( const QVector<QgsPointXY> &vertices )
{
  if ( !mCanvas )
  {
    return QgsMapToolEdit::InvalidCanvas;
  }

  //find out current vector layer
  QgsVectorLayer *vlayer = currentVectorLayer();

  if ( !vlayer )
  {
    return QgsMapToolEdit::InvalidLayer;
  }

  Q_NOWARN_DEPRECATED_PUSH
  QVector<QgsPointXY>::const_iterator list_it = vertices.constBegin();
  for ( ; list_it != vertices.constEnd(); ++list_it )
  {
    vlayer->addTopologicalPoints( *list_it );
  }
  Q_NOWARN_DEPRECATED_POP

  return QgsMapToolEdit::Success;
}

QgsGeometryRubberBand *QgsMapToolEdit::createGeometryRubberBand( QgsWkbTypes::GeometryType geometryType, bool alternativeBand ) const
{
  QgsSettings settings;
  QgsGeometryRubberBand *rb = new QgsGeometryRubberBand( mCanvas, geometryType );
  QColor color( settings.value( QStringLiteral( "qgis/digitizing/line_color_red" ), 255 ).toInt(),
                settings.value( QStringLiteral( "qgis/digitizing/line_color_green" ), 0 ).toInt(),
                settings.value( QStringLiteral( "qgis/digitizing/line_color_blue" ), 0 ).toInt() );
  double myAlpha = settings.value( QStringLiteral( "qgis/digitizing/line_color_alpha" ), 200 ).toInt() / 255.0;
  if ( alternativeBand )
  {
    myAlpha = myAlpha * settings.value( QStringLiteral( "qgis/digitizing/line_color_alpha_scale" ), 0.75 ).toDouble();
    rb->setLineStyle( Qt::DotLine );
  }
  color.setAlphaF( myAlpha );
  rb->setStrokeColor( color );
  rb->setFillColor( color );
  rb->setStrokeWidth( digitizingStrokeWidth() );
  rb->show();
  return rb;
}

void QgsMapToolEdit::notifyNotVectorLayer()
{
  emit messageEmitted( tr( "No active vector layer" ) );
}

void QgsMapToolEdit::notifyNotEditableLayer()
{
  emit messageEmitted( tr( "Layer not editable" ) );
}

void QgsMapToolEdit::connectLayers( const QList<QgsMapLayer *> &layers )
{
  for ( QgsMapLayer *layer : layers )
  {
    QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( layer );
    if ( vlayer )
    {
      connect( vlayer, &QgsVectorLayer::editingStopped, this, &QgsMapToolEdit::cleanCanvas );
    }
  }
}

void QgsMapToolEdit::cleanCanvas()
{
  if ( editableVectorLayers().isEmpty() )
  {
    clean();
  }
}

QList<QgsVectorLayer *> QgsMapToolEdit::editableVectorLayers()
{
  QList<QgsVectorLayer *> editableLayers;
  if ( mCanvas->project() )
  {
    const auto layers = mCanvas->project()->mapLayers().values();
    for ( QgsMapLayer *layer : layers )
    {
      QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( layer );
      if ( vlayer && vlayer->isEditable() && vlayer->isSpatial() )
        editableLayers << vlayer;
    }
  }
  return editableLayers;
}

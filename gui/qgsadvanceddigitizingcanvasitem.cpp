/***************************************************************************
    qgsadvanceddigitizingcanvasitem.cpp  -  map canvas item for CAD tools
    ----------------------
    begin                : October 2014
    copyright            : (C) Denis Rouzaud
    email                : denis.rouzaud@gmail.com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include <QPainter>

#include "qgsadvanceddigitizingdockwidget.h"
#include "qgsadvanceddigitizingcanvasitem.h"
#include "qgsmapcanvas.h"


QgsAdvancedDigitizingCanvasItem::QgsAdvancedDigitizingCanvasItem( QgsMapCanvas *canvas, QgsAdvancedDigitizingDockWidget *cadDockWidget )
  : QgsMapCanvasItem( canvas )
  , mLockedPen( QPen( QColor( 0, 127, 0, 255 ), 1, Qt::DashLine ) )
  , mConstruction1Pen( QPen( QColor( 127, 127, 127, 150 ), 1, Qt::DashLine ) )
  , mConstruction2Pen( QPen( QColor( 127, 127, 127, 255 ), 1, Qt::DashLine ) )
  , mSnapPen( QPen( QColor( 127, 0, 0, 150 ), 1 ) )
  , mSnapLinePen( QPen( QColor( 127, 0, 0, 150 ), 1, Qt::DashLine ) )
  , mCursorPen( QPen( QColor( 127, 127, 127, 255 ), 1 ) )
  , mAdvancedDigitizingDockWidget( cadDockWidget )
{
}

void QgsAdvancedDigitizingCanvasItem::paint( QPainter *painter )
{
  if ( !mAdvancedDigitizingDockWidget->cadEnabled() )
    return;

  // Use visible polygon rather than extent to properly handle rotated maps
  QPolygonF mapPoly = mMapCanvas->mapSettings().visiblePolygon();
  double canvasWidth = QLineF( mapPoly[0], mapPoly[1] ).length();
  double canvasHeight = QLineF( mapPoly[0], mapPoly[3] ).length();
  QgsRectangle mapRect = QgsRectangle( mapPoly[0],
                                       QgsPointXY(
                                         mapPoly[0].x() + canvasWidth,
                                         mapPoly[0].y() - canvasHeight
                                       )
                                     );
  if ( rect() != mapRect )
    setRect( mapRect );

  int nPoints = mAdvancedDigitizingDockWidget->pointsCount();
  if ( !nPoints )
    return;

  bool previousPointExist, penulPointExist;
  const QgsPointXY curPoint = mAdvancedDigitizingDockWidget->currentPoint();
  const QgsPointXY prevPoint = mAdvancedDigitizingDockWidget->previousPoint( &previousPointExist );
  const QgsPointXY penulPoint = mAdvancedDigitizingDockWidget->penultimatePoint( &penulPointExist );
  const bool snappedToVertex = mAdvancedDigitizingDockWidget->snappedToVertex();
  const QList<QgsPointXY> snappedSegment = mAdvancedDigitizingDockWidget->snappedSegment();
  const bool hasSnappedSegment = snappedSegment.count() == 2;

  const bool curPointExist = mapPoly.containsPoint( curPoint.toQPointF(), Qt::OddEvenFill );

  const double mupp = mMapCanvas->getCoordinateTransform()->mapUnitsPerPixel();
  if ( mupp == 0 )
    return;

  const double canvasRotationRad = mMapCanvas->rotation() * M_PI / 180;
  const double canvasMaxDimension = std::max( canvasWidth / mupp, canvasHeight / mupp );

  QPointF curPointPix, prevPointPix, penulPointPix, snapSegmentPix1, snapSegmentPix2;

  if ( curPointExist )
  {
    curPointPix = toCanvasCoordinates( curPoint );
  }
  if ( previousPointExist )
  {
    prevPointPix = toCanvasCoordinates( prevPoint );
  }
  if ( penulPointExist )
  {
    penulPointPix = toCanvasCoordinates( penulPoint );
  }
  if ( hasSnappedSegment )
  {
    snapSegmentPix1 = toCanvasCoordinates( snappedSegment[0] );
    snapSegmentPix2 = toCanvasCoordinates( snappedSegment[1] );
  }

  painter->setRenderHint( QPainter::Antialiasing );
  painter->setCompositionMode( QPainter::CompositionMode_Difference );

  // Draw point snap
  if ( curPointExist && snappedToVertex )
  {
    painter->setPen( mSnapPen );
    painter->drawEllipse( curPointPix, 10, 10 );
  }

  // Draw segment snap
  if ( hasSnappedSegment && !snappedToVertex )
  {
    painter->setPen( mSnapPen );
    painter->drawLine( snapSegmentPix1, snapSegmentPix2 );

    if ( curPointExist )
    {
      painter->setPen( mSnapLinePen );
      painter->drawLine( snapSegmentPix1, curPointPix );
    }
  }

  // Draw segment par/per input
  if ( mAdvancedDigitizingDockWidget->additionalConstraint() != QgsAdvancedDigitizingDockWidget::AdditionalConstraint::NoConstraint && hasSnappedSegment )
  {
    painter->setPen( mConstruction2Pen );
    painter->drawLine( snapSegmentPix1, snapSegmentPix2 );
  }

  // Draw angle
  if ( nPoints > 1 )
  {
    double a0, a;
    if ( mAdvancedDigitizingDockWidget->constraintAngle()->relative() && nPoints > 2 )
    {
      a0 = std::atan2( -( prevPoint.y() - penulPoint.y() ), prevPoint.x() - penulPoint.x() );
    }
    else
    {
      a0 = 0;
    }
    if ( mAdvancedDigitizingDockWidget->constraintAngle()->isLocked() )
    {
      a = a0 - mAdvancedDigitizingDockWidget->constraintAngle()->value() * M_PI / 180;
    }
    else
    {
      a = std::atan2( -( curPoint.y() - prevPoint.y() ), curPoint.x() - prevPoint.x() );
    }

    a0 += canvasRotationRad;
    a += canvasRotationRad;

    painter->setPen( mConstruction2Pen );
    painter->drawArc( QRectF( prevPointPix.x() - 20,
                              prevPointPix.y() - 20,
                              40, 40 ),
                      static_cast<int>( 16 * -a0 * 180 / M_PI ),
                      static_cast<int>( 16 * ( a0 - a ) * 180 / M_PI ) );
    painter->drawLine( prevPointPix,
                       prevPointPix + 60 * QPointF( std::cos( a0 ), std::sin( a0 ) ) );


    if ( mAdvancedDigitizingDockWidget->constraintAngle()->isLocked() )
    {
      painter->setPen( mLockedPen );
      painter->drawLine( prevPointPix - canvasMaxDimension * QPointF( std::cos( a ), std::sin( a ) ),
                         prevPointPix + canvasMaxDimension * QPointF( std::cos( a ), std::sin( a ) ) );
    }
  }

  // Draw distance
  if ( nPoints > 1 && mAdvancedDigitizingDockWidget->constraintDistance()->isLocked() )
  {
    painter->setPen( mLockedPen );
    double r = mAdvancedDigitizingDockWidget->constraintDistance()->value() / mupp;
    painter->drawEllipse( prevPointPix, r, r );
  }

  // Draw x
  if ( mAdvancedDigitizingDockWidget->constraintX()->isLocked() )
  {
    double x = 0.0;
    bool draw = true;
    painter->setPen( mLockedPen );
    if ( mAdvancedDigitizingDockWidget->constraintX()->relative() )
    {
      if ( nPoints > 1 )
      {
        x = mAdvancedDigitizingDockWidget->constraintX()->value() + prevPoint.x();
      }
      else
      {
        draw = false;
      }
    }
    else
    {
      x = mAdvancedDigitizingDockWidget->constraintX()->value();
    }
    if ( draw )
    {
      painter->drawLine( toCanvasCoordinates( QgsPointXY( x, mapPoly[0].y() ) ) - canvasMaxDimension * QPointF( std::sin( -canvasRotationRad ), std::cos( -canvasRotationRad ) ),
                         toCanvasCoordinates( QgsPointXY( x, mapPoly[0].y() ) ) + canvasMaxDimension * QPointF( std::sin( -canvasRotationRad ), std::cos( -canvasRotationRad ) ) );
    }
  }

  // Draw y
  if ( mAdvancedDigitizingDockWidget->constraintY()->isLocked() )
  {
    double y = 0.0;
    bool draw = true;
    painter->setPen( mLockedPen );
    if ( mAdvancedDigitizingDockWidget->constraintY()->relative() )
    {
      if ( nPoints > 1 )
      {
        y = mAdvancedDigitizingDockWidget->constraintY()->value() + prevPoint.y();
      }
      else
      {
        draw = false;
      }
    }
    else
    {
      y = mAdvancedDigitizingDockWidget->constraintY()->value();
    }
    if ( draw )
    {
      painter->drawLine( toCanvasCoordinates( QgsPointXY( mapPoly[0].x(), y ) ) - canvasMaxDimension * QPointF( std::cos( -canvasRotationRad ), -std::sin( -canvasRotationRad ) ),
                         toCanvasCoordinates( QgsPointXY( mapPoly[0].x(), y ) ) + canvasMaxDimension * QPointF( std::cos( -canvasRotationRad ), -std::sin( -canvasRotationRad ) ) );

    }
  }

  // Draw constr
  if ( mAdvancedDigitizingDockWidget->additionalConstraint() == QgsAdvancedDigitizingDockWidget::AdditionalConstraint::NoConstraint )
  {
    if ( curPointExist && previousPointExist )
    {
      painter->setPen( mConstruction2Pen );
      painter->drawLine( prevPointPix, curPointPix );
    }

    if ( previousPointExist && penulPointExist )
    {
      painter->setPen( mConstruction1Pen );
      painter->drawLine( penulPointPix, prevPointPix );
    }
  }

  if ( curPointExist )
  {
    painter->setPen( mCursorPen );
    painter->drawLine( curPointPix + QPointF( -5, -5 ),
                       curPointPix + QPointF( +5, +5 ) );
    painter->drawLine( curPointPix + QPointF( -5, +5 ),
                       curPointPix + QPointF( +5, -5 ) );
  }
}

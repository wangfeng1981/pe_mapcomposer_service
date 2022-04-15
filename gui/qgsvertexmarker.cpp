/***************************************************************************
    qgsvertexmarker.cpp  - canvas item which shows a simple vertex marker
    ---------------------
    begin                : February 2006
    copyright            : (C) 2006 by Martin Dobias
    email                : wonder.sk at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include <QPainter>

#include "qgsvertexmarker.h"


QgsVertexMarker::QgsVertexMarker( QgsMapCanvas *mapCanvas )
  : QgsMapCanvasItem( mapCanvas )
{}

void QgsVertexMarker::setIconType( int type )
{
  mIconType = type;
}

void QgsVertexMarker::setIconSize( int iconSize )
{
  mIconSize = iconSize;
}

void QgsVertexMarker::setCenter( const QgsPointXY &point )
{
  mCenter = point;
  QPointF pt = toCanvasCoordinates( mCenter );
  setPos( pt );
}

void QgsVertexMarker::setColor( const QColor &color )
{
  mColor = color;
  update();
}

void QgsVertexMarker::setFillColor( const QColor &color )
{
  mFillColor = color;
  update();
}

void QgsVertexMarker::setPenWidth( int width )
{
  mPenWidth = width;
}

void QgsVertexMarker::paint( QPainter *p )
{
  qreal s = ( mIconSize - 1 ) / 2.0;

  QPen pen( mColor );
  pen.setWidth( mPenWidth );
  p->setPen( pen );
  QBrush brush( mFillColor );
  p->setBrush( brush );

  switch ( mIconType )
  {
    case ICON_NONE:
      break;

    case ICON_CROSS:
      p->drawLine( QLineF( -s, 0, s, 0 ) );
      p->drawLine( QLineF( 0, -s, 0, s ) );
      break;

    case ICON_X:
      p->drawLine( QLineF( -s, -s, s, s ) );
      p->drawLine( QLineF( -s, s, s, -s ) );
      break;

    case ICON_BOX:
      p->drawLine( QLineF( -s, -s, s, -s ) );
      p->drawLine( QLineF( s, -s, s, s ) );
      p->drawLine( QLineF( s, s, -s, s ) );
      p->drawLine( QLineF( -s, s, -s, -s ) );
      break;

    case ICON_CIRCLE:
      p->drawEllipse( QPointF( 0, 0 ), s, s );
      break;

    case ICON_DOUBLE_TRIANGLE:
      p->drawLine( QLineF( -s, -s,  s, -s ) );
      p->drawLine( QLineF( -s,  s,  s,  s ) );
      p->drawLine( QLineF( -s, -s,  s,  s ) );
      p->drawLine( QLineF( s, -s, -s,  s ) );
      break;

    case ICON_TRIANGLE:
      p->drawLine( QLineF( -s,  s,  s,  s ) );
      p->drawLine( QLineF( s,  s,  0, -s ) );
      p->drawLine( QLineF( 0, -s, -s,  s ) );
      break;
    case ICON_RHOMBUS:
      p->drawLine( QLineF( 0, -s, -s,  0 ) );
      p->drawLine( QLineF( -s,  0,  0,  s ) );
      p->drawLine( QLineF( 0,  s,  s,  0 ) );
      p->drawLine( QLineF( s,  0,  0, -s ) );
      break;
  }
}


QRectF QgsVertexMarker::boundingRect() const
{
  qreal s = qreal( mIconSize + mPenWidth ) / 2.0;
  return QRectF( -s, -s, 2.0 * s, 2.0 * s );
}

void QgsVertexMarker::updatePosition()
{
  setCenter( mCenter );
}

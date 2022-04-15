/***************************************************************************
  qgsdataitemguiprovider.cpp
  --------------------------------------
  Date                 : October 2018
  Copyright            : (C) 2018 by Nyall Dawson
  Email                : nyall dot dawson at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgsdataitemguiprovider.h"
#include "qgsdataitem.h"
#include "qgsproviderregistry.h"
#include "qgsprovidermetadata.h"
#include "qgsabstractdatabaseproviderconnection.h"
#include "qgsmessagebar.h"
#include <QMessageBox>
//
// QgsDataItemGuiContext
//

QgsMessageBar *QgsDataItemGuiContext::messageBar() const
{
  return mMessageBar;
}

void QgsDataItemGuiContext::setMessageBar( QgsMessageBar *messageBar )
{
  mMessageBar = messageBar;
}

//
// QgsDataItemGuiProvider
//

void QgsDataItemGuiProvider::populateContextMenu( QgsDataItem *, QMenu *, const QList<QgsDataItem *> &, QgsDataItemGuiContext )
{

}

bool QgsDataItemGuiProvider::rename( QgsDataItem *, const QString &, QgsDataItemGuiContext )
{
  return false;
}

bool QgsDataItemGuiProvider::deleteLayer( QgsLayerItem *, QgsDataItemGuiContext )
{
  return false;
}

bool QgsDataItemGuiProvider::handleDoubleClick( QgsDataItem *, QgsDataItemGuiContext )
{
  return false;
}

bool QgsDataItemGuiProvider::acceptDrop( QgsDataItem *, QgsDataItemGuiContext )
{
  return false;
}

bool QgsDataItemGuiProvider::handleDrop( QgsDataItem *, QgsDataItemGuiContext, const QMimeData *, Qt::DropAction )
{
  return false;
}

QWidget *QgsDataItemGuiProvider::createParamWidget( QgsDataItem *, QgsDataItemGuiContext )
{
  return nullptr;
}

void QgsDataItemGuiProvider::notify( const QString &title, const QString &message, QgsDataItemGuiContext context, Qgis::MessageLevel level )
{
  switch ( level )
  {
    case Qgis::MessageLevel::Info:
    case Qgis::MessageLevel::None:
    {
      if ( auto *lMessageBar = context.messageBar() )
      {
        lMessageBar->pushInfo( title, message );
      }
      else
      {
        QMessageBox::information( nullptr, title, message );
      }
      break;
    }
    case Qgis::MessageLevel::Warning:
    {
      if ( auto *lMessageBar = context.messageBar() )
      {
        lMessageBar->pushWarning( title, message );
      }
      else
      {
        QMessageBox::warning( nullptr, title, message );
      }
      break;
    }
    case Qgis::MessageLevel::Critical:
    {
      if ( auto *lMessageBar = context.messageBar() )
      {
        lMessageBar->pushCritical( title, message );
      }
      else
      {
        QMessageBox::critical( nullptr, title, message );
      }
      break;
    }
    case Qgis::MessageLevel::Success:
    {
      if ( auto *lMessageBar = context.messageBar() )
      {
        lMessageBar->pushSuccess( title, message );
      }
      else
      {
        // There is no "success" in message box, let's use information instead
        QMessageBox::information( nullptr, title, message );
      }
      break;
    }
  }
}

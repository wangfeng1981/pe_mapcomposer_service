/***************************************************************************
    qgsdevtoolwidgetfactory.cpp
     --------------------------
    Date                 : March 2020
    Copyright            : (C) 2020 Nyall Dawson
    Email                : nyall dot dawson at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgsdevtoolwidgetfactory.h"

QgsDevToolWidgetFactory::QgsDevToolWidgetFactory( const QString &title, const QIcon &icon )
  : mIcon( icon )
  , mTitle( title )
{
}

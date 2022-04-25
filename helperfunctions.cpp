#include "helperfunctions.h"

#include "qgssqliteutils.h"
#include <sqlite3.h>
#include <iostream>
#include <string>
#include <QDebug>

using std::cout ;
using std::endl;
using std::string;

QStringList OmcHelperFunctions::s_allCrsAuthidList;
QStringList OmcHelperFunctions::s_allDescList;
QStringList OmcHelperFunctions::s_allWktList;

void OmcHelperFunctions::loadAllCrs()
{
    s_allCrsAuthidList.clear();
    s_allDescList.clear();
    s_allWktList.clear();

    s_allCrsAuthidList.append("EPSG:4326");
    s_allDescList.append("等经纬坐标WGS84");
    s_allWktList.append("");

  //Setup connection to the existing custom CRS database:
  sqlite3_database_unique_ptr database;
  sqlite3_statement_unique_ptr preparedStatement;
  qDebug()<<"QgsApplication::qgisUserDatabaseFilePath():"<<QgsApplication::qgisUserDatabaseFilePath() ;
  //check the db is available
  int result = database.open_v2( QgsApplication::qgisUserDatabaseFilePath(), SQLITE_OPEN_READONLY, nullptr );
  if ( result != SQLITE_OK )
  {
    cout<< "Can't open database:" << database.errorMessage().toStdString()<<endl;
    Q_ASSERT( result == SQLITE_OK );
  }

  QString sql = QStringLiteral( "select srs_id,description,wkt from tbl_srs WHERE description like \"omc_%\" " );
  preparedStatement = database.prepare( sql, result );
  if ( result == SQLITE_OK )
  {
    while ( preparedStatement.step() == SQLITE_ROW )
    {
      const QString id = QString("INTERNAL:") + preparedStatement.columnAsText( 0 );
      const QString name = preparedStatement.columnAsText( 1 );
      const QString wkt = preparedStatement.columnAsText( 2 );

      if ( !wkt.isEmpty() )
      {
          qDebug()<<"---" ;
          qDebug()<<id ;
          qDebug()<<name;
          qDebug()<<wkt;
        s_allCrsAuthidList.append(id);
        s_allDescList.append(name);
        s_allWktList.append(wkt);
      }
    }
  }
  else
  {
    cout<<"OmcHelperFunctions::getCustomCrs query failed sql: " << sql.toStdString()<<endl ;;
  }
  preparedStatement.reset();
}

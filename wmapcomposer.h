#ifndef WMAPCOMPOSER_H
#define WMAPCOMPOSER_H

#include <QObject>
#include "qgsproject.h"
#include <QString>
#include <string>
#include "ajson5.h"
#include <sstream>

#include "qgsrasterlayer.h"
#include "qgsmapcanvas.h"
#include "qgsproject.h"
#include "qgsvectorlayer.h"
#include "qgsdatasourceuri.h"
#include "qgsnewhttpconnection.h"
#include "qgswmsconnection.h"
#include "qgswmscapabilities.h"
#include "qgslayoutmanager.h"
#include "qgsprintlayout.h"
#include "qgslayoutitemmap.h"
#include "qgslayoutpagecollection.h"
#include "qgslayoutitempage.h"

#include "qgslayoutitem.h"
#include "qgslayoutitemmap.h"
#include "qgslayoutitempicture.h"
#include "qgslayoutitemlabel.h"
#include "qgslayoutitemlegend.h"
#include "qgslayoutitempolygon.h"
#include "qgslayoutitempolyline.h"
#include "qgslayoutitemscalebar.h"
#include "qgslayoutitemshape.h"
#include "qgslayoutitempolyline.h"
#include "qgssymbol.h"
#include "qgslayoutitemregistry.h"
#include "qgssymbollayer.h"
#include "qgslinesymbollayer.h"
#include "qnamespace.h"
#include "qgsfillsymbollayer.h"

#include <QTextStream>
#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>
#include <QDate>
#include <QTime>
#include <QDateTime>




using namespace std;
using namespace ArduinoJson;

class WMapComposer
{
public:

    ///
    /// \brief WMapComposer
    /// \param pedir 是nginx pe目录的完整路径
    /// \param omcresdir
    ///
    WMapComposer(QString pedir, QString omcresdir );/// here here

    ///
    /// \brief run
    /// \param method
    /// \param jsondata
    /// \param error
    /// \return 0 allok , others failed just read error.
    ///
    int run(string method,QString& jsondata,string& outJsonData, string& error) ;

    int projectNew(QString& jsondata,string& outJsonData,string& error) ;

    ///
    /// \brief projectAddWms support wQStringms,wmts
    /// \param jsondata
    /// \param error
    /// \return
    ///
    int projectAddWms(QString& jsondata,string& outJsonData,string& error) ;

    /// file,left,top,width,height
    int layoutAddMap(QString& jsondata,string& outJsonData,string& error) ;
    /// file,left,top,width,height,text
    int layoutAddLabel(QString& jsondata,string& outJsonData,string& error) ;
    /// file,left,top,width,height,mapuuid
    int layoutAddScaleBar(QString& jsondata,string& outJsonData,string& error);
    /// file,left,top,width,height,mapuuid
    int layoutAddLegend(QString& jsondata,string& outJsonData,string& error) ;
    /// file,left,top,width,height,relsrc
    int layoutAddImage(QString& jsondata,string& outJsonData,string& error) ;
    /// file,left,top,width,height
    int layoutAddNorth(QString& jsondata,string& outJsonData,string& error) ;

    /// file,left,top,width,height
    ///
    int layoutAddRect(QString& jsondata,string& outJsonData,string& error) ;
    int layoutAddEll(QString& jsondata,string& outJsonData,string& error) ;
    int layoutAddArrow(QString& jsondata,string& outJsonData,string& error) ;

    /// file,vecname,vecfile(geojson or shp)
    int projectAddVec(QString& jsondata,string& outJsonData,string& error) ;
    /// file,dpi
    int projectExport(QString& jsondata,string& outJsonData,string& error) ;





    /// one method one line...
    string getMethodAPIs() ;

private:
    QgsProject* m_project ;
    QString m_pedir ;//在pedir目录下面建立 layout 文件夹，里面临时文件按日期建子目录，子目录下面为 {hhmmss}-{rrrr}.xxx文件
    QString m_layoutResDir ;//资源目录
    ///
    /// \brief m_omcOutDirAbsPath 输出绝对路径带/
    ///
    QString m_omcOutDirAbsPath ; //
    int checkAndResetProjectFile( string& relnewfile,string& error) ;
    int renderMapItem(QgsLayoutItem* oneItem,string absfilename, int dpi,
                      QgsLayout* pLayout ) ;

    QgsLayoutItem* findLayoutItemByUuid(QgsLayout* layout,string uuid) ;

    /// outjsonfile is full absfilepath
    /// outfileroot is relfilepath will be add {outfileroot}{-{index}}.png
    int exportProjectJsonFile( QgsPrintLayout* layout, QString reloutfilenameroot,int dpi,string& outjsondata, string& error) ;


    ///
    QJsonObject extractLayoutItemData( QgsLayoutItem* item) ;

    ///
    /// \brief layoutAddRectEllArrow
    /// \param shapetype : rect,ell,arrow
    /// \param jsondata
    /// \param error
    /// \return
    ///
    int layoutAddRectEllArrow(string shapetype,QString& jsondata,string& outJsonData,string& error) ;



    QJsonObject extractMapItemGridData( QgsLayoutItemMap* mapItem) ;
    QJsonObject qcolor2JsonObject(const QColor& qcolor) ;


    ///
    /// \brief penStyle2String
    /// \param penstyle
    /// \return 仅支持dash,dot,solid三种类型，其他类型均返回solid
    ///
    QString penStyle2String( Qt::PenStyle penstyle ) ;

    QString alignFlag2String( Qt::AlignmentFlag aflag) ;

};

#endif // WMAPCOMPOSER_H

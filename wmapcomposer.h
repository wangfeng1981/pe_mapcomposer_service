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
#include "qgslayertree.h"
#include "qgsrenderer.h"
#include "qgssinglesymbolrenderer.h"
#include "qgsmarkersymbollayer.h"

#include "qgslayertreenode.h"
#include "qgslayertreegroup.h"
#include "qgsmapthemecollection.h"


#include <QTextStream>
#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>
#include <QDate>
#include <QTime>
#include <QDateTime>
#include <fstream>
#include <QJsonParseError>
#include <QJsonDocument>
#include "helperfunctions.h"

#include "spdlog/spdlog.h"

#include "pelegend.h" ;
#include "omcjsonhelpertool.h"

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
    int projectNewFromTemplate(QString& jsondata,string& outJsonData,string& error) ;


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
    /// file,stylefile
    int layoutAddStyleLegend(QString& jsondata,string& outJsonData,string& error) ;

    /// file,left,top,width,height
    ///
    int layoutAddRect(QString& jsondata,string& outJsonData,string& error) ;
    int layoutAddEll(QString& jsondata,string& outJsonData,string& error) ;
    int layoutAddArrow(QString& jsondata,string& outJsonData,string& error) ;

    /// file,vecname,vecfile(geojson or shp)
    int projectAddVec(QString& jsondata,string& outJsonData,string& error) ;
    /// file,dpi
    int projectExport(QString& jsondata,string& outJsonData,string& error) ;
    ///
    int itemMove(QString&jsondata,string&outJsonData,string&error) ;
    ///
    int itemResize(QString&jsondata,string&outJsonData,string&error) ;
    /// map.extent: file,mapuuid,xmin,xmax,ymin,ymax
    int mapSetExtent(QString& jsondata,string&outJsonData,string&error) ;
    /// layout.deleteitem : file,uuid
    int layoutDeleteItem(QString& jsondata,string&outJsonData,string&error) ;
    /// project.deletelayer: file,lyrid
    int projectDeleteLayer(QString& jsondata,string&outJsonData,string&error) ;

    /// item.setproperty : file,uuid,loitype,...a lot...
    int itemSetProperty(QString& jsondata,string&outJsonData,string&error) ;

    ///layer.setproperty : file,qlyrid,type2,...a lot...
    int layerSetProperty(QString& jsondata,string& outJsonData,string& error) ;

    ///layout.setpage : file,dir(v|h)
    int layoutSetPage(QString& jsondata,string& outJsonData,string& error) ;

    /// layout.exportimg : file,dpi,clip (clip means cliptoextent)
    int layoutExportImage(QString& jsondata,string& outJsonData,string& error) ;

    /// layout.makethumb : file,outfile
    int layoutMakeThumb(QString& jsondata,string& outJsonData,string& error) ;


    /// 2022-5-27 file,left,right,top,bottom,mapuuid(optional)
    int projectZoom(QString& jsondata,string& outJsonData,string& error) ;

    //2022-9-18
    int mapSetExtentAndDraw(QString& jsondata,string& outJsonData,string& error);

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
    //2022-5-27 如果没有返回null
    QgsLayoutItemMap* findFirstLayoutItemMap(QgsLayout* layout) ;

    QgsMapLayer* findMapLayerByLyrid(QString lyrid) ;

    /// outjsonfile is full absfilepath
    /// outfileroot is relfilepath will be add {outfileroot}{-{index}}.png
    int exportProjectJsonFile( QgsPrintLayout* layout, QString reloutfilenameroot,int dpi,string& outjsondata, string& error) ;

    /// 2022-9-18 draw one layoutItemMap into png
    int drawLayoutItemMapIntoPng(QgsLayoutItemMap* liMap,int dpi,QString absPngfilename,string& error);

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
    QColor jsonObject2QColor(const QJsonObject& clrObj) ;

    ///
    /// \brief penStyle2String
    /// \param penstyle
    /// \return 仅支持dash,dot,solid三种类型，其他类型均返回solid
    ///
    QString penStyle2String( Qt::PenStyle penstyle ) ;

    QString alignFlag2String( Qt::AlignmentFlag aflag) ;

    double getJsonObjDoubleValue( const QJsonObject& obj,QString key) ;

    int setLayoutItemFrameByJsonObject(QgsLayoutItem* item,const QJsonObject& jobj, string& error) ;
    int setLayoutItemMapGrid(QgsLayoutItem* item,const QJsonObject& jobj, string& error) ;
    int setLayoutItemMapData(QgsLayoutItem* item,const QJsonObject& jobj, string& error) ;
    int setLayoutItemLabel(QgsLayoutItem* item,const QJsonObject& jobj,string& error) ;
    int setLayoutItemShape(QgsLayoutItem* item ,const QJsonObject& jobj,string& error) ;
    int setLayoutItemPeStyleLegend(QgsLayoutItem* item ,const QJsonObject& jobj,string& error);

    int extractVecLayerPointSymbol(QgsVectorLayer* layer,QJsonObject& retdataobj,string& error) ;
    int extractVecLayerLineSymbol(QgsVectorLayer* layer,QJsonObject& retdataobj,string& error) ;
    int extractVecLayerPolySymbol(QgsVectorLayer* layer,QJsonObject& retdataobj,string& error) ;

    int setLayerPointSymbol(QgsVectorLayer*layer,const QJsonObject& symObj,string& error) ;
    int setLayerLineSymbol(QgsVectorLayer*layer, const QJsonObject& symObj,string& error) ;
    int setLayerPolySymbol(QgsVectorLayer*layer, const QJsonObject& symObj,string& error) ;

    //2022-5-25 是否有未命名theme,若有未命名的theme，返回true，并将可见的图层id赋予ref_vislyridlist中
    bool hasNoneNamedTheme(QgsProject* prj, QStringList& ref_vislyridlist) ;

    //2022-5-30 检查layout中的style:xxx.json item，然后使用dpi的图片进行替换source
    void updateStyleLegendImagesByDpi(QgsPrintLayout* layout,int dpi) ;

    //if no, return nullptr
    QgsPrintLayout* getFirstLayout(QgsProject* prj) ;
    //make new filename by 3 parts, part2 only use its baseName.
    QString concatNewFilename(QString  part1 , QString  part2, QString part3 );
    //get item id is 'legend_placeholder', if not return null.
    QgsLayoutItem* findFirstLayoutItemOfLegendPlaceholder(QgsLayout* layout);
};

#endif // WMAPCOMPOSER_H

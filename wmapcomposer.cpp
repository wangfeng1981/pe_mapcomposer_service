#include "wmapcomposer.h"

WMapComposer::WMapComposer(QString pedir,QString resdir)
{
    m_project = nullptr ;
    m_pedir = pedir ;
    m_layoutResDir = resdir ;
    qDebug()<<"using pedir:"<<m_pedir  ;

    //make subdir of pedir/omc_out/
    m_omcOutDirAbsPath = m_pedir + "omc_out/" ;
    {
        QDir omcOutDir(m_omcOutDirAbsPath) ;
        if( omcOutDir.exists()==false ){
            qDebug()<<"try to create subdir: "<<m_omcOutDirAbsPath ;
            bool mkgood = omcOutDir.mkdir(m_omcOutDirAbsPath) ;
            if( mkgood==false ){
                qDebug()<<"Critical : make omc_out subdir failed. exit(13)" ;
                spdlog::critical("Critical : make omc_out subdir failed. exit(13)");
                exit(13) ;
            }
        }
        qDebug()<<"omc_out is ok:" << m_omcOutDirAbsPath ;
    }
}



/// one method one line...
string WMapComposer::getMethodAPIs()
{
    string out = "" ;
    out += "--- methods start ---\n" ;
    out += "layout.addimage:file,relsrc\n" ;
    out += "layout.addlabel:file,text\n" ;
    out += "layout.addlegend:file,\n" ;
    out += "layout.addmap:file,x0,x1,y0,y1,\n" ;
    out += "layout.addnorth:file,\n" ;
    out += "layout.addscalebar:file,\n" ;
    out += "layout.addrect:file,\n" ;
    out += "layout.addell:file,\n" ;
    out += "layout.addarrow:file,\n" ;
    out += "layout.addstylelegend:file,stylefile,\n" ;
    out += "layout.deleteitem: file,uuid, \n" ;
    out += "project.addwms: file,capurl,tms,layers,styleid,datetime,sdui,roiid\n" ;
    out += "project.addvec:file,vecname,vecfile\n" ;
    out += "project.new:\n" ;
    out += "project.newfromtem:temfile\n" ;
    out += "project.export:file,dpi\n" ;
    out += "project.deletelayer:file,lyrid\n" ;
    out += "project.zoom:file,left,right,top,bottom,mapuuid(opt)\n" ;
    out += "item.move:file,left,top,uuid\n" ;
    out += "item.resize:file,uuid,width,height\n" ;
    out += "map.setextent: file,mapuuid,xmin,xmax,ymin,ymax\n" ;
    out += "map.setextentndraw: file,mapuuid,dpi,xmin,xmax,ymin,ymax" ;
    out += "item.setproperty : file,uuid,loitype,...a lot...\n" ;
    out += "layer.setproperty : file,qlyrid,type2,...a lot...\n" ;
    out += "layout.setpage : file,dir(v|h) \n" ;
    out += "layout.exportimg : file,dpi,clip (clip means cliptoextent) \n" ;
    out += "layout.makethumb : file,outfile \n" ;
    out += "--- methods end   ---\n" ;
    return out ;
}


///
/// \brief run
/// \param method
/// \param jsondata
/// \param error
/// \return 0 allok , others failed just read error.
///
int WMapComposer::run(string method,QString& jsondata,string& outJsonData, string& error)
{
    outJsonData = "{}" ;
    if( method == "project.new" ){
        return this->projectNew(jsondata , outJsonData, error) ;
    }
    else if( method == "project.newfromtem" ){
        return this->projectNewFromTemplate(jsondata,outJsonData,error) ;
    }
    else if( method=="project.addwms")
    {
        return this->projectAddWms(jsondata, outJsonData,error) ;
    }
    else if( method=="layout.addmap" ){
        return this->layoutAddMap(jsondata, outJsonData,error) ;
    }
    else if( method=="layout.addlabel")
    {
        return this->layoutAddLabel(jsondata, outJsonData, error) ;
    }
    else if( method=="layout.addimage"){
        return this->layoutAddImage(jsondata, outJsonData,error) ;
    }
    else if( method == "layout.addlegend" ){
        return this->layoutAddLegend(jsondata, outJsonData,error) ;
    }
    else if( method=="layout.addnorth")
    {
        return this->layoutAddNorth(jsondata, outJsonData,error) ;
    }
    else if( method=="layout.addscalebar")
    {
        return this->layoutAddScaleBar(jsondata, outJsonData,error) ;
    }
    else if( method=="layout.addrect"){
        return this->layoutAddRect(jsondata, outJsonData,error) ;
    }
    else if( method=="layout.addell"){
        return this->layoutAddEll(jsondata, outJsonData,error) ;
    }
    else if( method=="layout.addarrow"){
        return this->layoutAddArrow(jsondata, outJsonData,error) ;
    }
    else if( method=="layout.addstylelegend"){
        return this->layoutAddStyleLegend(jsondata, outJsonData,error) ;
    }
    else if(method=="project.addvec")
    {
        return this->projectAddVec(jsondata, outJsonData,error) ;
    }
    else if(method=="project.export")
    {
        return this->projectExport(jsondata, outJsonData,error) ;
    }
    else if( method=="item.move"){
        return this->itemMove(jsondata, outJsonData,error) ;
    }
    else if( method=="item.resize"){
        return this->itemResize( jsondata, outJsonData , error) ;
    }
    else if( method=="map.setextent"){
        return this->mapSetExtent(jsondata,outJsonData,error) ;
    }
    else if( method=="map.setextentndraw"){
        return this->mapSetExtentAndDraw(jsondata,outJsonData,error) ;
    }
    else if( method=="layout.deleteitem"){
        return this->layoutDeleteItem(jsondata,outJsonData,error) ;
    }
    else if( method=="project.deletelayer"){
        return this->projectDeleteLayer(jsondata,outJsonData,error) ;
    }else if( method=="item.setproperty"){
        return this->itemSetProperty(jsondata,outJsonData,error) ;
    }else if( method=="layer.setproperty"){
        return this->layerSetProperty(jsondata,outJsonData,error) ;
    }
    else if( method=="layout.setpage" ){
        return this->layoutSetPage(jsondata,outJsonData,error) ;
    }
    else if( method=="layout.exportimg" ){
        return this->layoutExportImage(jsondata,outJsonData,error) ;
    }
    else if( method=="layout.makethumb" ){
        return this->layoutMakeThumb(jsondata,outJsonData,error) ;
    }
    else if( method=="project.zoom" ){
        return this->projectZoom(jsondata,outJsonData,error) ;
    }
    error = "not supported method:'"+method+"'." ;
    cout<<"not supported method:"<<method<<endl ;
    return 9 ;
}

int WMapComposer::checkAndResetProjectFile( string& relnewfile ,string& error)
{
    /// 这里Qgis project文件中的 fileName是完整qgs文件路径，但是返回前端的时候pedir下面的相对路径，注意这一点
    ///
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    if( relnewfile=="" ){
        error = "empty new file." ;
        return 1 ;
    }
    string newfile = m_pedir.toStdString()+relnewfile ;
    if( newfile != this->m_project->fileName().toStdString() ){
        if( this->m_project->fileName().length()!=0 ) this->m_project->write() ;
        this->m_project->clear() ;
        bool rok = this->m_project->read( newfile.c_str() ) ;
        if( rok==false ){
            error = "failed to read new file." ;
            return 2 ;
        }
    }
    return 0 ;
}



int WMapComposer::projectNew(QString& jsondata, string& outJsonData,string& error)
{
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }

    string oldfilename = this->m_project->fileName().toStdString() ;
    cout<<"oldfilename:"<<oldfilename<<endl ;
    if( oldfilename != "" )
    {
        this->m_project->write() ;
    }

    this->m_project->clear();
    this->m_project->setCrs( QgsCoordinateReferenceSystem("EPSG:4326"));

    //create daily subdir
    QString ymdStr = QDate::currentDate().toString("yyyyMMdd") ;
    QString dayDirAbs ;
    {
        dayDirAbs = m_omcOutDirAbsPath + ymdStr + "/" ;
        QDir qdir(dayDirAbs) ;
        if( qdir.exists() ==false ){
            qDebug()<<"try to make day dir:"<<dayDirAbs ;
            bool mkdirok = qdir.mkdir(dayDirAbs) ;
            if( mkdirok==false ){
                qDebug()<<"Critical : failed to make day dir:"<<dayDirAbs<<". exit(14)." ;
                spdlog::critical("Critical : failed to make day dir:{}", dayDirAbs.toStdString().c_str());
                exit(14) ;
            }
        }
    }
    QString newqgsfilename =dayDirAbs + QTime::currentTime().toString("HHmmss") + "-" + QString::number(qrand()%10000).rightJustified(4,'0') + ".qgs" ;


    //新建一个layout

    QgsPrintLayout* newlayout = new QgsPrintLayout( m_project ) ;
    newlayout->setName("1");

    //新建一个空Page
    QgsLayoutItemPage* newpage = QgsLayoutItemPage::create(newlayout) ;
    newpage->setPageSize("A4", QgsLayoutItemPage::Orientation::Landscape );

    newlayout->pageCollection()->addPage(newpage) ;

    bool addlayoutok = this->m_project->layoutManager()->addLayout(newlayout) ;
    if( addlayoutok==false ){
        error = "failed to create print layout." ;
        return 4 ;
    }

    qDebug()<<"newfilename:"<<newqgsfilename  ;
    bool wok = this->m_project->write(newqgsfilename  ) ;
    if( wok==false ){
        error = "failed to write new file." ;
        return 3 ;
    }

    QString relNewfilename = newqgsfilename.replace(m_pedir,"") ;
    outJsonData = "{\"file\":\""+relNewfilename.toStdString()+"\"}" ;

    return 0 ;
}

// 从模板创建绘图工程 2022-5-24
int WMapComposer::projectNewFromTemplate(QString& jsondata,string& outJsonData,string& error)
{
    // jsondata 中需要有temfile 字段表示模板qgis文件的相对路径
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }

    string temfile = jdoc.object().value("temfile").toString().toStdString() ;
    cout<<"temfile:"<<temfile<<endl ;
    if(temfile==""){
        error = "empty temfile." ;
        return 2 ;
    }

    //生成新的qgs文件路径
    //create daily subdir
    QString ymdStr = QDate::currentDate().toString("yyyyMMdd") ;
    QString dayDirAbs ;
    {
        dayDirAbs = m_omcOutDirAbsPath + ymdStr + "/" ;
        QDir qdir(dayDirAbs) ;
        if( qdir.exists() ==false ){
            qDebug()<<"try to make day dir:"<<dayDirAbs ;
            bool mkdirok = qdir.mkdir(dayDirAbs) ;
            if( mkdirok==false ){
                qDebug()<<"Critical : failed to make day dir:"<<dayDirAbs<<". exit(14)." ;
                spdlog::critical("Critical : failed to make day dir:{}", dayDirAbs.toStdString().c_str());
                exit(14) ;
            }
        }
    }
    QString newqgsfilename =dayDirAbs + QTime::currentTime().toString("HHmmss")
            + "-" + QString::number(qrand()%10000).rightJustified(4,'0') + ".qgs" ;

    //关闭老文件，打开模板文件
    int code1 = checkAndResetProjectFile(temfile , error ) ;
    if( code1 != 0 ) return code1 ;

    //另存为...
    qDebug()<<"newqgsfilename:"<<newqgsfilename  ;
    bool wok = this->m_project->write(newqgsfilename) ;
    if( wok==false ){
        error = "failed to write new file." ;
        return 3 ;
    }


    //返回
    QString relNewfilename = newqgsfilename.replace(m_pedir,"") ;
    outJsonData = "{\"file\":\""+relNewfilename.toStdString()+"\"}" ;

    return 0 ;
}




// jsondata: file,capurl,tms,layers,styleid,datetime,sdui,roiid
// 2022-5-25 检查qgs是否有placeholder group，有的话加到group里面，反之正常添加图层即可。
int WMapComposer::projectAddWms(QString& jsondata , string& outJsonData ,string& error)
{
    // JSON //////////////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    string relfilepath = jdoc.object().value("file").toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;


    QString wmsCapurl = jdoc.object().value("capurl").toString() ;
    QString wmsTms = jdoc.object().value("tms").toString() ;//tileMatrixSet
    QString wmsLayers = jdoc.object().value("layers").toString() ;
    int wmsStyleid = 0 ;
    if( jdoc.object().value("styleid").type() == QJsonValue::Type::Double ) wmsStyleid = jdoc.object().value("styleid").toInt() ;
    else  wmsStyleid = jdoc.object().value("styleid").toString().toInt() ;

    int64_t wmsDatetime = 0;
    if(jdoc.object().value("datetime").type() ==QJsonValue::Type::Double ) wmsDatetime = jdoc.object().value("datetime").toDouble() ;
    else wmsDatetime = jdoc.object().value("datetime").toString().toDouble() ;

    QString wmsSdui = jdoc.object().value("sdui").toString() ;
    QString wmsRoiid = jdoc.object().value("roiid").toString() ;

    if( wmsCapurl.length() == 0 ){
        error = "empty wms capability url." ;
        return 3 ;
    }

    if( wmsTms.length() == 0 ){
        error = "empty tileMatrixSet." ;
        return 3 ;
    }

    if( wmsLayers.length() == 0 ){
        error = "empty layers." ;
        return 3 ;
    }


    if(wmsSdui.length()==0 || wmsSdui.compare("null") == 0 || wmsSdui.compare("{}") == 0 ){
        wmsSdui = "null" ;
    }

    if(wmsRoiid.length()==0 || wmsRoiid.compare("null") == 0 ){
        wmsRoiid = "null" ;
    }


    // JSON END ///////////////////////////////////////////////////////////////


    QgsDataSourceUri uri1;

    {//a working wms layer exampole
//        uri1.setParam("url", "http://localhost/qgisserver?SERVICE=WMS&VERSION=1.3.0&REQUEST=GetCapabilities&map=/home/hadoop/qgisserver_projects/world.qgs");
//        //    ///////////////////////////////////////
//        //uri1.setParam( QStringLiteral( "tileMatrixSet" ), "ms_7");
//        uri1.setParam( QStringLiteral( "layers" ), "world-truecolor" );
//        uri1.setParam( QStringLiteral( "styles" ), "default" );
//        uri1.setParam( QStringLiteral( "format" ), "image/png" );
//        uri1.setParam( QStringLiteral( "crs" ), "EPSG:4326" );
//        //uri1.setParam( QStringLiteral( "tileDimensions" ), "datetime=20190601000000" );
    }

    {//pixelengine wms
        uri1.setParam("url", wmsCapurl);
        uri1.setParam( QStringLiteral( "tileMatrixSet" ), wmsTms );
        uri1.setParam( QStringLiteral( "layers" ),        wmsLayers );
        uri1.setParam( QStringLiteral( "styles" ), "default" );
        uri1.setParam( QStringLiteral( "format" ), "image/png" );
        uri1.setParam( QStringLiteral( "crs" ), "EPSG:4326" );
        QString dimsStr = QString("datetime=")+QString::number(wmsDatetime)
                + ";styleid="+QString::number(wmsStyleid)
                + ";sdui="+wmsSdui
                + ";roiid="+wmsRoiid ;
        //uri1.setParam( QStringLiteral( "tileDimensions" ), "datetime=20200600000000;styleid=2;sdui=null" );
        uri1.setParam( QStringLiteral( "tileDimensions" ), dimsStr );
    }

    //qDebug()<<uri1.encodedUri();

    QgsRasterLayer* rlayer = new QgsRasterLayer( uri1.encodedUri() ,"wmslyr","wms") ;
    if( rlayer->isValid() )
    {
        qDebug()<<"rlayer good";
        rlayer->setCustomProperty("styleid", QVariant::fromValue(wmsStyleid)) ;
        //检查是否有placeholder group
        QgsLayerTreeGroup* plgroup = this->m_project->layerTreeRoot()->findGroup("placeholder") ;
        if( plgroup != nullptr )
        {
            m_project->addMapLayer(rlayer,false);
            plgroup->addLayer(rlayer) ;
        }else{
            m_project->addMapLayer(rlayer);
        }
    }else{
        qDebug()<<"rlayer bad,"<< rlayer->error().message();
        // delete rlayer; //bugfixed 2022-5-25, we can not delete this pointer.
        spdlog::error("WMapComposer::projectAddWms failed. rlayer is invalid: {}",
                      rlayer->error().message().toStdString()) ;
        error = "rlayer is not valid." ;
        return 4 ;
    }


    // SAVE //////////////////////////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }
    // ///////////////////////////////////////
    outJsonData = "{\"lyrid\":\""+rlayer->id().toStdString()+"\"}" ;

    return 0 ;
}

//jsondata: file,x0,x1,y0,y1
int WMapComposer::layoutAddMap(QString& jsondata , string& outJsonData,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    string relfilepath = jdoc.object().value("file").toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;

    double left = 0;// jroot["left"].as<double>() ;
    double top =  0;//jroot["top"].as<double>() ;
    double width =100;// jroot["width"].as<double>() ;
    double height =100;// jroot["height"].as<double>() ;
    cout<<"l,t,w,h:"<<left<<","<<top<<","<<width<<","<<height<<endl ;

    double x0 = getJsonObjDoubleValue( jdoc.object() , "x0") ;
    double x1 = getJsonObjDoubleValue( jdoc.object() , "x1") ;
    double y0 = getJsonObjDoubleValue( jdoc.object() , "y0") ;
    double y1 = getJsonObjDoubleValue( jdoc.object() , "y1") ;

    if(x0<-180) x0 = -180 ;
    if( x1>180) x1 = 180 ;
    if( y0< -90 ) y0 = -90 ;
    if( y1> 90) y1 = 90 ;

    if( x0==x1 ){
        x0 = -180 ;
        x1 = 180 ;
    }
    if( y0 == y1 ){
        y0 = -90 ;
        y1 = 90 ;
    }


    // //////////////////////////////////////////////

    QgsPrintLayout* layout = getFirstLayout( this->m_project ) ;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 2 ;
    }

    QgsLayoutItemMap* mapItem = QgsLayoutItemMap::create( layout ) ;
    mapItem->setCrs( QgsCoordinateReferenceSystem("EPSG:4326"));
    mapItem->setPos(left,top);
    mapItem->attemptResize( QgsLayoutSize(width,height));
    mapItem->setExtent( QgsRectangle(x0,y0,x1,y1) );
    double scale = (x1-x0)*111*1000*1000 / width ;
    mapItem->setScale( scale );
    layout->addLayoutItem(mapItem) ;


    // SAVE //////////////////////////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }
    // ///////////////////////////////////////
    outJsonData = "{\"uuid\":\""+mapItem->uuid().toStdString()+"\"}" ;

    return 0 ;
}


//int WMapComposer::layoutExportParts( QgsPrintLayout* layout,int dpi, string absoutfilenameroot, string& error)
//{
//    if( layout==nullptr ){
//        error = "failed to get layout pointer." ;
//        return 12 ;
//    }

//    QList<QgsLayoutItem*> loItems ;
//    layout->layoutItems(loItems) ;

//    int iitem = 0 ;
//    for(auto it = loItems.begin() ; it != loItems.end() ; ++ it )
//    {
//        stringstream ss ;
//        ss<<absoutfilenameroot<<"-"<<(++iitem)<<".png" ;
//        string absoutname1 = ss.str() ;
//        renderMapItem( *it , absoutname1 , dpi , layout, loItems) ;
//    }

//    return 0 ;
//}

int WMapComposer::renderMapItem(QgsLayoutItem* oneItem,string absfilename, int dpi,
                                QgsLayout* pLayout )
{
    oneItem->setVisibility(true);
    pLayout->refresh();
    QgsLayoutExporter exporter(pLayout);
    QRectF mapRegion = pLayout->pageItemBounds(0,true) ;
    QImage outImage = exporter.renderRegionToImage( mapRegion,
                                           QSize(),
                                           dpi ) ;
    outImage.save( absfilename.c_str()) ;
    oneItem->setVisibility(false);

    return 0 ;
}


int WMapComposer::layoutAddLabel(QString& jsondata , string& outJsonData ,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string relfilepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;

    double left = 0;//jroot["left"].as<double>() ;
    double top =  0;//jroot["top"].as<double>() ;
    double width = 100;//jroot["width"].as<double>() ;
    double height = 20;//jroot["height"].as<double>() ;
    cout<<"l,t,w,h:"<<left<<","<<top<<","<<width<<","<<height<<endl ;
    QString text = jroot["text"].toString() ;
    qDebug()<<"text:"<<text ;

    // //////////////////////////////////////////////

    QgsPrintLayout* layout = getFirstLayout( this->m_project ) ;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 2 ;
    }

    QgsLayoutItemLabel* label = QgsLayoutItemLabel::create(layout) ;
    label->setPos(left,top);
    label->setText(text);
    label->attemptResize( QgsLayoutSize(width,height));
    layout->addLayoutItem(label) ;


    // SAVE //////////////////////////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }
    // ///////////////////////////////////////
    outJsonData = "{\"uuid\":\""+label->uuid().toStdString()+"\"}" ;

    return 0 ;
}


/// file,left,top,width,height,mapuuid
int WMapComposer::layoutAddScaleBar(QString& jsondata  , string& outJsonData ,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string relfilepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;

    double left = 0;//jroot["left"].as<double>() ;
    double top =  0;//jroot["top"].as<double>() ;
    double width = 100;//jroot["width"].as<double>() ;
    double height = 20;//jroot["height"].as<double>() ;
    cout<<"l,t,w,h:"<<left<<","<<top<<","<<width<<","<<height<<endl ;
    string mapuuid = jroot["mapuuid"].toString().toStdString() ;
    qDebug()<<"mapuuid:"<<mapuuid.c_str() ;

    // //////////////////////////////////////////////

    QgsPrintLayout* layout = getFirstLayout(this->m_project) ;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 12 ;
    }

    QgsLayoutItem* mapItem0 = this->findLayoutItemByUuid(layout , mapuuid) ;
    if( mapItem0==nullptr ){
        error = "failed to find map item." ;
        return 13 ;
    }
    QgsLayoutItemMap* mapItem1 = (QgsLayoutItemMap*) mapItem0 ;

    QgsLayoutItemScaleBar* scalebar = QgsLayoutItemScaleBar::create(layout) ;
    scalebar->setLinkedMap( mapItem1);
    scalebar->setSegmentSizeMode( QgsScaleBarSettings::SegmentSizeMode::SegmentSizeFitWidth );
    scalebar->setMinimumBarWidth(50);
    scalebar->setMaximumBarWidth(100);
    scalebar->setNumberOfSegments(2);
    scalebar->setNumberOfSegmentsLeft(0);
    scalebar->setUnitLabel("km");
    scalebar->setUnits( QgsUnitTypes::DistanceUnit::DistanceKilometers );
    scalebar->setPos(left,top);
    scalebar->update();
    scalebar->attemptResize( QgsLayoutSize(width,height));
    scalebar->update();
    layout->addLayoutItem(scalebar);
    scalebar->update();
    scalebar->setLinkedMap( mapItem1);


    // SAVE //////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }
    // ///////////////////////////////////////
    outJsonData = "{\"uuid\":\""+scalebar->uuid().toStdString()+"\"}" ;

    return 0 ;
}

QgsLayoutItem* WMapComposer::findLayoutItemByUuid(QgsLayout* layout ,string uuid)
{
    QString uuid1(uuid.c_str()) ;
    QList<QgsLayoutItem*> itemList ;
    layout->layoutItems( itemList ) ;
    for(auto it = itemList.begin() ; it != itemList.end() ; ++ it )
    {
        if( (*it)->uuid().compare(uuid1) == 0 ){
            return *it ;
        }
    }
    return nullptr ;
}


/// file,left,top,width,height,mapuuid
int WMapComposer::layoutAddLegend(QString& jsondata , string& outJsonData ,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string relfilepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;

    double left = 0;//jroot["left"].as<double>() ;
    double top =  0;//jroot["top"].as<double>() ;
    double width = 100;//jroot["width"].as<double>() ;
    double height = 20;//jroot["height"].as<double>() ;
    cout<<"l,t,w,h:"<<left<<","<<top<<","<<width<<","<<height<<endl ;
    string mapuuid = jroot["mapuuid"].toString().toStdString() ;
    qDebug()<<"mapuuid:"<<mapuuid.c_str() ;

    // //////////////////////////////////////////////


    QgsPrintLayout* layout = getFirstLayout(this->m_project) ;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 12 ;
    }

    QgsLayoutItem* mapItem0 = this->findLayoutItemByUuid(layout , mapuuid) ;
    if( mapItem0==nullptr ){
        error = "failed to find map item." ;
        return 13 ;
    }
    QgsLayoutItemMap* mapItem1 = (QgsLayoutItemMap*) mapItem0 ;

    QgsLayoutItemLegend* item = QgsLayoutItemLegend::create(layout) ;
    item->setLinkedMap( mapItem1);
    item->setPos(left,top);
    item->attemptResize(QgsLayoutSize(width,height));
    layout->addLayoutItem(item);




    // SAVE //////////////////////////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }
    // ///////////////////////////////////////
    outJsonData = "{\"uuid\":\""+item->uuid().toStdString()+"\"}" ;

    return 0 ;
}





/// file,left,top,width,height,relsrc
int WMapComposer::layoutAddImage(QString& jsondata , string& outJsonData ,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string relfilepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;

    double left = 0;//jroot["left"].as<double>() ;
    double top =  0;//jroot["top"].as<double>() ;
    double width = 50;//jroot["width"].as<double>() ;
    double height = 50;//jroot["height"].as<double>() ;
    cout<<"l,t,w,h:"<<left<<","<<top<<","<<width<<","<<height<<endl ;
    QString relsrc = jroot["relsrc"].toString() ;
    qDebug()<<"relsrc:"<<relsrc ;

    // //////////////////////////////////////////////



    QgsPrintLayout* layout = getFirstLayout(this->m_project) ; ;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 12 ;
    }

    QgsLayoutItemPicture* item = QgsLayoutItemPicture::create(layout) ;
    QString fullimagepath =  m_pedir + relsrc ;
    item->setPicturePath(fullimagepath);
    item->setPos(left,top);
    item->attemptResize(QgsLayoutSize(width,height));
    layout->addLayoutItem(item);




    // SAVE //////////////////////////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }
    // ///////////////////////////////////////
    outJsonData = "{\"uuid\":\""+item->uuid().toStdString()+"\"}" ;

    return 0 ;
}





/// file,left,top,width,height
int WMapComposer::layoutAddNorth(QString& jsondata , string& outJsonData ,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string relfilepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;

    double left = 0;//jroot["left"].as<double>() ;
    double top =  0;//jroot["top"].as<double>() ;
    double width = 20;//jroot["width"].as<double>() ;
    double height = 20;//jroot["height"].as<double>() ;
    cout<<"l,t,w,h:"<<left<<","<<top<<","<<width<<","<<height<<endl ;
    string mapuuid = jroot["mapuuid"].toString().toStdString() ;
    qDebug()<<"mapuuid:"<<mapuuid.c_str() ;

    // //////////////////////////////////////////////



    QgsPrintLayout* layout = getFirstLayout(this->m_project) ;;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 12 ;
    }

    QgsLayoutItem* mapItem0 = this->findLayoutItemByUuid(layout , mapuuid) ;
    if( mapItem0==nullptr ){
        error = "failed to find map item." ;
        return 13 ;
    }
    QgsLayoutItemMap* mapItem1 = (QgsLayoutItemMap*) mapItem0 ;


    QgsLayoutItemPicture* item = QgsLayoutItemPicture::create(layout) ;
    item->setLinkedMap(mapItem1);
    QString fullimagepath =  m_layoutResDir + "NorthArrow_11.svg"  ;
    item->setPicturePath(fullimagepath);
    item->setPos(left,top);
    item->attemptResize(QgsLayoutSize(width,height));
    layout->addLayoutItem(item);



    // SAVE //////////////////////////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }
    // ///////////////////////////////////////
    outJsonData = "{\"uuid\":\""+item->uuid().toStdString()+"\"}" ;


    return 0 ;

}


int WMapComposer::layoutAddArrow(QString& jsondata , string& outJsonData ,string& error)
{
    return this->layoutAddRectEllArrow("arrow" , jsondata,outJsonData, error) ;
}



/// file,left,top,uuid
int WMapComposer::itemMove(QString&jsondata,string&outJsonData,string&error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string relfilepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;

    double left = jroot["left"].toDouble() ;
    double top =  jroot["top"].toDouble() ;
    string uuid = jroot["uuid"].toString().toStdString();

    cout<<"left,top,uuid:"<<left<<","<<top<<","<<uuid<<endl ;

    // //////////////////////////////////////////////


    QgsPrintLayout* layout = getFirstLayout(this->m_project)  ;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 12 ;
    }

    QgsLayoutItem* theItem = this->findLayoutItemByUuid(layout , uuid) ;
    if( theItem==nullptr ){
        error = string("no layout item uuid:'") + uuid+ "'." ;
        return 13 ;
    }
    theItem->attemptMove( QgsLayoutPoint(left,top) );





    // SAVE //////////////////////////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }
    // ///////////////////////////////////////
    outJsonData = "{\"uuid\":\""+uuid+"\"}" ;

    return 0 ;
}

int WMapComposer::itemResize(QString&jsondata,string&outJsonData,string&error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string relfilepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;

    double width = jroot["width"].toDouble() ;
    double height =  jroot["height"].toDouble() ;
    string uuid = jroot["uuid"].toString().toStdString();

    cout<<"width,height,uuid:"<<width<<","<<height<<","<<uuid<<endl ;

    // //////////////////////////////////////////////


    QgsPrintLayout* layout = getFirstLayout(this->m_project) ;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 12 ;
    }

    QgsLayoutItem* theItem = this->findLayoutItemByUuid(layout , uuid) ;
    if( theItem==nullptr ){
        error = string("no layout item uuid:'") + uuid+ "'." ;
        return 13 ;
    }

    if( theItem->type() == QgsLayoutItemRegistry::ItemType::LayoutMap )
    {
        QgsLayoutItemMap* map = dynamic_cast<QgsLayoutItemMap*> ( theItem ) ;
        double oldscale = map->scale() ;
        double oldwidth = map->sizeWithUnits().width() ;
        double newscale = oldwidth / width * oldscale ;
        QgsRectangle rect1 = map->extent() ;


        map->setScale(newscale);
        map->setExtent(rect1);
        theItem->attemptResize( QgsLayoutSize(width,height) );
    }else{
        theItem->attemptResize( QgsLayoutSize(width,height) );
    }







    // SAVE //////////////////////////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }
    // ///////////////////////////////////////
    outJsonData = "{\"uuid\":\""+uuid+"\"}" ;

    return 0 ;
}

/// map.extent: file,mapuuid,xmin,xmax,ymin,ymax
int WMapComposer::mapSetExtent(QString& jsondata,string&outJsonData,string&error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string relfilepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;

    QString mapuuid = jroot["mapuuid"].toString() ;
    double xmin = getJsonObjDoubleValue(jroot , "xmin") ;
    double xmax = getJsonObjDoubleValue(jroot , "xmax") ;
    double ymin = getJsonObjDoubleValue(jroot , "ymin") ;
    double ymax = getJsonObjDoubleValue(jroot , "ymax") ;

    // //////////////////////////////////////////////


    QgsPrintLayout* layout = getFirstLayout(this->m_project) ;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 12 ;
    }

    QgsLayoutItem* theItem = this->findLayoutItemByUuid(layout , mapuuid.toStdString() ) ;
    if( theItem==nullptr ){
        error = string("no layout item uuid:'") + mapuuid.toStdString()+ "'." ;
        return 13 ;
    }

    if( theItem->type() == QgsLayoutItemRegistry::ItemType::LayoutMap )
    {
        QgsLayoutItemMap* map = dynamic_cast<QgsLayoutItemMap*> ( theItem ) ;
        QgsRectangle rect1 = map->extent() ;
        rect1.setXMinimum(xmin);
        rect1.setXMaximum(xmax);
        rect1.setYMinimum(ymin);
        rect1.setYMaximum(ymax);
        map->setExtent(rect1);
        map->refresh();
    }else{
        error = string("it is not layout map item for uuid:'") + mapuuid.toStdString()+ "'." ;
        return 14 ;
    }


    // SAVE //////////////////////////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }
    // ///////////////////////////////////////
    outJsonData = "{\"uuid\":\""+mapuuid.toStdString()+"\"}" ;

    return 0 ;
}


//2022-9-18 file,mapuuid,dpi,xmin,xmax,ymin,ymax
int WMapComposer::mapSetExtentAndDraw(QString& jsondata,
                                            string& outJsonData,string& error)
{
    string outjson1;
    string error1;
    int ret1 = mapSetExtent(jsondata,outjson1,error1);
    if( ret1!=0 ){
        error = string("layoutMapSetExtentAndDraw mapSetExtent failed:")
                +error1 + "." ;
        return 21 ;
    }

    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string relfilepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;

    QString mapuuid = jroot["mapuuid"].toString() ;
    int dpi = getJsonObjDoubleValue(jroot,"dpi") ;
    // //////////////////////////////////////////////

    QgsPrintLayout* layout = getFirstLayout(this->m_project) ;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 12 ;
    }

    QgsLayoutItem* theItem = this->findLayoutItemByUuid(layout , mapuuid.toStdString() ) ;
    if( theItem==nullptr ){
        error = string("no layout item uuid:'") + mapuuid.toStdString()+ "'." ;
        return 13 ;
    }
    if( theItem->type() != QgsLayoutItemRegistry::ItemType::LayoutMap )
    {
        error = string("it is not layout map item for uuid:'") + mapuuid.toStdString()+ "'." ;
        return 14 ;
    }
    QgsLayoutItemMap* map = dynamic_cast<QgsLayoutItemMap*> ( theItem ) ;

    QString relPngFile = QString::fromStdString(relfilepath) + "_"
            + QDate::currentDate().toString("yyyyMMdd")
            + QTime::currentTime().toString("HHmmss") + "_"+mapuuid.mid(1,mapuuid.length()-2)+ ".png";
    QString absoutputPngfile = m_pedir + relPngFile ;

    // DRAW
    string error2;
    int ret2 = drawLayoutItemMapIntoPng(map,dpi,absoutputPngfile,error2 );
    if( ret2!=0 ){
        error = string("drawLayoutItemMapIntoPng failed:'") + error2+ "'." ;
        return 15 ;
    }
    // ////////////////////////////////////

    outJsonData = "{\"src\":\""+relPngFile.toStdString() +"\"}" ;

    return 0 ;
}

/// 2022-5-27 file,left,right,top,bottom,mapuuid(optional)
/// 如果指定了 mapuuid 那么缩放该map，否则只缩放第一个map
/// 这里 left,right,top,bottom 为经纬度，会自动转换成map的坐标范围。
int WMapComposer::projectZoom(QString& jsondata,string& outJsonData,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string relfilepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;

    QString mapuuid = "" ;
    if( jroot.contains("mapuuid") == true ){
        mapuuid = jroot["mapuuid"].toString();
    }
    cout<<"mapuuid:"<<mapuuid.toStdString()<<endl ;

    double left = getJsonObjDoubleValue(jroot , "left") ;
    double right = getJsonObjDoubleValue(jroot , "right") ;
    double top = getJsonObjDoubleValue(jroot , "top") ;
    double bottom = getJsonObjDoubleValue(jroot , "bottom") ;
    cout<<"wgs84:"<<endl ;
    cout<<"xmin:"<<left<<endl ;
    cout<<"xmax:"<<right<<endl ;
    cout<<"ymin:"<<bottom<<endl ;
    cout<<"ymax:"<<top<<endl ;


    // //////////////////////////////////////////////

    QgsPrintLayout* layout =getFirstLayout(this->m_project) ;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 12 ;
    }

    QgsLayoutItemMap* mapitem = nullptr;// dynamic_cast<QgsLayoutItemMap*>(*it) ;
    if( mapuuid.isEmpty()==true ){
        mapitem = this->findFirstLayoutItemMap(layout) ;
    }else{
        mapitem = (QgsLayoutItemMap*)this->findLayoutItemByUuid(layout , mapuuid.toStdString() ) ;
    }

    if( mapitem==nullptr ){
        error = "failed to find map item." ;
        return 13 ;
    }

    QgsCoordinateReferenceSystem mapCrs = mapitem->crs() ;
    QgsCoordinateReferenceSystem wgs84Crs("EPSG:4326") ;
    QgsCoordinateTransform wgs84ToMapCrs( wgs84Crs , mapCrs , m_project ) ;
    QgsRectangle wgs84Rect(left,bottom,right,top) ;
    QgsRectangle mapRect = wgs84ToMapCrs.transformBoundingBox(wgs84Rect,
                                                              QgsCoordinateTransform::TransformDirection::ForwardTransform
                                                              ,true) ;
    cout<<"mapCrs:"<<endl ;
    cout<<"xmin:"<<mapRect.xMinimum()<<endl ;
    cout<<"xmax:"<<mapRect.xMaximum()<<endl ;
    cout<<"ymin:"<<mapRect.yMinimum()<<endl ;
    cout<<"ymax:"<<mapRect.yMaximum()<<endl ;
    mapitem->zoomToExtent( mapRect );

    // SAVE //////////////////////////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }

    outJsonData = "{\"uuid\":\""+mapuuid.toStdString()+"\"}" ;
    return 0 ;
}

/// file,stylefile
int WMapComposer::layoutAddStyleLegend(QString& jsondata,string& outJsonData,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string relfilepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;

    if( jroot.contains("stylefile") == false ){
        error = "params no stylefile." ;
        return 21 ;
    }
    QString styleFile = jroot["stylefile"].toString() ;//相对.json路径
    if( styleFile.length()==0 ){
        error = "empty stylefile string." ;
        return 22 ;
    }

    // //////////////////////////////////////////////
    QString relStylePngFile = concatNewFilename( QString::fromStdString(relfilepath),
                                                 styleFile,QString(".dpi72.png"));
    QString relSpptFile = concatNewFilename( QString::fromStdString(relfilepath),
                                             styleFile,QString(".sppt.json"));
    QString absSpptFile = m_pedir + relSpptFile ;
    {//创建默认PeStyle的渲染配置参数，并写入sppt.json文件
        PeLegendRenderProperty spptObj;
        ofstream spptOfs(absSpptFile.toStdString().c_str()) ;
        if( spptOfs.is_open()){
            spptOfs<<spptObj.toJsonString() ;
            spptOfs.close();
        }else{
            error = "failed to write sppt file." ;
            return 23 ;
        }
    }
    QString fullstylefilename = m_pedir + styleFile ;
    QString fullpngfilepath = m_pedir + relStylePngFile;
    QFile pngFile(fullpngfilepath) ;
    int pngWid = 0 ;
    int pngHei = 0 ;

    PeLegend pel ;
    string pelError ;
    int pelcode = pel.makePngByJsonFile2(fullstylefilename.toStdString(),
                                         absSpptFile.toStdString(),
                                         fullpngfilepath.toStdString(),
                                         72,
                                         pelError);
    if( pelcode != 0 ){
        qDebug()<<"make png failed: "<<pelcode<<". "<<pelError.c_str() ;
        error = pelError ;
        return 22 ;
    }
    qDebug()<<"make png ok." ;
    pngWid = pel.outPngWid ;
    pngHei = pel.outPngHei ;
    //add to layout
    QgsPrintLayout* layout = getFirstLayout(this->m_project) ;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 12 ;
    }

    double left = 0;
    double top =  0;
    {
        cout<<"try to find legend_placeholder"<<endl ;
        QgsLayoutItem* legendPlaceholder=findFirstLayoutItemOfLegendPlaceholder(layout);
        if( legendPlaceholder!=nullptr){
            left = legendPlaceholder->pos().x();
            top = legendPlaceholder->pos().y();
            cout<<"do find legend_placeholder left,top:"<<left<<","<<top<<endl ;
        }
    }

    QgsLayoutItemPicture* item = QgsLayoutItemPicture::create(layout) ;
    item->setPicturePath(fullpngfilepath);
    item->attemptMove( QgsLayoutPoint(left,top));
    item->attemptResize(QgsLayoutSize(pngWid,pngHei,QgsUnitTypes::LayoutPoints));
    item->setId( QString("style:")+styleFile );
    layout->addLayoutItem(item);

    // SAVE //////////////////////////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }
    // ///////////////////////////////////////
    outJsonData = "{\"uuid\":\""+item->uuid().toStdString()+"\"}" ;

    return 0 ;




}





































int WMapComposer::layoutAddRect(QString& jsondata , string& outJsonData ,string& error)
{
    return this->layoutAddRectEllArrow("rect" , jsondata,outJsonData, error) ;
}


int WMapComposer::layoutAddEll(QString& jsondata , string& outJsonData ,string& error)
{
    return this->layoutAddRectEllArrow("ell" , jsondata,outJsonData, error) ;
}



/// file,left,top,width,height
int WMapComposer::layoutAddRectEllArrow(string shapetype,QString& jsondata , string& outJsonData ,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string relfilepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;

    double left = 0;//jroot["left"].as<double>() ;
    double top =  0;//jroot["top"].as<double>() ;
    double width = 80;//jroot["width"].as<double>() ;
    double height = 0;//jroot["height"].as<double>() ;
    if( shapetype=="rect") height = 40 ;
    if( shapetype=="ell")  height = 40 ;
    cout<<"l,t,w,h:"<<left<<","<<top<<","<<width<<","<<height<<endl ;

    qDebug()<<"shapetype:"<<shapetype.c_str() ;

    // //////////////////////////////////////////////





    QgsPrintLayout* layout = getFirstLayout(this->m_project) ;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 12 ;
    }


    QgsLayoutItem* item = nullptr ;
    if( shapetype.compare("rect") == 0 || shapetype.compare("ell") == 0 ){
        QgsLayoutItemShape* item1 = QgsLayoutItemShape::create(layout) ;
        if( shapetype.compare("rect") == 0 ) item1->setShapeType( QgsLayoutItemShape::Shape::Rectangle );
        else item1->setShapeType( QgsLayoutItemShape::Shape::Ellipse );

        item = (QgsLayoutItem*)item1 ;

    }else if( shapetype.compare("arrow")==0 ){
        QPolygonF polyline  ;
        polyline.append( QPointF(0,height/2.0) );
        polyline.append( QPointF(width,height/2.0));

        QgsLayoutItemPolyline* line = new QgsLayoutItemPolyline(polyline,layout) ;
        line->setEndMarker( QgsLayoutItemPolyline::MarkerMode::ArrowHead );

        QgsStringMap properties ;
        QgsLineSymbol* lineSymbol = QgsLineSymbol::createSimple(properties) ;
        lineSymbol->setWidth(2);
        line->setSymbol(lineSymbol);
        delete lineSymbol ;
        lineSymbol = nullptr ;


        item = (QgsLayoutItem*)line ;
    }else{
        error = string("not supported shapetype:'")+shapetype + "'" ;
        return 13 ;
    }


    item->setPos(left,top);
    item->attemptResize(QgsLayoutSize(width,height));
    layout->addLayoutItem(item);







    // SAVE //////////////////////////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }
    // ///////////////////////////////////////
    outJsonData = "{\"uuid\":\""+item->uuid().toStdString()+"\"}" ;

    return 0 ;
}


/// \brief WMapComposer::projectAddVec
/// \param jsondata  file,vecname,vecfile(geojson or shp) vecfile 是相对路径，相对{pedir}
/// \param error
/// \return
///
int WMapComposer::projectAddVec(QString& jsondata , string& outJsonData , string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string relfilepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;

    QString vecfile = jroot["vecfile"].toString() ;
    if( vecfile.length()==0 ){
        error = "empty vecfile" ;
        return 3 ;
    }
    QString vecname = jroot["vecname"].toString() ;
    if( vecname.length()==0 ) vecname = "Unnamed veclayer" ;

    qDebug()<<"vecfile:"<<vecfile ;
    qDebug()<<"vecname:"<<vecname ;

    // //////////////////////////////////////////////


    QgsPrintLayout* layout = getFirstLayout(this->m_project) ;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 12 ;
    }

    //打开矢量文件
    QString fullvecfile = m_pedir + vecfile ;
    QgsVectorLayer* veclayer = new QgsVectorLayer( fullvecfile , vecname , "ogr");
    if( veclayer->isValid()==false )
    {
        error = string("failed to load veclayer:") + fullvecfile.toStdString()  ;
        return 13 ;
    }
    this->m_project->addMapLayer(veclayer) ;





    // SAVE //////////////////////////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }
    // ///////////////////////////////////////
    outJsonData = "{\"lyrid\":\""+veclayer->id().toStdString()+"\"}" ;

    return 0 ;
}



/// layout.deleteitem : file,uuid
int WMapComposer::layoutDeleteItem(QString& jsondata,string&outJsonData,string&error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string relfilepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;

    QString uuid = jroot["uuid"].toString() ;

    // //////////////////////////////////////////////


    QgsPrintLayout* layout =getFirstLayout(this->m_project) ;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 12 ;
    }

    QgsLayoutItem* item = this->findLayoutItemByUuid(layout , uuid.toStdString()) ;

    if( item!=nullptr ){
        layout->removeLayoutItem(item) ;
    }


    // SAVE //////////////////////////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }
    // ///////////////////////////////////////
    outJsonData = "{\"uuid\":\""+uuid.toStdString()+"\"}" ;

    return 0 ;
}


/// project.deletelayer: file,lyrid
int WMapComposer::projectDeleteLayer(QString& jsondata,string&outJsonData,string&error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string relfilepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;

    QString lyrid = jroot["lyrid"].toString() ;

    // //////////////////////////////////////////////

    m_project->removeMapLayer(lyrid);

    // SAVE //////////////////////////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }
    // ///////////////////////////////////////
    outJsonData = "{\"lyrid\":\""+lyrid.toStdString()+"\"}" ;

    return 0 ;
}


/// 2022-9-18 draw one layoutItemMap into png
int WMapComposer::drawLayoutItemMapIntoPng(QgsLayoutItemMap* liMap,
                                           int dpi,
                                           QString absPngfilename,
                                           string& error)
{

    QgsPrintLayout* layout = static_cast<QgsPrintLayout*>(liMap->layout()) ;
    QList<QgsLayoutItem*> loItems ;
    layout->layoutItems(loItems) ;
    QVector<bool> visVec ;
    //hide all for render every single one.
    for( QList<QgsLayoutItem*>::iterator  it = loItems.begin() ; it != loItems.end() ; ++ it )
    {
        bool vis = (*it)->isVisible() ;
        visVec.push_back(vis);
        (*it)->setVisibility(false);
    }
    liMap->setVisibility(true);
    renderMapItem( (QgsLayoutItem*)liMap , absPngfilename.toStdString() , dpi , (QgsLayout*)layout ) ;
    //restore all visibility for render every single one.
    int ii = 0 ;
    for( QList<QgsLayoutItem*>::iterator  it = loItems.begin() ; it != loItems.end() ; ++ it )
    {
        bool vis = visVec[ii] ;
        ++ii ;
        (*it)->setVisibility(vis);
    }
    return 0;
}





//
int WMapComposer::exportProjectJsonFile( QgsPrintLayout* layout, QString reloutfilenameroot,int dpi, string& outJsonData, string& error)
{
    if( m_project==nullptr ){
        error = "empty project." ;
        return 0 ;
    }

    //theme
    QJsonArray themeArrJson ;
    {
        qDebug()<<"Theme:" ;

        //has none named theme
        QStringList lyridlist0 ;
        if( hasNoneNamedTheme(m_project,lyridlist0) == true ){
            QJsonObject themeObj ;
            themeObj.insert("name", "") ;
            QJsonArray lyridjsonArr ;
            for(int il = 0 ;il < lyridlist0.length();++ il ){
                lyridjsonArr.append( lyridlist0[il] );
            }
            themeObj.insert("vislyrid", lyridjsonArr) ;
            themeArrJson.append(themeObj);
        }

        QgsMapThemeCollection* themeCollection = m_project->mapThemeCollection() ;
        QStringList mapThemeNameList = themeCollection->mapThemes() ;
        if( mapThemeNameList.length()>0 ){
            for(int iname = 0 ; iname < mapThemeNameList.length() ; ++ iname ){
                qDebug()<<iname<<","<<mapThemeNameList[iname] ;
                QJsonObject themeObj ;
                themeObj.insert("name", mapThemeNameList[iname]) ;
                QStringList lyridlist = themeCollection->mapThemeVisibleLayerIds( mapThemeNameList[iname] ) ;
                QJsonArray lyridjsonArr ;
                for(int il = 0 ;il < lyridlist.length();++ il ){
                    lyridjsonArr.append( lyridlist[il] );
                }
                themeObj.insert("vislyrid", lyridjsonArr) ;
                themeArrJson.append(themeObj);
            }
        }
    }



    QList<QgsMapLayer*> layerList = m_project->layerTreeRoot()->layerOrder() ;


    /// //////////////////////////////////////////////////////
    /// 图层数组
    ///
    QJsonArray layerArr ;

    //QMap<QString, QgsMapLayer *> layersMap = m_project->mapLayers();
    for(auto it=layerList.begin() ; it != layerList.end(); ++ it )
    {
        QgsMapLayer* qlayer = *it;

        QJsonObject lyrObj ;
        lyrObj.insert( "qlyrid" , qlayer->id() ) ;
        lyrObj.insert("name",qlayer->name() );
        qDebug()<<"layerName:" << qlayer->name() ;

        bool lyrok = true ;
        if( qlayer->type()== QgsMapLayerType::RasterLayer ){
            lyrObj.insert( "type" , "wms") ;
            lyrObj.insert("styleid" , qlayer->customProperty("styleid",0).toInt()) ;

        }else if( qlayer->type()== QgsMapLayerType::VectorLayer )
        {
            QgsVectorLayer* veclayer = dynamic_cast<QgsVectorLayer*>( qlayer ) ;
            if( veclayer->geometryType() == QgsWkbTypes::GeometryType::PointGeometry )
            {
                lyrObj.insert( "type2" , 1) ;
                QJsonObject dataobj2 ;
                string error2 ;
                int ok2 = extractVecLayerPointSymbol(veclayer,dataobj2,error2) ;
                if( ok2==0 ){
                    lyrObj.insert("data" , dataobj2) ;
                }else{
                    lyrObj.insert("error2" , QString::fromStdString(error2) ) ;
                }
            }else if( veclayer->geometryType() == QgsWkbTypes::GeometryType::LineGeometry )
            {
                lyrObj.insert( "type2" , 2) ;
                QJsonObject dataobj2 ;
                string error2 ;
                int ok2 = extractVecLayerLineSymbol(veclayer,dataobj2,error2) ;
                if( ok2==0 ){
                    lyrObj.insert("data" , dataobj2) ;
                }else{
                    lyrObj.insert("error2" , QString::fromStdString(error2)) ;
                }
            }else if( veclayer->geometryType() == QgsWkbTypes::GeometryType::PolygonGeometry )
            {
                lyrObj.insert( "type2" , 3) ;
                QJsonObject dataobj2 ;
                string error2 ;
                int ok2 = extractVecLayerPolySymbol(veclayer,dataobj2,error2) ;
                if( ok2==0 ){
                    lyrObj.insert("data" , dataobj2) ;
                }else{
                    lyrObj.insert("error2" , QString::fromStdString(error2)) ;
                }
            }else{
                lyrok=false ;
            }
            lyrObj.insert( "type" , "vec") ;
        }
        else{
            qDebug()<<"Warning : unsupported layer type:"<< (int) qlayer->type() << " , skip it."  ;
            lyrok = false ;
        }

        if( lyrok==true ){
            layerArr.append(lyrObj);
        }

    }

    /// //////////////////////////////////////////////////////
    /// 作图元素数组
    ///
    int loiIndex = 0 ;
    QJsonArray layoutitemsArray ;
    QList<QgsLayoutItem*> loItems ;
    layout->layoutItems(loItems) ;

    //hide all for render every single one.
    for( QList<QgsLayoutItem*>::iterator  it = loItems.begin() ; it != loItems.end() ; ++ it )
    {
        (*it)->setVisibility(false);
    }

    for(auto it = loItems.begin(); it != loItems.end(); ++ it )
    {
        ++ loiIndex ;
        QString relPngFile = reloutfilenameroot + "-" + QString::number(loiIndex) + ".png";
        QString absPngFile = m_pedir + relPngFile ;

        QJsonObject itemJsonObj  ;

        QJsonObject lo_obj = extractLayoutItemData(*it) ;
        itemJsonObj.insert("layoutitem", lo_obj) ;

        bool itemok = true ;
        switch ((*it)->type()) {
        case QgsLayoutItemRegistry::ItemType::LayoutMap:
        {
            QgsLayoutItemMap* mapitem = dynamic_cast<QgsLayoutItemMap*>(*it) ;
            itemJsonObj.insert("grid" , extractMapItemGridData(mapitem) ) ;
            //data
            {
                QJsonObject dataJsonObj ;
                QString authid1 = mapitem->crs().authid() ;
                authid1 = authid1.replace("USER","INTERNAL") ;
                dataJsonObj.insert("proj" , authid1 ) ;
                dataJsonObj.insert("crsdescription" , mapitem->crs().description() ) ;
                dataJsonObj.insert("authid" , authid1) ;
                dataJsonObj.insert("scale" , mapitem->scale() ) ;
                QgsRectangle mapextent = mapitem->extent() ;

                QJsonObject extentJsonObj ;
                extentJsonObj.insert("xmin" , mapextent.xMinimum() ) ;
                extentJsonObj.insert("xmax" , mapextent.xMaximum() ) ;
                extentJsonObj.insert("ymin" , mapextent.yMinimum() ) ;
                extentJsonObj.insert("ymax" , mapextent.yMaximum() ) ;
                dataJsonObj.insert("extent" , extentJsonObj) ;

                //theme
                if( mapitem->followVisibilityPreset() ) {
                    dataJsonObj.insert("following_vis_preset" , 1) ;

                }else{
                    dataJsonObj.insert("following_vis_preset" , 0) ;
                }
                dataJsonObj.insert("vis_preset" , mapitem->followVisibilityPresetName()) ;

                itemJsonObj.insert("data", dataJsonObj) ;
            }

        } break ;
        case QgsLayoutItemRegistry::ItemType::LayoutPicture:
        {
            QgsLayoutItemPicture* pic = (QgsLayoutItemPicture*)(*it) ;
            if( lo_obj.value("loitype").toString().compare("north")==0 )
            {
                QJsonObject dataJsonObj ;
                if( pic->linkedMap()==nullptr ){
                    dataJsonObj.insert("mapuuid" , "") ;
                }else{
                    dataJsonObj.insert("mapuuid" , pic->linkedMap()->uuid() ) ;
                }
                itemJsonObj.insert("data" , dataJsonObj) ;
            }
            else if( lo_obj.value("loitype").toString().compare("pestylelegend")==0 )
            {
                // PeStyle Legend
                QString qgsfile=m_project->fileName() ;
                QString styleFilename = (*it)->id().mid(6);
                QString absSpptfilename =concatNewFilename(qgsfile,styleFilename,".sppt.json");
                QJsonObject dataJsonObj ;
                QString jsonError;
                bool jsonOk = OmcJsonHelperTool::jsonFile2JsonObject(absSpptfilename,dataJsonObj,jsonError);
                if(jsonOk==false){
                    error = (QString("PeStyleLegend error:")+jsonError).toStdString() ;
                    return 20;
                }
                itemJsonObj.insert("data" , dataJsonObj) ;
            }
            else{
                QJsonObject dataJsonObj ;
                QString picpath = pic->picturePath() ;
                QString picrelpath = picpath.replace( m_pedir , "" ) ;
                dataJsonObj.insert("src" , picrelpath) ;
                itemJsonObj.insert("data" , dataJsonObj) ;
            }
        } break ;
        case QgsLayoutItemRegistry::ItemType::LayoutLabel:
        {
            QgsLayoutItemLabel* label = dynamic_cast<QgsLayoutItemLabel*>(*it) ;
            QJsonObject dataJsonObj ;
            dataJsonObj.insert("text" , label->text() ) ;
            {
                QJsonObject fontJsonObj ;
                if( label->font().bold() ) fontJsonObj.insert("bold",1) ;
                else fontJsonObj.insert("bold",0) ;
                fontJsonObj.insert("color" , qcolor2JsonObject(label->fontColor())) ;
                fontJsonObj.insert("size" , label->font().pointSizeF() );
                fontJsonObj.insert("align", alignFlag2String(label->hAlign()) ) ;

                dataJsonObj.insert("font" , fontJsonObj) ;
            }
            itemJsonObj.insert("data" , dataJsonObj) ;

        } break ;
        case QgsLayoutItemRegistry::ItemType::LayoutLegend:
        {
            QgsLayoutItemLegend* legend = dynamic_cast<QgsLayoutItemLegend*>(*it) ;
            QJsonObject dataJsonObj ;
            if( legend==nullptr ){
                dataJsonObj.insert("mapuuid" , "") ;
            }else{
                dataJsonObj.insert("mapuuid" , legend->linkedMap()->uuid() ) ;
            }
            itemJsonObj.insert("data" , dataJsonObj) ;

        } break ;
        case QgsLayoutItemRegistry::ItemType::LayoutShape:
        {
            QgsLayoutItemShape* shp = dynamic_cast<QgsLayoutItemShape*>(*it) ;
            QJsonObject dataJsonObj ;
            QJsonObject polysymbol ;
            //polysymbol
            {
                QJsonObject linesymbolJsonObj ;
                QgsSimpleFillSymbolLayer* symbolLayer= dynamic_cast<QgsSimpleFillSymbolLayer*>(shp->symbol()->symbolLayer(0)) ;

                linesymbolJsonObj.insert("width" , symbolLayer->strokeWidth() ) ;
                linesymbolJsonObj.insert("color" , qcolor2JsonObject(symbolLayer->strokeColor())) ;
                linesymbolJsonObj.insert("style" ,  penStyle2String(symbolLayer->strokeStyle())) ;
                polysymbol.insert("linesymbol" , linesymbolJsonObj) ;
                polysymbol.insert("fillcolor" , qcolor2JsonObject(symbolLayer->fillColor())) ;
            }

            dataJsonObj.insert("polysymbol" , polysymbol) ;
            itemJsonObj.insert("data" , dataJsonObj) ;


        } break ;
        case QgsLayoutItemRegistry::ItemType::LayoutPolyline:
        {
            QgsLayoutItemPolyline* polyline = dynamic_cast<QgsLayoutItemPolyline*>(*it) ;
            QJsonObject dataJsonObj ;
            QJsonObject polysymbol ;
            //linesymbol
            {
                QJsonObject linesymbolJsonObj ;
                QgsSimpleLineSymbolLayer* symlayer = dynamic_cast<QgsSimpleLineSymbolLayer*> (polyline->symbol()->symbolLayer(0)) ;
                linesymbolJsonObj.insert("width" , polyline->symbol()->width()) ;
                linesymbolJsonObj.insert("color" , qcolor2JsonObject(polyline->symbol()->color())) ;
                linesymbolJsonObj.insert("style" ,  penStyle2String(symlayer->penStyle())) ;
                polysymbol.insert("linesymbol" , linesymbolJsonObj) ;
            }
            polysymbol.insert("fillcolor" , qcolor2JsonObject(polyline->arrowHeadFillColor())) ;

            dataJsonObj.insert("polysymbol" , polysymbol) ;
            itemJsonObj.insert("data" , dataJsonObj) ;
        } break ;
        case QgsLayoutItemRegistry::ItemType::LayoutScaleBar:
        {
            QgsLayoutItemScaleBar* sbar = dynamic_cast<QgsLayoutItemScaleBar*>(*it) ;
            QJsonObject dataJsonObj ;
            if( sbar==nullptr ){
                dataJsonObj.insert("mapuuid" , "") ;
            }else{
                dataJsonObj.insert("mapuuid" , sbar->linkedMap()->uuid() ) ;
            }
            itemJsonObj.insert("data" , dataJsonObj) ;
        } break ;
        default:
            cout<<"Warning : unsupported layout item type:"<<(*it)->type()<<" , skip it."<<endl ;
            itemok=false;
            break;
        }

        if( itemok==true ){
            renderMapItem( *it , absPngFile.toStdString() , dpi , (QgsLayout*)layout ) ;
            itemJsonObj.insert("png" , relPngFile ) ;
            layoutitemsArray.append( itemJsonObj );
        }
    }

    //restore all visibility for render every single one.
    for( QList<QgsLayoutItem*>::iterator  it = loItems.begin() ; it != loItems.end() ; ++ it )
    {
        (*it)->setVisibility(true);
    }


    /// //////////////////////////////////////////////////////
    /// 可用投影坐标系数组
    ///
    QJsonArray crsArr ;
    {
        for(int ic = 0 ; ic < OmcHelperFunctions::s_allCrsAuthidList.length(); ++ic ){
            QJsonObject cobj1 ;
            cobj1.insert("authid" , OmcHelperFunctions::s_allCrsAuthidList[ic] ) ;
            cobj1.insert("crsdescription" , OmcHelperFunctions::s_allDescList[ic] ) ;
            cobj1.insert("wkt" , OmcHelperFunctions::s_allWktList[ic] ) ;
            crsArr.append(cobj1);
        }
    }



    QgsLayoutItemPage::Orientation orientation = layout->pageCollection()->page(0)->orientation() ;
    QJsonObject page ;
    if( orientation==QgsLayoutItemPage::Orientation::Portrait ) page.insert("dir","v") ;
    else page.insert("dir","h") ;


    QJsonObject projJsonObj ;
    projJsonObj.insert("file" , m_project->fileName().replace(m_pedir,"") ) ;
    projJsonObj.insert("page", page) ;
    projJsonObj.insert("loitem_array" ,layoutitemsArray ) ;
    projJsonObj.insert("layer_array" , layerArr ) ;
    projJsonObj.insert("crs_array" , crsArr ) ;
    projJsonObj.insert("theme_array", themeArrJson ) ;


    QJsonDocument jdoc( projJsonObj ) ;

    QByteArray bytes = jdoc.toJson( QJsonDocument::Compact ) ;
    QString relProjFile = reloutfilenameroot + ".json" ;
    QString absProjFile = m_pedir+relProjFile ;
    QFile file( absProjFile );
    if( file.open( QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate ) )
    {
        QTextStream iStream( &file );
        iStream.setCodec( "utf-8" );
        iStream << bytes;
        file.close();
    }
    else
    {
        error = "failed to open absProjFile for writing." ;
        return 13;
    }

    outJsonData = "{\"projfile\":\""+relProjFile.toStdString()+"\"}" ;

    return 0;
}

/// file,dpi
int WMapComposer::projectExport(QString& jsondata , string& outJsonData ,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string relfilepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;

    int dpi = jroot["dpi"].toInt() ;
    if( dpi==0 ) dpi = 72 ;
    cout<<"dpi:"<<dpi<<endl ;

    // //////////////////////////////////////////////

    QgsPrintLayout* layout = getFirstLayout(this->m_project) ;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 12 ;
    }

    QString reloutnameroot = QString::fromStdString(relfilepath) + "-" + QTime::currentTime().toString("HHmmss") ;

    int ret1 = this->exportProjectJsonFile( layout, reloutnameroot , dpi , outJsonData ,error) ;


    // SAVE //////////////////////////////////
    // ///////////////////////////////////////
    return ret1 ;

}



/// item.setproperty : file,uuid,loitype,...a lot...
int WMapComposer::itemSetProperty(QString& jsondata,string&outJsonData,string&error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string relfilepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;

    QString uuid = jroot["uuid"].toString() ;
    QString loitype = jroot["loitype"].toString() ;

    // //////////////////////////////////////////////


    QgsPrintLayout* layout =getFirstLayout(this->m_project) ;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 12 ;
    }
    QgsLayoutItem * item = findLayoutItemByUuid(layout , uuid.toStdString() ) ;
    if( item==nullptr ){
        error = string("not find item for:") + uuid.toStdString() ;
        return 13 ;
    }

    QJsonObject jobjLayoutitem = jroot["layoutitem"].toObject() ;
    QJsonObject jobjFrame = jobjLayoutitem["frame"].toObject() ;
    int ret1 = setLayoutItemFrameByJsonObject(item , jobjFrame , error) ;
    if( ret1!=0 ) return ret1 ;

    if( loitype.compare("map") ==0 ){
        int ret2 = setLayoutItemMapGrid( item , jroot["grid"].toObject() , error ) ;
        if( ret2!=0 ) return ret2 ;
        int ret3 = setLayoutItemMapData( item , jroot["data"].toObject() , error ) ;
        if( ret3!=0 ) return ret3 ;

    }else if( loitype.compare("rect") == 0
              || loitype.compare("ell") == 0 )
    {
        int ret2 = setLayoutItemShape(item , jroot["data"].toObject() , error ) ;
        if( ret2!=0 ) return ret2 ;
    }else if( loitype.compare("label") == 0 )
    {
        int ret2 = setLayoutItemLabel(item,jroot["data"].toObject(),error) ;
        if( ret2!=0 ) return ret2 ;
    }
    else if( loitype.compare("pestylelegend")==0 ){
        int ret2 = setLayoutItemPeStyleLegend(item,jroot["data"].toObject(),error);
        if( ret2!=0)return ret2;
    }

    // SAVE //////////////////////////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }
    // ///////////////////////////////////////
    outJsonData = "{\"uuid\":\""+uuid.toStdString()+"\"}" ;

    return 0 ;
}

///layer.setproperty : file,qlyrid,type2,...a lot...
int WMapComposer::layerSetProperty(QString& jsondata,string& outJsonData,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string relfilepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;

    QString lyrid = jroot["qlyrid"].toString() ;
    int type2  = getJsonObjDoubleValue( jroot , "type2") ;

    // //////////////////////////////////////////////

    QgsMapLayer* layer1 = findMapLayerByLyrid(lyrid) ;
    if( layer1==nullptr ){
        error = string("not find layer1 for:") + lyrid.toStdString() ;
        return 13 ;
    }
    QgsVectorLayer* layer2 = dynamic_cast<QgsVectorLayer*>(layer1) ;
    if( layer2==nullptr ){
        error = "not a QgsVectorLayer" ;
        return 14 ;
    }

    QJsonObject dataObj = jroot["data"].toObject() ;
    if( type2==1 ){
        int ret2 = setLayerPointSymbol(layer2 , dataObj["pointsymbol"].toObject() , error ) ;
        if( ret2!=0 ) return ret2 ;
    }else if( type2==2 ){
        int ret2 = setLayerLineSymbol(layer2 , dataObj["linesymbol"].toObject() , error ) ;
        if( ret2!=0 ) return ret2 ;
    }else if( type2==3 ){
        int ret2 = setLayerPolySymbol(layer2 , dataObj["polysymbol"].toObject() , error ) ;
        if( ret2!=0 ) return ret2 ;
    }else{
        error = string("not supported type2:") + QString::number(type2).toStdString() ;
        return 15 ;
    }




    // SAVE //////////////////////////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }
    // ///////////////////////////////////////
    outJsonData = "{\"qlyrid\":\""+lyrid.toStdString()+"\"}" ;

    return 0 ;

}


///layout.setpage : file,dir(v|h)
int WMapComposer::layoutSetPage(QString& jsondata,string& outJsonData,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string relfilepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;

    QString dir = jroot["dir"].toString() ;

    // //////////////////////////////////////////////

    QgsPrintLayout* layout = getFirstLayout(this->m_project) ;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 12 ;
    }
    if( dir.compare("v")==0 ){
        layout->pageCollection()->page(0)->setPageSize("A4" ,  QgsLayoutItemPage::Orientation::Portrait ) ;
    }else{
        layout->pageCollection()->page(0)->setPageSize("A4" ,  QgsLayoutItemPage::Orientation::Landscape ) ;
    }



    // SAVE //////////////////////////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }
    // ///////////////////////////////////////
    outJsonData = "{\"dir\":\""+dir.toStdString()+"\"}" ;

    return 0 ;

}

/// layout.exportimg : file,dpi,clip (clip means cliptoextent)
int WMapComposer::layoutExportImage(QString& jsondata,string& outJsonData,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string relfilepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;

    int dpi = getJsonObjDoubleValue(jroot,"dpi") ;
    int clipToExtent = getJsonObjDoubleValue(jroot,"clip") ;

    if( dpi<72 ) dpi = 72 ;
    if( dpi>350 ) dpi = 350 ;

    // //////////////////////////////////////////////


    QString outputPngFile = QString::fromStdString(relfilepath) + "_eximg_"
            + QDate::currentDate().toString("yyyyMMdd")
            + QTime::currentTime().toString("HHmmss") + "_dpi_"+QString::number(dpi)+ ".png";
    QString absoutputPngfile = m_pedir + outputPngFile ;

    QgsPrintLayout* layout = getFirstLayout(this->m_project) ;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 12 ;
    }

    //替换style:xxxx.json 图像元素的图片
    updateStyleLegendImagesByDpi(layout , dpi );


    layout->refresh();
    QgsLayoutExporter exporter(layout);
    bool saveok = false ;
    if( clipToExtent == 1 ){
        QRectF mapRegion = layout->pageItemBounds(0,true) ;
        QImage outImage = exporter.renderRegionToImage( mapRegion,
                                               QSize(),
                                               dpi ) ;
        saveok = outImage.save( absoutputPngfile ) ;
    }else {
        QImage outImage = exporter.renderPageToImage(0,QSize() , dpi) ;
        saveok = outImage.save( absoutputPngfile ) ;
    }

    if( saveok==false ){
        error = "save export image file failed." ;
        return 13 ;
    }


    // SAVE //////////////////////////////////
//    bool wok = this->m_project->write() ;
//    if( wok==false ){
//        error = "failed to write file." ;
//        return 3 ;
//    }
    // ///////////////////////////////////////
    outJsonData = "{\"img\":\""+outputPngFile.toStdString()+"\"}" ;

    return 0 ;
}

/// layout.makethumb : file,outfile
int WMapComposer::layoutMakeThumb(QString& jsondata,string& outJsonData,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string relfilepath = jroot["file"].toString().toStdString() ;
    string outrelfilepath = jroot["outfile"].toString().toStdString() ;
    cout<<"file:"<<relfilepath<<endl ;
    cout<<"outfile:"<<outrelfilepath<<endl ;
    if(relfilepath==""){
        error = "empty relfilepath." ;
        return 2 ;
    }
    if(outrelfilepath==""){
        error = "empty outrelfilepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(relfilepath , error ) ;
    if( code1 != 0 ) return code1 ;
    int dpi = 30 ;

    // //////////////////////////////////////////////
    QString absoutputPngfile = m_pedir + QString::fromStdString( outrelfilepath ) ;
    QgsPrintLayout* layout = getFirstLayout(this->m_project) ;
    if( layout==nullptr ){
        error = "failed to get layout('1') pointer." ;
        return 12 ;
    }
    layout->refresh();
    QgsLayoutExporter exporter(layout);
    bool saveok = false ;
    {
        QImage outImage = exporter.renderPageToImage(0,QSize() , dpi) ;
        saveok = outImage.save( absoutputPngfile ) ;
    }

    if( saveok==false ){
        error = "save export image file failed." ;
        return 13 ;
    }
    outJsonData = "{\"succ\":1}" ;
    return 0 ;
}














//Color {
//    r:255,g:255,b:255,a:1.0
//}

//Font {
//    type:'',
//    size:14,
//    bold:0/1,
//    color:{Color},
//    align:left|center|right,
//}

//LineSymbol {
//    style: solid/dash/dot,
//    width:1,
//    color:{Color},
//}


//PolySymbol {
//    linesymbol:{LineSymbol},
//    fillcolor:{Color},
//}




//LayoutItem
//{
//    uuid,
//    name,
//    left,
//    top,
//    width,
//    height,
//    rot,      //rotation
//    z,///layer.setproperty : file,qlyrid,type2,...a lot...
//    loitype,
//    qloitype,
//    frame:{
//        enabled:0/1,
//        width:1,
//        color:{Color},
//    }
//}



//LayoutItemMap
//{
//    layoutitem:{LayoutItem},
//    grid {
//        enabled:0/1,
//        linesymbol:{LineSymbol} ,
//        stepx: 1,
//        stepy: 1,
//        offsetx: 0,
//        offsety: 0,
//        font:{Font} ,
//    },
//    data {
//        proj:'EPSG:4326' ,
//        scale: 1000000.0 ,
//        extent: {xmin:-180, ymin:-90, xmax:180, ymax:90},
//    } ,
//    png,
//}

//LayoutItemLegend
//{
//    layoutitem:{LayoutItem},
//    data:{
//        mapuuid:'{xxxx-xxxx-x...xx}',
//    },
//    png,
//}

//LayoutItemNorth{
//    layoutitem:{LayoutItem},
//    data:{
//        mapuuid:'{xxxx-xxxx-x...xx}',
//    },
//    png,
//}

//LayoutItemScalebar {
//    layoutitem:{LayoutItem},
//    data:{
//        mapuuid:'{xxxx-xxxx-x...xx}' ,
//    },
//    png,
//}

//LayoutItemLabel {
//    layoutitem:{LayoutItem},
//    data:{
//        font:{Font},
//        text:'label text' ,
//    },
//    png,
//}

//LayoutItemImage {
//    layoutitem:{LayoutItem},
//    data:{
//        src:'relative file path under pedir' ,
//    },
//    png,
//}

//LayoutItemRect|Ell|Arrow {
//    layoutitem:{LayoutItem},
//    data:{
//        polysymbol:{PolySymbol} ,
//    },
//    png,
//}


///
/// \brief WMapComposer::extractLayoutItemData
/// \param item
/// \return
QJsonObject WMapComposer::extractLayoutItemData( QgsLayoutItem* item)
{
    QJsonObject obj ;
    obj.insert("uuid" , item->uuid()) ;
    obj.insert("name" , item->displayName() ) ;
    obj.insert("left" , item->positionWithUnits().x() ) ;//2022-4-27
    obj.insert("top" , item->positionWithUnits().y() ) ;
    obj.insert("width" , item->sizeWithUnits().width() ) ;
    obj.insert("height", item->sizeWithUnits().height() ) ;
    obj.insert("rot" , item->rotation() ) ;
    obj.insert("z" , item->zValue()) ;
    obj.insert("qloitype", item->type() ) ;

    switch ( item->type()) {
    case QgsLayoutItemRegistry::ItemType::LayoutMap:
    {
        obj.insert("loitype" , QJsonValue("map") );
    } break ;
    case QgsLayoutItemRegistry::ItemType::LayoutPicture:
    {
        QgsLayoutItemPicture* pic = (QgsLayoutItemPicture*)item ;
        if( pic->linkedMap() != nullptr )
        {
            obj.insert("loitype" , QJsonValue("north") );
        }else{
            if( item->id().left(6).compare("style:")==0 ){
                obj.insert("loitype", QJsonValue("pestylelegend") );
            }else{
                obj.insert("loitype" , QJsonValue("image") );
            }
        }
    } break ;
    case QgsLayoutItemRegistry::ItemType::LayoutLabel:
    {
        obj.insert("loitype" , QJsonValue("label") );
    } break ;
    case QgsLayoutItemRegistry::ItemType::LayoutLegend:
    {
        obj.insert("loitype" , QJsonValue("legend") );
    } break ;
    case QgsLayoutItemRegistry::ItemType::LayoutShape:
    {
        QgsLayoutItemShape* shape = (QgsLayoutItemShape*)item ;
        if( shape->shapeType() == QgsLayoutItemShape::Shape::Rectangle )
        {
            obj.insert("loitype" , QJsonValue("rect")) ;
        }else if( shape->shapeType() == QgsLayoutItemShape::Shape::Ellipse )
        {
            obj.insert("loitype" , QJsonValue("ell")) ;
        }else{
            obj.insert("loitype" , QJsonValue("tri")) ;
        }
    } break ;
    case QgsLayoutItemRegistry::ItemType::LayoutPolyline:
    {
        obj.insert("loitype" , QJsonValue("arrow")) ;
    } break ;
    case QgsLayoutItemRegistry::ItemType::LayoutScaleBar:
    {
        obj.insert("loitype" , QJsonValue("scalebar") );
    } break ;
    default:
        obj.insert("loitype" , QJsonValue("") );
        break;
    }

    QJsonObject frame ;
    if( item->frameEnabled()==true ) {
        frame.insert("enabled" , 1) ;
    }
    else{
        frame.insert("enabled" , 0) ;
    }
    frame.insert("width" , item->frameStrokeWidth().length()) ;
    QColor color1 = item->frameStrokeColor() ;
    int r1,g1,b1,a1 ;
    color1.getRgb( &r1, &g1, &b1, &a1 );
    QJsonObject color1obj ;
    color1obj.insert("r" , r1) ;
    color1obj.insert("g" , g1) ;
    color1obj.insert("b" , b1) ;
    color1obj.insert("a" , a1) ;
    frame.insert("color" , color1obj ) ;

    obj.insert("frame",frame) ;

    return obj ;
}




QJsonObject WMapComposer::extractMapItemGridData( QgsLayoutItemMap* mapItem)
{
    QJsonObject grid ;
    cout<<"grid count:"<<mapItem->grids()->size()<<endl ;
    if( mapItem->grids()->size()==0 ){
        cout<<"debug grid disabled."<<endl ;
        grid.insert("enabled" ,0) ;
    }else{
        cout<<"debug grid enabled."<<endl ;
        QgsLayoutItemMapGrid* mapGrid = mapItem->grid() ;
        grid.insert("enabled" , mapGrid->enabled()?1:0 ) ;
        grid.insert("stepx" ,mapGrid->intervalX() ) ;
        grid.insert("stepy" , mapGrid->intervalY()) ;
        grid.insert("offsetx" , mapGrid->offsetX() ) ;
        grid.insert("offsety" , mapGrid->offsetY() ) ;
        QgsSimpleLineSymbolLayer* linesymbol = dynamic_cast<QgsSimpleLineSymbolLayer*> (mapGrid->lineSymbol()->symbolLayer(0)) ;
        if( linesymbol!=nullptr )
        {
            QJsonObject linesymbolJsonObj ;
            linesymbolJsonObj.insert("width" , linesymbol->width()) ;
            linesymbolJsonObj.insert("color" , qcolor2JsonObject(linesymbol->color())) ;
            linesymbolJsonObj.insert("style" ,  penStyle2String(linesymbol->penStyle())) ;
            grid.insert("linesymbol" , linesymbolJsonObj) ;
        }

        {
            QJsonObject fontJsonObj ;
            if( mapGrid->annotationFont().bold() ) fontJsonObj.insert("bold",1) ;
            else fontJsonObj.insert("bold",0) ;
            fontJsonObj.insert("color" , qcolor2JsonObject(mapGrid->annotationFontColor())) ;
            fontJsonObj.insert("size" , mapGrid->annotationFont().pointSizeF() );
            fontJsonObj.insert("align","left") ;
            grid.insert("font" , fontJsonObj) ;
        }
    }
    return grid ;
}



QJsonObject WMapComposer::qcolor2JsonObject(const QColor& qcolor)
{
    QJsonObject obj ;
    int r,g,b,a ;
    qcolor.getRgb(&r,&g,&b,&a);
    obj.insert("r" , r) ;
    obj.insert("g" , g) ;
    obj.insert("b" , b) ;
    obj.insert("a" , a) ;
    return obj ;
}

QString WMapComposer::penStyle2String( Qt::PenStyle penstyle )
{
    if(penstyle== Qt::PenStyle::DashLine ){
        return "dash" ;
    }
    if( penstyle==Qt::PenStyle::DotLine){
        return "dot" ;
    }
    return "solid" ;
}

QString WMapComposer::alignFlag2String( Qt::AlignmentFlag aflag)
{
    if( aflag== Qt::AlignmentFlag::AlignRight ){
        return "right" ;
    }
    if( aflag== Qt::AlignmentFlag::AlignCenter ){
        return "center" ;
    }
    return "left" ;
}

double WMapComposer::getJsonObjDoubleValue(const QJsonObject& obj,QString key)
{
    if( obj.value(key).isString() ){
        return obj.value(key).toString().toDouble() ;
    }else if( obj.value(key).isDouble() ){
        return obj.value(key).toDouble() ;
    }else{
        return 0 ;
    }
}


int WMapComposer::setLayoutItemFrameByJsonObject(QgsLayoutItem* item,const QJsonObject& jobj, string& error)
{
    int enabled = jobj.value("enabled").toInt() ;

    if( enabled== 0 ){
        item->setFrameEnabled(false);
    }else{
        item->setFrameEnabled(true);
        double width = jobj.value("width").toDouble() ;
        QJsonObject clr = jobj.value("color").toObject() ;
        int r = clr.value("r").toInt() ;
        int g = clr.value("g").toInt() ;
        int b = clr.value("b").toInt() ;
        int a = clr.value("a").toInt() ;

        item->setFrameStrokeColor( QColor(r,g,b,a));
        auto twid  = item->frameStrokeWidth();
        twid.setLength(width);
        item->setFrameStrokeWidth(twid);
    }
    return 0 ;
}

int WMapComposer::setLayoutItemMapGrid(QgsLayoutItem* item,const QJsonObject& jobj, string& error)
{
    QgsLayoutItemMap* item1 = dynamic_cast<QgsLayoutItemMap*>(item) ;
    if( item1==nullptr ) {
        error = "invalid QgsLayoutItemMap" ;
        return 20 ;
    }

    int enabled = jobj["enabled"].toInt();
    if( enabled==0 ){
        item1->grid()->setEnabled(false);
    }else{
        item1->grid()->setEnabled(true);
        item1->grid()->setCrs(QgsCoordinateReferenceSystem("EPSG:4326"));
        double stepx = getJsonObjDoubleValue(jobj,"stepx") ;
        double stepy = getJsonObjDoubleValue(jobj,"stepy") ;
        double offsetx = getJsonObjDoubleValue(jobj,"offsetx") ;
        double offsety = getJsonObjDoubleValue(jobj,"offsety") ;

        item1->grid()->setIntervalX(stepx);
        item1->grid()->setIntervalY(stepy) ;
        item1->grid()->setOffsetX(offsetx);
        item1->grid()->setOffsetY(offsety);

        QJsonObject line = jobj["linesymbol"].toObject() ;
        QJsonObject font = jobj["font"].toObject() ;

        double linewid = getJsonObjDoubleValue(line,"width") ;
        QColor lineclr = jsonObject2QColor(line["color"].toObject() ) ;
        QString linestyle=line["style"].toString() ;

        int bold = getJsonObjDoubleValue(font,"bold") ;
        QColor fontclr = jsonObject2QColor(font["color"].toObject()) ;
        double fontsize = getJsonObjDoubleValue(font,"size");
        QString align = font["align"].toString() ;

        QgsSimpleLineSymbolLayer* linesymbol =
                dynamic_cast<QgsSimpleLineSymbolLayer*>
                (item1->grid()->lineSymbol()->symbolLayer(0)) ;
        if( linesymbol==nullptr ){
            error = "bad linesymbol for Grid." ;
            return 21 ;
        }
        linesymbol->setColor(lineclr);
        linesymbol->setWidth(linewid);
        linesymbol->setPenStyle( Qt::PenStyle::SolidLine );
        if( linestyle=="dot"){
            linesymbol->setPenStyle( Qt::PenStyle::DotLine );
        }else if( linestyle=="dash"){
            linesymbol->setPenStyle( Qt::PenStyle::DashLine );
        }

        item1->grid()->setAnnotationEnabled(true);
        item1->grid()->setAnnotationFontColor(fontclr);
        item1->grid()->setAnnotationPrecision(0);
        item1->grid()->setAnnotationFormat( QgsLayoutItemMapGrid::AnnotationFormat::DecimalWithSuffix);
        item1->grid()->setAnnotationDisplay(QgsLayoutItemMapGrid::DisplayMode::LongitudeOnly, QgsLayoutItemMapGrid::BorderSide::Top );
        item1->grid()->setAnnotationDisplay(QgsLayoutItemMapGrid::DisplayMode::LongitudeOnly, QgsLayoutItemMapGrid::BorderSide::Bottom );
        item1->grid()->setAnnotationDisplay(QgsLayoutItemMapGrid::DisplayMode::LatitudeOnly, QgsLayoutItemMapGrid::BorderSide::Left );
        item1->grid()->setAnnotationDisplay(QgsLayoutItemMapGrid::DisplayMode::LatitudeOnly, QgsLayoutItemMapGrid::BorderSide::Right );
        QFont tfont = item1->grid()->annotationFont() ;
        if( bold==0 ) tfont.setBold(false);
        else tfont.setBold(true);
        tfont.setPointSizeF(fontsize);
        item1->grid()->setAnnotationFont( tfont);
    }
    return 0 ;
}


int WMapComposer::setLayoutItemMapData(QgsLayoutItem* item,const QJsonObject& jobj, string& error)
{
    QgsLayoutItemMap* item1 = dynamic_cast<QgsLayoutItemMap*>(item) ;
    if( item1==nullptr ) {
        error = "invalid QgsLayoutItemMap" ;
        return 20 ;
    }

    QString authid = jobj["authid"].toString();
    if( authid.compare("") == 0) authid="EPSG:4326" ;
    item1->setCrs( QgsCoordinateReferenceSystem(authid) );
    cout<<"reset map crs by authid:"<<authid.toStdString()<<endl ;

    if( jobj["following_vis_preset"].toInt()==1 )
    {
        item1->setFollowVisibilityPreset(true);
    }else{
        item1->setFollowVisibilityPreset(false);
    }
    item1->setFollowVisibilityPresetName( jobj["vis_preset"].toString() );

    return 0 ;
}

QColor WMapComposer::jsonObject2QColor(const QJsonObject& clrObj)
{
    int r = clrObj.value("r").toInt() ;
    int g = clrObj.value("g").toInt() ;
    int b = clrObj.value("b").toInt() ;
    int a = clrObj.value("a").toInt() ;

    return QColor(r,g,b,a);
}

int WMapComposer::setLayoutItemLabel(QgsLayoutItem* item,const QJsonObject& jobj,string& error)
{
    QgsLayoutItemLabel* label = dynamic_cast<QgsLayoutItemLabel*>(item) ;
    if( label==nullptr ) {
        error = "invalid QgsLayoutItemLabel" ;
        return 20 ;
    }

    QString text = jobj["text"].toString() ;
    label->setText(text);

    QJsonObject font = jobj["font"].toObject() ;
    QString align = font["align"].toString() ;
    if( align.compare("left")==0 ){
        label->setHAlign( Qt::AlignmentFlag::AlignLeft );
    }else if( align.compare("right") == 0 ){
        label->setHAlign( Qt::AlignmentFlag::AlignRight );
    }else {
        label->setHAlign( Qt::AlignmentFlag::AlignCenter );
    }

    QFont tQfont = label->font() ;
    int bold = getJsonObjDoubleValue(font,"bold") ;
    if( bold==1 ){
        tQfont.setBold(true);
    }else{
        tQfont.setBold(false);
    }

    QColor clr = jsonObject2QColor( font["color"].toObject() ) ;
    label->setFontColor(clr);

    double pointsz = getJsonObjDoubleValue(font, "size") ;
    if( pointsz<=0 ) pointsz = 1 ;
    tQfont.setPointSizeF(pointsz);

    label->setFont(tQfont);
    return 0 ;
}


int WMapComposer::setLayoutItemShape(QgsLayoutItem* item ,const QJsonObject& jobj,string& error)
{
    QgsLayoutItemShape* shape = dynamic_cast<QgsLayoutItemShape*>(item) ;
    if( shape==nullptr ) {
        error = "invalid QgsLayoutItemShape" ;
        return 20 ;
    }

    QgsSimpleFillSymbolLayer* symlayer = (QgsSimpleFillSymbolLayer*) shape->symbol()->symbolLayer(0) ;
    if( symlayer==nullptr ){
        error = "no fillSymbol" ;
        return 21 ;
    }

    QJsonObject polysym = jobj["polysymbol"].toObject() ;
    QColor fillcolor = jsonObject2QColor( polysym["fillcolor"].toObject() ) ;
    symlayer->setFillColor(fillcolor);

    QJsonObject linesym = polysym["linesymbol"].toObject() ;
    QColor linecolor = jsonObject2QColor(linesym["color"].toObject()) ;
    QString style = linesym["style"].toString() ;
    double wid = getJsonObjDoubleValue(linesym,"width") ;

    symlayer->setStrokeColor(linecolor);
    symlayer->setStrokeWidth( wid );
    if( style.compare("solid") == 0 ){
        symlayer->setStrokeStyle(Qt::PenStyle::SolidLine);
    }else if( style.compare("dot")  == 0 ){
        symlayer->setStrokeStyle(Qt::PenStyle::DotLine);
    }else{
       symlayer->setStrokeStyle(Qt::PenStyle::DashLine);
    }

    return 0 ;
}

int WMapComposer::setLayoutItemPeStyleLegend(QgsLayoutItem* item ,const QJsonObject& jobj,string& error)
{
    QgsLayoutItemPicture* pic = dynamic_cast<QgsLayoutItemPicture*>(item) ;
    if( pic==nullptr ) {
        error = "invalid PeStyleLegend of QgsLayoutItemPicture" ;
        return 20 ;
    }
    QString tailname = QString(".dpi") + QString::number(72) + ".png" ;
    QString tailname1 = QString(".dpi") + QString::number(72) + "-1.png" ;
    if( pic->id().left(6).compare("style:")==0 ){
        QString relJsonFile = pic->id().mid(6) ;
        QString fullJsonFile = m_pedir + relJsonFile ;
        QString qgsfile = m_project->fileName();
        QString fullPngDpiFile = concatNewFilename( qgsfile, relJsonFile, tailname) ;
        QString fullPngDpiFile1 = concatNewFilename( qgsfile, relJsonFile, tailname1) ;
        QString spptFilename = concatNewFilename(qgsfile, relJsonFile, ".sppt.json") ;
        //rewrite sppt json file.
        QString error2;
        bool spptOk = OmcJsonHelperTool::writeJsonObjectIntoTextfile(jobj,spptFilename,error2);
        if( spptOk==false ){
            error = string("OmcJsonHelperTool::writeJsonObjectIntoTextfile failed:")+error2.toStdString();
            return 21 ;
        }
        QString usePngFilename = fullPngDpiFile ;
        if(pic->picturePath().compare(fullPngDpiFile)==0){
            usePngFilename = fullPngDpiFile1 ;
        }
        PeLegend pel ;
        string pelError ;
        int pelcode = pel.makePngByJsonFile2(
                    fullJsonFile.toStdString(),
                    spptFilename.toStdString(),
                    usePngFilename.toStdString(),
                    72 ,
                    pelError) ;
        if( pelcode!=0 ){
            error = string("pel.makePngByJsonFile2 failed:")+pelError ;
            return 22 ;
        }else{
            pel.outPngWid;
            qDebug()<<"making good." ;
            pic->setPicturePath(usePngFilename);
            pic->attemptResize(QgsLayoutSize(pel.outPngWid,pel.outPngHei,QgsUnitTypes::LayoutPoints));
        }
    }
    return 0 ;
}

int WMapComposer::extractVecLayerPointSymbol(QgsVectorLayer* layer,QJsonObject& retdataobj,string& error)
{
    QgsFeatureRenderer* renderer = layer->renderer() ;
    if( renderer==nullptr ){
        error = "no renderer" ;
        return 1 ;
    }
    QgsSingleSymbolRenderer* single = dynamic_cast<QgsSingleSymbolRenderer*>(renderer) ;
    if( single==nullptr ){
        error = "not QgsSingleSymbolRenderer" ;
        return 2;
    }

    QgsSymbolLayer* symlayer = single->symbol()->symbolLayer(0) ;
    QgsSimpleMarkerSymbolLayer* markerSymLayer = dynamic_cast<QgsSimpleMarkerSymbolLayer*>(symlayer) ;
    if( markerSymLayer==nullptr ){
        error = "not QgsSimpleMarkerSymbolLayer" ;
        return 3;
    }

    double size = markerSymLayer->size() ;
    QJsonObject pointsymbol ;
    pointsymbol.insert("size" , size) ;

    QgsSimpleMarkerSymbolLayerBase::Shape mshape = markerSymLayer->shape() ;
    if( mshape == QgsSimpleMarkerSymbolLayerBase::Shape::Square ){
        pointsymbol.insert("shape" , "square") ;
    }else if( mshape == QgsSimpleMarkerSymbolLayerBase::Shape::Diamond ){
        pointsymbol.insert("shape" , "diamond") ;
    }else if( mshape == QgsSimpleMarkerSymbolLayerBase::Shape::Pentagon ){
        pointsymbol.insert("shape" , "pentagon") ;
    }else if( mshape == QgsSimpleMarkerSymbolLayerBase::Shape::Star ){
        pointsymbol.insert("shape" , "star") ;
    }else if( mshape == QgsSimpleMarkerSymbolLayerBase::Shape::Triangle ){
        pointsymbol.insert("shape" , "triangle") ;
    }else{ //circle for others
        pointsymbol.insert("shape" , "circle") ;
    }

    QJsonObject polysymbol ;
    polysymbol.insert("fillcolor" , qcolor2JsonObject(markerSymLayer->fillColor())) ;

    QJsonObject linesymbol ;
    linesymbol.insert("color" , qcolor2JsonObject(markerSymLayer->strokeColor())) ;
    linesymbol.insert("width" , markerSymLayer->strokeWidth() ) ;
    if( markerSymLayer->strokeStyle() == Qt::PenStyle::SolidLine ){
        linesymbol.insert("style","solid") ;
    }else if( markerSymLayer->strokeStyle()==Qt::PenStyle::DotLine){
        linesymbol.insert("style","dot") ;
    }else{
        linesymbol.insert("style","dash") ;
    }

    polysymbol.insert("linesymbol" ,linesymbol) ;
    pointsymbol.insert("polysymbol" , polysymbol) ;
    retdataobj.insert("pointsymbol" , pointsymbol) ;

    return 0;
}


int WMapComposer::extractVecLayerLineSymbol(QgsVectorLayer* layer,QJsonObject& retdataobj,string& error)
{
    QgsFeatureRenderer* renderer = layer->renderer() ;
    if( renderer==nullptr ){
        error = "no renderer" ;
        return 1 ;
    }
    QgsSingleSymbolRenderer* single = dynamic_cast<QgsSingleSymbolRenderer*>(renderer) ;
    if( single==nullptr ){
        error = "not QgsSingleSymbolRenderer" ;
        return 2;
    }

    QgsSymbolLayer* symlayer = single->symbol()->symbolLayer(0) ;
    QgsSimpleLineSymbolLayer* linesymlayer = dynamic_cast<QgsSimpleLineSymbolLayer*>(symlayer) ;
    if( linesymlayer==nullptr ){
        error = "not QgsSimpleLineSymbolLayer" ;
        return 3;
    }

    QJsonObject linesymbol ;
    linesymbol.insert("color" , qcolor2JsonObject(linesymlayer->color())) ;
    linesymbol.insert("width" , linesymlayer->width() ) ;
    if( linesymlayer->penStyle() == Qt::PenStyle::SolidLine ){
        linesymbol.insert("style","solid") ;
    }else if( linesymlayer->penStyle()==Qt::PenStyle::DotLine){
        linesymbol.insert("style","dot") ;
    }else{
        linesymbol.insert("style","dash") ;
    }
    retdataobj.insert("linesymbol" ,linesymbol) ;
    return 0;
}


int WMapComposer::extractVecLayerPolySymbol(QgsVectorLayer* layer,QJsonObject& retdataobj,string& error)
{
    QgsFeatureRenderer* renderer = layer->renderer() ;
    if( renderer==nullptr ){
        error = "no renderer" ;
        return 1 ;
    }
    QgsSingleSymbolRenderer* single = dynamic_cast<QgsSingleSymbolRenderer*>(renderer) ;
    if( single==nullptr ){
        error = "not QgsSingleSymbolRenderer" ;
        return 2;
    }

    QgsSymbolLayer* symlayer = single->symbol()->symbolLayer(0) ;
    QgsSimpleFillSymbolLayer* fillsymbol = dynamic_cast<QgsSimpleFillSymbolLayer*>(symlayer) ;
    if( fillsymbol==nullptr ){
        error = "not QgsSimpleFillSymbolLayer" ;
        return 3;
    }

    QJsonObject polysymbol ;
    polysymbol.insert("fillcolor" , qcolor2JsonObject(fillsymbol->fillColor())) ;

    QJsonObject linesymbol ;
    linesymbol.insert("color" , qcolor2JsonObject(fillsymbol->strokeColor())) ;
    linesymbol.insert("width" , fillsymbol->strokeWidth() ) ;
    if( fillsymbol->strokeStyle() == Qt::PenStyle::SolidLine ){
        linesymbol.insert("style","solid") ;
    }else if( fillsymbol->strokeStyle()==Qt::PenStyle::DotLine){
        linesymbol.insert("style","dot") ;
    }else{
        linesymbol.insert("style","dash") ;
    }

    polysymbol.insert("linesymbol" ,linesymbol) ;
    retdataobj.insert("polysymbol" , polysymbol) ;
    return 0;
}

QgsMapLayer* WMapComposer::findMapLayerByLyrid(QString lyrid)
{
    QList<QgsMapLayer*> layerList = m_project->layerTreeRoot()->layerOrder() ;
    for(auto it=layerList.begin() ; it != layerList.end(); ++ it )
    {
        QgsMapLayer* qlayer = *it;
        if( qlayer->id().compare(lyrid) == 0 ){
            return qlayer ;
        }
    }
    return nullptr ;
}


int WMapComposer::setLayerPointSymbol(QgsVectorLayer*layer,const QJsonObject& symObj,string& error)
{
    QString shape = symObj["shape"].toString() ;
    double size = getJsonObjDoubleValue(symObj,"size") ;

    QJsonObject polysym = symObj["polysymbol"].toObject() ;
    QColor fillcolor = jsonObject2QColor(polysym["fillcolor"].toObject()) ;
    QJsonObject lineobj = polysym["linesymbol"].toObject() ;
    QColor color1 = jsonObject2QColor(lineobj["color"].toObject()) ;
    QString style = lineobj["style"].toString() ;
    double width = getJsonObjDoubleValue(lineobj,"width") ;

    QgsFeatureRenderer* renderer = layer->renderer() ;
    if( renderer==nullptr ){
        error = "no renderer" ;
        return 1 ;
    }
    QgsSingleSymbolRenderer* single = dynamic_cast<QgsSingleSymbolRenderer*>(renderer) ;
    if( single==nullptr ){
        error = "not QgsSingleSymbolRenderer" ;
        return 2;
    }

    QgsSymbolLayer* symlayer = single->symbol()->symbolLayer(0) ;
    QgsSimpleMarkerSymbolLayer* symlayer2 = dynamic_cast<QgsSimpleMarkerSymbolLayer*>(symlayer) ;
    if( symlayer2==nullptr ){
        error = "not QgsSimpleMarkerSymbolLayer" ;
        return 3;
    }

    symlayer2->setSize(size);

    if( shape.compare("square")==0 ) {

        symlayer2->setShape(QgsSimpleMarkerSymbolLayerBase::Shape::Square);

    }else if( shape.compare("diamond")==0 ){

        symlayer2->setShape(QgsSimpleMarkerSymbolLayerBase::Shape::Diamond);

    }else if( shape.compare("pentagon")==0 ){

        symlayer2->setShape(QgsSimpleMarkerSymbolLayerBase::Shape::Pentagon);


    }else if( shape.compare("star")==0 ){

        symlayer2->setShape(QgsSimpleMarkerSymbolLayerBase::Shape::Star);


    }else if( shape.compare("triangle")==0 ){

        symlayer2->setShape(QgsSimpleMarkerSymbolLayerBase::Shape::Triangle);


    }else{ //circle for others

        symlayer2->setShape(QgsSimpleMarkerSymbolLayerBase::Shape::Circle);

    }

    symlayer2->setFillColor(fillcolor);
    symlayer2->setStrokeColor(color1);
    symlayer2->setStrokeWidth(width);

    if( style.compare("solid")==0){
        symlayer2->setStrokeStyle(Qt::PenStyle::SolidLine);
    }else if( style.compare("dot")==0){
        symlayer2->setStrokeStyle(Qt::PenStyle::DotLine);
    }else{
        symlayer2->setStrokeStyle(Qt::PenStyle::DashLine);
    }
    return 0;
}
int WMapComposer::setLayerLineSymbol(QgsVectorLayer*layer,const QJsonObject& symObj,string& error)
{
    QColor color1 = jsonObject2QColor(symObj["color"].toObject()) ;
    QString style = symObj["style"].toString() ;
    double width = getJsonObjDoubleValue(symObj,"width") ;

    QgsFeatureRenderer* renderer = layer->renderer() ;
    if( renderer==nullptr ){
        error = "no renderer" ;
        return 1 ;
    }
    QgsSingleSymbolRenderer* single = dynamic_cast<QgsSingleSymbolRenderer*>(renderer) ;
    if( single==nullptr ){
        error = "not QgsSingleSymbolRenderer" ;
        return 2;
    }

    QgsSymbolLayer* symlayer = single->symbol()->symbolLayer(0) ;
    QgsSimpleLineSymbolLayer* symlayer2 = dynamic_cast<QgsSimpleLineSymbolLayer*>(symlayer) ;
    if( symlayer2==nullptr ){
        error = "not QgsSimpleLineSymbolLayer" ;
        return 3;
    }

    symlayer2->setColor(color1);
    symlayer2->setWidth(width);
    if( style.compare("solid")==0){
        symlayer2->setPenStyle(Qt::PenStyle::SolidLine);
    }else if( style.compare("dot")==0){
        symlayer2->setPenStyle(Qt::PenStyle::DotLine);
    }else{
        symlayer2->setPenStyle(Qt::PenStyle::DashLine);
    }
    return 0 ;
}
int WMapComposer::setLayerPolySymbol(QgsVectorLayer*layer,const QJsonObject& symObj,string& error)
{
    QColor fillcolor = jsonObject2QColor(symObj["fillcolor"].toObject()) ;
    QJsonObject lineobj = symObj["linesymbol"].toObject() ;
    QColor color1 = jsonObject2QColor(lineobj["color"].toObject()) ;
    QString style = lineobj["style"].toString() ;
    double width = getJsonObjDoubleValue(lineobj,"width") ;

    QgsFeatureRenderer* renderer = layer->renderer() ;
    if( renderer==nullptr ){
        error = "no renderer" ;
        return 1 ;
    }
    QgsSingleSymbolRenderer* single = dynamic_cast<QgsSingleSymbolRenderer*>(renderer) ;
    if( single==nullptr ){
        error = "not QgsSingleSymbolRenderer" ;
        return 2;
    }

    QgsSymbolLayer* symlayer = single->symbol()->symbolLayer(0) ;
    QgsSimpleFillSymbolLayer* fillsymbol = dynamic_cast<QgsSimpleFillSymbolLayer*>(symlayer) ;
    if( fillsymbol==nullptr ){
        error = "not QgsSimpleFillSymbolLayer" ;
        return 3;
    }
    fillsymbol->setFillColor(fillcolor);
    fillsymbol->setStrokeColor(color1);
    fillsymbol->setStrokeWidth(width);
    if( style.compare("solid")==0){
        fillsymbol->setStrokeStyle(Qt::PenStyle::SolidLine);
    }else if( style.compare("dot")==0){
        fillsymbol->setStrokeStyle(Qt::PenStyle::DotLine);
    }else{
        fillsymbol->setStrokeStyle(Qt::PenStyle::DashLine);
    }
    return 0;
}

//2022-5-25 是否有未命名theme
bool WMapComposer::hasNoneNamedTheme(QgsProject* prj, QStringList& ref_vislyridlist )
{
    assert(prj!=nullptr) ;
    QgsLayerTreeGroup *root = prj->layerTreeRoot();
    QgsLayerTree emptyLayerTree ;
    QgsLayerTreeModel model( &emptyLayerTree ) ;
    QgsMapThemeCollection::MapThemeRecord mtrecord
            = QgsMapThemeCollection::createThemeFromCurrentState( root, &model );

    QStringList themeNameList = prj->mapThemeCollection()->mapThemes() ;
    for(int iname = 0 ; iname < themeNameList.length(); ++ iname ){
        QgsMapThemeCollection::MapThemeRecord mtrec2 =
                prj->mapThemeCollection()->mapThemeState( themeNameList[iname] ) ;
        if( mtrecord == mtrec2 ){
            return false ;
        }
    }
    QList<QgsMapThemeCollection::MapThemeLayerRecord> recordlist = mtrecord.layerRecords() ;
    for(QgsMapThemeCollection::MapThemeLayerRecord rec1 : recordlist)
    {
        if( rec1.isVisible==true ){
            ref_vislyridlist.append( rec1.layer()->id() );
        }else {
            //skip
        }
    }
    return true ;
}

//2022-5-27 如果没有返回null
QgsLayoutItemMap* WMapComposer::findFirstLayoutItemMap(QgsLayout* layout)
{
    QList<QgsLayoutItem*> itemList ;
    layout->layoutItems( itemList ) ;
    for(auto it = itemList.begin() ; it != itemList.end() ; ++ it )
    {
        if( (*it)->type() == QgsLayoutItemRegistry::ItemType::LayoutMap ) {
            return (QgsLayoutItemMap*)(*it) ;
        }
    }
    return nullptr ;
}

//2022-5-30
//2022-9-22
void WMapComposer::updateStyleLegendImagesByDpi(QgsPrintLayout* layout,int dpi)
{
    QString tailname = QString(".dpi") + QString::number(dpi) + ".png" ;
    QList<QgsLayoutItem*> itemList ;
    layout->layoutItems( itemList ) ;
    for(auto it = itemList.begin() ; it != itemList.end() ; ++ it )
    {
        if( (*it)->type() == QgsLayoutItemRegistry::ItemType::LayoutPicture ) {
            QgsLayoutItemPicture* picture = (QgsLayoutItemPicture*)(*it) ;
            if( picture->id().left(6).compare("style:")==0 ){
                QString relJsonFile = picture->id().mid(6) ;
                QString fullJsonFile = m_pedir + relJsonFile ;
                QString qgsfile = m_project->fileName();
                QString fullPngDpiFile = concatNewFilename( qgsfile, relJsonFile,tailname) ;
                QString spptFilename = concatNewFilename(qgsfile, relJsonFile, ".sppt.json") ;
                QFile pngFileObj(fullPngDpiFile) ;
                if( pngFileObj.exists()==true ){
                    picture->setPicturePath(fullPngDpiFile);
                }else{
                    qDebug()<<"making new png "<<fullPngDpiFile ;
                    PeLegend pel ;
                    string pelError ;
                    int pelcode = pel.makePngByJsonFile2(
                                fullJsonFile.toStdString(),
                                spptFilename.toStdString(),
                                fullPngDpiFile.toStdString(),
                                dpi ,
                                pelError) ;
                    if( pelcode!=0 ){
                        qDebug()<<"making failed:"<<pelcode<<" , "<<pelError.c_str() ;
                    }else{
                        qDebug()<<"making good." ;
                        picture->setPicturePath(fullPngDpiFile);
                    }
                }
            }
        }
    }
}

QgsPrintLayout* WMapComposer::getFirstLayout(QgsProject* prj)
{
    if( prj!=nullptr && prj->layoutManager()->layouts().size()>0 ){
        QgsPrintLayout* layout = (QgsPrintLayout*)prj->layoutManager()->layouts()[0] ;
        return layout ;
    }else{
        return nullptr;
    }
}


QString WMapComposer::concatNewFilename(QString  part1 , QString  part2, QString part3 )
{
    QFileInfo part2info(part2);
    QString basename = part2info.baseName();
    QString res = part1 + "-" + basename + part3;
    return res;
}

QgsLayoutItem* WMapComposer::findFirstLayoutItemOfLegendPlaceholder(QgsLayout* layout)
{
    QList<QgsLayoutItem*> itemList ;
    layout->layoutItems( itemList ) ;
    for(auto it = itemList.begin() ; it != itemList.end() ; ++ it )
    {
        if( (*it)->id().compare("legend_placeholder")==0 ) {
            return (*it) ;
        }
    }
    return nullptr ;
}

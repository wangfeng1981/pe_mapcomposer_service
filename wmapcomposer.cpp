#include "wmapcomposer.h"

WMapComposer::WMapComposer(string pedir,string resdir)
{
    m_project = nullptr ;
    m_pedir = QString::fromStdString(pedir) ;
    m_layoutResDir = QString::fromStdString(resdir) ;
    qDebug()<<"using pedir:"<<m_pedir  ;
}

/// one method one line...
string WMapComposer::getMethodAPIs()
{
    string out = "" ;
    out += "--- methods start ---\n" ;
    out += "layout.addimage:file,relsrc\n" ;
    out += "layout.addlabel:file,text\n" ;
    out += "layout.addlegend:file,\n" ;
    out += "layout.addmap:file,\n" ;
    out += "layout.addnorth:file,\n" ;
    out += "layout.addscalebar:file,\n" ;
    out += "layout.addrect:file,\n" ;
    out += "layout.addell:file,\n" ;
    out += "layout.addarrow:file,\n" ;
    out += "layout.exportparts:file,outfile,dpi\n" ;
    out += "project.addwms:file,\n" ;
    out += "project.addvec:file,vecname,vecfile\n" ;
    out += "project.new:file\n" ;
    out += "project.export:file,outfile,dpi\n" ;
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
int WMapComposer::run(string method,QString& jsondata, string& error)
{
    if( method == "project.new" ){
        return this->projectNew(jsondata , error) ;
    }
    else if( method=="project.addwms")
    {
        return this->projectAddWms(jsondata,error) ;
    }
    else if( method=="layout.addmap" ){
        return this->layoutAddMap(jsondata,error) ;
    }
    else if( method=="layout.exportparts"){
        return this->layoutExportParts(jsondata,error) ;
    }
    else if( method=="layout.addlabel")
    {
        return this->layoutAddLabel(jsondata, error) ;
    }
    else if( method=="layout.addimage"){
        return this->layoutAddImage(jsondata,error) ;
    }
    else if( method == "layout.addlegend" ){
        return this->layoutAddLegend(jsondata,error) ;
    }
    else if( method=="layout.addnorth")
    {
        return this->layoutAddNorth(jsondata,error) ;
    }
    else if( method=="layout.addscalebar")
    {
        return this->layoutAddScaleBar(jsondata,error) ;
    }
    else if( method=="layout.addrect"){
        return this->layoutAddRect(jsondata,error) ;
    }
    else if( method=="layout.addell"){
        return this->layoutAddEll(jsondata,error) ;
    }
    else if( method=="layout.addarrow"){
        return this->layoutAddArrow(jsondata,error) ;
    }
    else if(method=="project.addvec")
    {
        return this->projectAddVec(jsondata,error) ;
    }
    else if(method=="project.export")
    {
        return this->projectExport(jsondata,error) ;
    }

    cout<<"not supported method:"<<method<<endl ;
    return 9 ;
}

int WMapComposer::checkAndResetProjectFile(string& newfile,string& error)
{
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    if( newfile=="" ){
        error = "empty new file." ;
        return 1 ;
    }
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



int WMapComposer::projectNew(QString& jsondata,string& error)
{
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    string filepath = jdoc.object().value("file").toString().toStdString() ;
    cout<<"file:"<<filepath<<endl ;
    if(filepath==""){
        error = "empty filepath." ;
        return 2 ;
    }

    string oldfilename = this->m_project->fileName().toStdString() ;
    cout<<"oldfilename:"<<oldfilename<<endl ;
    if( oldfilename != "" )
    {
        this->m_project->write() ;
    }

    this->m_project->clear();

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

    cout<<"newfilename:"<<filepath<<endl ;
    bool wok = this->m_project->write(filepath.c_str() ) ;
    if( wok==false ){
        error = "failed to write new file." ;
        return 3 ;
    }

    return 0 ;
}


int WMapComposer::projectAddWms(QString& jsondata,string& error)
{
    // JSON //////////////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    string filepath = jdoc.object().value("file").toString().toStdString() ;
    cout<<"file:"<<filepath<<endl ;
    if(filepath==""){
        error = "empty filepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(filepath , error ) ;
    if( code1 != 0 ) return code1 ;

    QgsDataSourceUri uri1;
    uri1.setParam("url", "http://localhost/qgisserver?SERVICE=WMS&VERSION=1.3.0&REQUEST=GetCapabilities&map=/home/hadoop/qgisserver_projects/world.qgs");

    //    ///////////////////////////////////////


    //uri1.setParam( QStringLiteral( "tileMatrixSet" ), "ms_7");
    uri1.setParam( QStringLiteral( "layers" ), "world-truecolor" );
    uri1.setParam( QStringLiteral( "styles" ), "default" );
    uri1.setParam( QStringLiteral( "format" ), "image/png" );
    uri1.setParam( QStringLiteral( "crs" ), "EPSG:4326" );
    //uri1.setParam( QStringLiteral( "tileDimensions" ), "datetime=20190601000000" );
    qDebug()<<uri1.encodedUri();

    QgsRasterLayer* rlayer = new QgsRasterLayer( uri1.encodedUri() ,"layer1","wms") ;
    if( rlayer->isValid() )
    {
        qDebug()<<"rlayer good";
        m_project->addMapLayer(rlayer);
    }else{
        qDebug()<<"rlayer bad,"<< rlayer->error().message();
        delete rlayer;
        error = "bad wms layer:"+rlayer->error().message().toStdString() ;
        return 4 ;
    }


    // SAVE //////////////////////////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }
    // ///////////////////////////////////////

    return 0 ;
}


int WMapComposer::layoutAddMap(QString& jsondata,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    string filepath = jdoc.object().value("file").toString().toStdString() ;
    cout<<"file:"<<filepath<<endl ;
    if(filepath==""){
        error = "empty filepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(filepath , error ) ;
    if( code1 != 0 ) return code1 ;

    double left = 0;// jroot["left"].as<double>() ;
    double top =  0;//jroot["top"].as<double>() ;
    double width =100;// jroot["width"].as<double>() ;
    double height =100;// jroot["height"].as<double>() ;
    cout<<"l,t,w,h:"<<left<<","<<top<<","<<width<<","<<height<<endl ;

    // //////////////////////////////////////////////

    QgsPrintLayout* layout = (QgsPrintLayout*)this->m_project->layoutManager()->layoutByName("1") ;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 2 ;
    }

    QgsLayoutItemMap* mapItem = QgsLayoutItemMap::create( layout ) ;
    mapItem->setPos(left,top);
    mapItem->attemptResize( QgsLayoutSize(width,height));
    mapItem->setExtent( QgsRectangle(-180,-90,180,90) );
    double scale = 360.0*111*1000*1000 / width ;
    mapItem->setScale( scale );
    layout->addLayoutItem(mapItem) ;


    // SAVE //////////////////////////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }
    // ///////////////////////////////////////


    return 0 ;
}


int WMapComposer::layoutExportParts(QString& jsondata,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string filepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<filepath<<endl ;
    if(filepath==""){
        error = "empty filepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(filepath , error ) ;
    if( code1 != 0 ) return code1 ;


    string outfile = jroot["outfile"].toString().toStdString();
    cout<<"outfile:"<<outfile<<endl ;

    int dpi = jroot["dpi"].toInt() ;
    if( dpi==0 ) dpi = 72 ;
    cout<<"dpi:"<<dpi<<endl ;

    // //////////////////////////////////////////////

    QgsPrintLayout* layout = (QgsPrintLayout*)this->m_project->layoutManager()->layoutByName("1") ;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 12 ;
    }

    QList<QgsLayoutItem*> loItems ;
    layout->layoutItems(loItems) ;

    int iitem = 0 ;
    for(auto it = loItems.begin() ; it != loItems.end() ; ++ it )
    {
        stringstream ss ;
        ss<<outfile<<"-"<<(++iitem)<<".png" ;
        string outname1 = ss.str() ;
        renderMapItem( *it , outname1 , dpi , layout, loItems) ;
    }





    return 0 ;
}

int WMapComposer::renderMapItem(QgsLayoutItem* oneItem,string filename, int dpi,
                                QgsLayout* pLayout, QList<QgsLayoutItem*>& itemList )
{
    //hide all but this item, and then reset visible
    for( QList<QgsLayoutItem*>::iterator  it = itemList.begin() ; it != itemList.end() ; ++ it )
    {
        (*it)->setVisibility(false);
    }


    oneItem->setVisibility(true);
    pLayout->refresh();
    QgsLayoutExporter exporter(pLayout);
    QRectF mapRegion = pLayout->pageItemBounds(0,true) ;
    QImage outImage = exporter.renderRegionToImage( mapRegion,
                                           QSize(),
                                           dpi ) ;
    outImage.save( filename.c_str()) ;

    for( QList<QgsLayoutItem*>::iterator  it = itemList.begin() ; it != itemList.end() ; ++ it )
    {
        (*it)->setVisibility(true);
    }

    return 0 ;
}


int WMapComposer::layoutAddLabel(QString& jsondata,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string filepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<filepath<<endl ;
    if(filepath==""){
        error = "empty filepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(filepath , error ) ;
    if( code1 != 0 ) return code1 ;

    double left = 0;//jroot["left"].as<double>() ;
    double top =  0;//jroot["top"].as<double>() ;
    double width = 100;//jroot["width"].as<double>() ;
    double height = 20;//jroot["height"].as<double>() ;
    cout<<"l,t,w,h:"<<left<<","<<top<<","<<width<<","<<height<<endl ;
    QString text = jroot["text"].toString() ;
    qDebug()<<"text:"<<text ;

    // //////////////////////////////////////////////

    QgsPrintLayout* layout = (QgsPrintLayout*)this->m_project->layoutManager()->layoutByName("1") ;
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


    return 0 ;
}


/// file,left,top,width,height,mapuuid
int WMapComposer::layoutAddScaleBar(QString& jsondata,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string filepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<filepath<<endl ;
    if(filepath==""){
        error = "empty filepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(filepath , error ) ;
    if( code1 != 0 ) return code1 ;

    double left = 0;//jroot["left"].as<double>() ;
    double top =  0;//jroot["top"].as<double>() ;
    double width = 100;//jroot["width"].as<double>() ;
    double height = 20;//jroot["height"].as<double>() ;
    cout<<"l,t,w,h:"<<left<<","<<top<<","<<width<<","<<height<<endl ;
    string mapuuid = jroot["mapuuid"].toString().toStdString() ;
    qDebug()<<"mapuuid:"<<mapuuid.c_str() ;

    // //////////////////////////////////////////////

    QgsPrintLayout* layout = (QgsPrintLayout*)this->m_project->layoutManager()->layoutByName("1") ;
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
    scalebar->setPos(left,top);
    scalebar->attemptResize( QgsLayoutSize(width,height));
    layout->addLayoutItem(scalebar);



    // SAVE //////////////////////////////////
    bool wok = this->m_project->write() ;
    if( wok==false ){
        error = "failed to write file." ;
        return 3 ;
    }
    // ///////////////////////////////////////
    return 0 ;
}

QgsLayoutItem* WMapComposer::findLayoutItemByUuid(QgsLayout* layout,string uuid)
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
int WMapComposer::layoutAddLegend(QString& jsondata,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string filepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<filepath<<endl ;
    if(filepath==""){
        error = "empty filepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(filepath , error ) ;
    if( code1 != 0 ) return code1 ;

    double left = 0;//jroot["left"].as<double>() ;
    double top =  0;//jroot["top"].as<double>() ;
    double width = 100;//jroot["width"].as<double>() ;
    double height = 20;//jroot["height"].as<double>() ;
    cout<<"l,t,w,h:"<<left<<","<<top<<","<<width<<","<<height<<endl ;
    string mapuuid = jroot["mapuuid"].toString().toStdString() ;
    qDebug()<<"mapuuid:"<<mapuuid.c_str() ;

    // //////////////////////////////////////////////


    QgsPrintLayout* layout = (QgsPrintLayout*)this->m_project->layoutManager()->layoutByName("1") ;
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
    return 0 ;
}





/// file,left,top,width,height,relsrc
int WMapComposer::layoutAddImage(QString& jsondata,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string filepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<filepath<<endl ;
    if(filepath==""){
        error = "empty filepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(filepath , error ) ;
    if( code1 != 0 ) return code1 ;

    double left = 0;//jroot["left"].as<double>() ;
    double top =  0;//jroot["top"].as<double>() ;
    double width = 50;//jroot["width"].as<double>() ;
    double height = 50;//jroot["height"].as<double>() ;
    cout<<"l,t,w,h:"<<left<<","<<top<<","<<width<<","<<height<<endl ;
    QString relsrc = jroot["relsrc"].toString() ;
    qDebug()<<"relsrc:"<<relsrc ;

    // //////////////////////////////////////////////



    QgsPrintLayout* layout = (QgsPrintLayout*)this->m_project->layoutManager()->layoutByName("1") ;
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
    return 0 ;
}





/// file,left,top,width,height
int WMapComposer::layoutAddNorth(QString& jsondata,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string filepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<filepath<<endl ;
    if(filepath==""){
        error = "empty filepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(filepath , error ) ;
    if( code1 != 0 ) return code1 ;

    double left = 0;//jroot["left"].as<double>() ;
    double top =  0;//jroot["top"].as<double>() ;
    double width = 20;//jroot["width"].as<double>() ;
    double height = 20;//jroot["height"].as<double>() ;
    cout<<"l,t,w,h:"<<left<<","<<top<<","<<width<<","<<height<<endl ;
    string mapuuid = jroot["mapuuid"].toString().toStdString() ;
    qDebug()<<"mapuuid:"<<mapuuid.c_str() ;

    // //////////////////////////////////////////////



    QgsPrintLayout* layout = (QgsPrintLayout*)this->m_project->layoutManager()->layoutByName("1") ;
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
    return 0 ;

}


int WMapComposer::layoutAddArrow(QString& jsondata,string& error)
{
    return this->layoutAddRectEllArrow("arrow" , jsondata, error) ;
}


int WMapComposer::layoutAddRect(QString& jsondata,string& error)
{
    return this->layoutAddRectEllArrow("rect" , jsondata, error) ;
}


int WMapComposer::layoutAddEll(QString& jsondata,string& error)
{
    return this->layoutAddRectEllArrow("ell" , jsondata, error) ;
}



/// file,left,top,width,height
int WMapComposer::layoutAddRectEllArrow(string shapetype,QString& jsondata,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string filepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<filepath<<endl ;
    if(filepath==""){
        error = "empty filepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(filepath , error ) ;
    if( code1 != 0 ) return code1 ;

    double left = 0;//jroot["left"].as<double>() ;
    double top =  0;//jroot["top"].as<double>() ;
    double width = 50;//jroot["width"].as<double>() ;
    double height = 0;//jroot["height"].as<double>() ;
    cout<<"l,t,w,h:"<<left<<","<<top<<","<<width<<","<<height<<endl ;

    qDebug()<<"shapetype:"<<shapetype.c_str() ;

    // //////////////////////////////////////////////





    QgsPrintLayout* layout = (QgsPrintLayout*)this->m_project->layoutManager()->layoutByName("1") ;
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
    return 0 ;
}


/// \brief WMapComposer::projectAddVec
/// \param jsondata  file,vecname,vecfile(geojson or shp) vecfile 是相对路径，相对{pedir}
/// \param error
/// \return
///
int WMapComposer::projectAddVec(QString& jsondata,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string filepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<filepath<<endl ;
    if(filepath==""){
        error = "empty filepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(filepath , error ) ;
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


    QgsPrintLayout* layout = (QgsPrintLayout*)this->m_project->layoutManager()->layoutByName("1") ;
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
    return 0 ;
}





// outjsonfile is full absfilepath
int WMapComposer::exportProjectJsonFile(QString outjsonfile, QString outfileroot, string& error)
{
    if( m_project==nullptr ){
        error = "empty project." ;
        return 0 ;
    }


    QgsPrintLayout* layout = (QgsPrintLayout*)this->m_project->layoutManager()->layoutByName("1") ;
    if( layout==nullptr ){
        error = "failed to get layout pointer." ;
        return 12 ;
    }

    QJsonArray layerArr ;
    QMap<QString, QgsMapLayer *> layersMap = m_project->mapLayers();
    for(auto it=layersMap.begin() ; it != layersMap.end(); ++ it )
    {
        QString qlyrid = it.key() ;
        QgsMapLayer* qlayer = it.value() ;

        QJsonObject lyrObj ;
        lyrObj.insert( "qlyrid" , QJsonValue(qlyrid) ) ;

        bool lyrok = true ;
        if( qlayer->type()== QgsMapLayerType::RasterLayer ){
            lyrObj.insert( "type" , "wms") ;
        }else if( qlayer->type()== QgsMapLayerType::VectorLayer )
        {
            lyrObj.insert( "type" , "vec") ;
        }else{
            qDebug()<<"Warning : unsupported layer type:"<< (int) qlayer->type() << " , skip it."  ;
            lyrok = false ;
        }

        if( lyrok==true ){
            layerArr.append(lyrObj);
        }

    }


    int loiIndex = 0 ;
    QJsonArray layoutitemsArray ;
    QList<QgsLayoutItem*> loItems ;
    layout->layoutItems(loItems) ;

    for(auto it = loItems.begin(); it != loItems.end(); ++ it )
    {
        ++ loiIndex ;
        QString relPngFile = outfileroot + "-" + QString::number(loiIndex) + ".png";

        QJsonObject itemJsonObj  ;
        itemJsonObj.insert("png" , QJsonValue(relPngFile)) ;

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
                dataJsonObj.insert("proj" , mapitem->crs().authid() ) ;
                dataJsonObj.insert("scale" , mapitem->scale() ) ;
                QgsRectangle mapextent = mapitem->extent() ;

                QJsonObject extentJsonObj ;
                extentJsonObj.insert("xmin" , mapextent.xMinimum() ) ;
                extentJsonObj.insert("xmax" , mapextent.xMaximum() ) ;
                extentJsonObj.insert("ymin" , mapextent.yMinimum() ) ;
                extentJsonObj.insert("ymax" , mapextent.yMaximum() ) ;
                dataJsonObj.insert("extent" , extentJsonObj) ;
                itemJsonObj.insert("data", dataJsonObj) ;
            }

        } break ;
        case QgsLayoutItemRegistry::ItemType::LayoutPicture:
        {
            QgsLayoutItemPicture* pic = (QgsLayoutItemPicture*)(*it) ;
            if( lo_obj.value("loitype").toString().compare("north") )
            {
                QJsonObject dataJsonObj ;
                if( pic->linkedMap()==nullptr ){
                    dataJsonObj.insert("mapuuid" , "") ;
                }else{
                    dataJsonObj.insert("mapuuid" , pic->linkedMap()->uuid() ) ;
                }
                itemJsonObj.insert("data" , dataJsonObj) ;
            }else{
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
                fontJsonObj.insert("size" , label->font().pixelSize() );
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
            layoutitemsArray.append( itemJsonObj );
        }
    }

    QJsonObject projJsonObj ;
    projJsonObj.insert("file" , QJsonValue(m_project->fileName()) ) ;
    projJsonObj.insert("loitem_array" ,layoutitemsArray ) ;
    projJsonObj.insert("layer_array" , layerArr ) ;

    QJsonDocument jdoc( projJsonObj ) ;

    QByteArray bytes = jdoc.toJson( QJsonDocument::Indented );
    QFile file( outjsonfile );
    if( file.open( QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate ) )
    {
        QTextStream iStream( &file );
        iStream.setCodec( "utf-8" );
        iStream << bytes;
        file.close();
    }
    else
    {
        error = "failed to open outjsonfile." ;
        return 13;
    }

    return 0;
}

/// file,outfile,dpi
int WMapComposer::projectExport(QString& jsondata,string& error)
{
    // json and project ////////////////////////////
    if( this->m_project==nullptr ) this->m_project = QgsProject::instance() ;
    QJsonDocument jdoc = QJsonDocument::fromJson(jsondata.toUtf8()) ;
    if( jdoc.isNull() ){
        error="failed parser json.";
        return 1;
    }
    QJsonObject jroot = jdoc.object() ;
    string filepath = jroot["file"].toString().toStdString() ;
    cout<<"file:"<<filepath<<endl ;
    if(filepath==""){
        error = "empty filepath." ;
        return 2 ;
    }
    int code1 = checkAndResetProjectFile(filepath , error ) ;
    if( code1 != 0 ) return code1 ;

    QString outfile = jroot["outfile"].toString() ;
    if( outfile.length()==0 ){
        error = "empty outfile" ;
        return 3 ;
    }

    qDebug()<<"outfile:"<<outfile ;

    // //////////////////////////////////////////////

    QString outjsonfile = outfile + ".json" ;

    int ret0 = this->layoutExportParts(jsondata, error) ;
    if( ret0!=0 ){
        return ret0 ;
    }
    int ret1 = this->exportProjectJsonFile(outjsonfile, outfile ,error ) ;


    // SAVE //////////////////////////////////
    // ///////////////////////////////////////
    return ret1 ;

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
//    z,
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
    obj.insert("left" , item->pagePositionWithUnits().x() ) ;
    obj.insert("top" , item->pagePositionWithUnits().y() ) ;
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
            obj.insert("loitype" , QJsonValue("image") );
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
        grid.insert("enabled" ,1) ;
        grid.insert("stepx" ,mapGrid->intervalX() ) ;
        grid.insert("sttepy" , mapGrid->intervalY()) ;
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
            fontJsonObj.insert("size" , mapGrid->annotationFont().pixelSize() );
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

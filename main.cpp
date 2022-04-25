#include <QCoreApplication>
/// 在线作图后台程序 2022-4-13
/// 使用http POST 服务模拟一个RPC 参数为两个一个method字符串类型，一个jsondata是转为字符串的json对象
/// 返回信息统一使用json {state:0 , message:'may some error msg' , data:{...} }


#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <QCoreApplication>
#include <QDir>
#include "qgsapplication.h"
#include <iostream>
#include <fstream>
#include "qgsproject.h"
#include "qgslayout.h"
#include "qgsprintlayout.h"
#include "qgsrasterlayer.h"
#include "qgsvectorlayer.h"
#include "qgslayoutitemmap.h"
#include "qgslayoutexporter.h"
#include "qgssinglebandpseudocolorrenderer.h"
#include "qgsrastershader.h"
#include "qgslayoutitemmapgrid.h"
#include "qgslayoutitempicture.h"
#include "qgslayoutitem.h"
#include "qgsfeature.h"
#include "qgsfeaturerequest.h"
#include "qgsfeaturesource.h"
#include "qgis_core.h"
#include "qgsrenderer.h"
#include "qgssymbollayer.h"
#include "qgssinglesymbolrenderer.h"
#include "qgsfillsymbollayer.h"
#include "qgslayoutitemlabel.h"
#include "qgslayoutpagecollection.h"
#include "qgslayoutmanager.h"
#include "qgslayoutexporter.h"
#include <cmath>
#include "qgslayertree.h"
#include <thread>
#include <chrono>
#include <qgsmapcanvas.h>
#include <qgslogger.h>
#include <QWidget>
#include <QVBoxLayout>
#include <qgsproviderregistry.h>
#include <QTextStream>
#include <QTextStream>
#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>
#include <QStringList>

#include "ajson5.h"
#include "wmapcomposer.h"
#include "httplib.h"
#include <zmq.h>

#include "../sharedcodes/wstringutils.h"
#include "helperfunctions.h"



using namespace std;
using namespace httplib;

int g_httpPort = 15911 ;//default, this will be reset by task17config.json
int g_zmqPort = 15922 ;//default
string g_methodSeparator = ";;-;;-;;" ;

bool loadTask17Config(QString configfile, QString& retPeDir , QString& retResDir , QString& retPort,QString& retZmqPort)
{
    QFile file(configfile) ;
    if( file.open( QFile::OpenModeFlag::ReadOnly )==false ){
        return false ;
    }
    QTextStream stream( &file );
    QString filetext = stream.readAll() ;
    file.close();

    QJsonDocument jdoc = QJsonDocument::fromJson(filetext.toUtf8()) ;
    retPeDir = jdoc.object()["pedir"].toString() ;
    retResDir = jdoc.object()["omc_resdir"].toString();
    retPort = jdoc.object()["omc_port"].toString() ;
    retZmqPort = jdoc.object()["omc_zmqport"].toString() ;
    return true ;
}


void runHttp()
{
    qDebug()<<"in http threading..." ;
    Server omcHttpServer ;

    QString zmqPortStr = QString::number(g_zmqPort) ;

    void *httpcontext = zmq_ctx_new ();
    void *httprequester = zmq_socket (httpcontext, ZMQ_REQ);

    string address =string("tcp://localhost:")+ zmqPortStr.toStdString() ;
    int rc2 = zmq_connect (httprequester,  address.c_str() );
    cout<<"http connect rc:"<<rc2<<endl ;

    omcHttpServer.Post("/", [&](const Request& req,Response& res){
        cout<<"--- new request ---"<<endl ;
        res.set_header("Access-Control-Allow-Origin", "*");

        string method = req.get_file_value("method").content ;
        string jsondata = req.get_file_value("data").content ;
        cout<<"method:"<<method<<endl ;
        cout<<"data:"<<jsondata<<endl ;
        if( method=="" || jsondata=="" || jsondata[0]!='{' || jsondata.back()!='}' ){
            cout<<"no method or data or bad data as json."<<endl ;
            res.set_content("{\"state\":1,\"message\":\"no method or data or bad data as json.\",\"data\":{}}" , "application/json");
        }else{
            string methodandjsondata = method+g_methodSeparator+jsondata ;
            char buffer [2048];
            cout<<"sending "<<method<<endl ;
            int rc101 = zmq_send (httprequester, methodandjsondata.c_str() , methodandjsondata.size() , 0);
            if( rc101 <= 0 ){
                res.set_content("{\"state\":2,\"message\":\"service is too busy, please retry later.\",\"data\":{}}" , "application/json");
            }else{
                int trecvbytesize = zmq_recv (httprequester, buffer, 2048, 0);
                if( trecvbytesize<=0 ){
                    res.set_content("{\"state\":3,\"message\":\"service is corrupted, please retry later.\",\"data\":{}}" , "application/json");
                }else{
                    cout<<"recving "<<method<<endl ;
                    buffer[min(trecvbytesize,2047)] = '\0' ;
                    string outjsondata = string(buffer) ;
                    res.set_content(outjsondata , "application/json");
                    cout<<"send http and this call ok."<<method<<endl ;
                }
            }
        }
    }) ;

    qDebug()<<"http server running at 0.0.0.0:"<<g_httpPort<<"..." ;
    omcHttpServer.listen("0.0.0.0" , g_httpPort ) ;

    cout<<"http threading out."<<endl ;
}


int main(int argc, char *argv[])
{
    cout<<"A service program for pixelengine qgis map composer. 2022-4-13"<<endl ;
    cout<<"usage: pe_mapcomposer_service task17config.json"<<endl ;
    cout<<"A4 page export dpi72 has 841x595 pixels."<<endl ;
    cout<<"This program will create oms_out dir under pedir for output jsons and pngs."<<endl ;
    cout<<"v0.0.0 created."<<endl ;
    cout<<"v0.0.1 "<<endl ;
    cout<<"v0.0.3 2022-4-16"<<endl ;
    cout<<"v0.0.4 2022-4-17"<<endl ;
    cout<<"v0.0.6 addmap x0,x1,y0,y1 2022-4-19"<<endl ;
    cout<<"v0.0.7 2022-4-21"<<endl ;
    cout<<"v0.0.9 2022-4-25 add crs list for MapItem"<<endl ;

    const string PROJ_DIR = "/usr/share/gdal/2.2" ;
    QDir currdir = QDir::currentPath() ;
    qDebug()<< currdir.path() ;
    QgsApplication::setPrefixPath( "/usr/local" , true );
    cout<<"set PROJ_LIB:"<<PROJ_DIR<<endl ;
    qputenv("PROJ_LIB",PROJ_DIR.c_str());
    QgsApplication a(argc,argv,true);
    cout<<"init qgis..."<<endl ;

    QgsApplication::initQgis();
    qDebug()<<"providerlist:"<<QgsProviderRegistry::instance()->providerList() ;
    cout<<"init qgis done."<<endl ;

    /////////////////////////////////////////////////////
    /// 读取一次自定义投影信息列表，如果db文件有更新需要重启该程序
    cout<<"loading all crs..."<<endl ;
    OmcHelperFunctions::loadAllCrs() ;
    cout<<"Loaded Crs count:"<<OmcHelperFunctions::s_allCrsAuthidList.length()<<endl ;

    if( argc!=2 ){
        cout<<"argc not 2"<<endl ;
        return 11 ;
    }

    QString task17configfile = argv[1] ;
    QString peDir , resDir , httpPort , zmqPort ;
    bool jsonok = loadTask17Config(task17configfile, peDir, resDir , httpPort, zmqPort ) ;
    if( jsonok==false ){
        cout<<"parse config json failed."<<endl ;
        return 12 ;
    }
    qDebug()<<"pedir,omc_resdir,omc_port:"<<peDir<<","<<resDir<<","<<httpPort<<endl ;
    qDebug()<<"zmqPort:"<<zmqPort ;

    g_httpPort = httpPort.toInt() ;
    g_zmqPort = zmqPort.toInt() ;





    WMapComposer mapComposer(peDir , resDir ) ;

    cout<<"///////// Method APIs Start /////////////"<<endl ;
    cout<<"//"<<endl ;
    cout<<"//"<<endl ;
    cout<<"//"<<endl ;
    cout<< mapComposer.getMethodAPIs() <<endl ;
    cout<<"//"<<endl ;
    cout<<"//"<<endl ;
    cout<<"//"<<endl ;
    cout<<"///////// Method APIs End   /////////////"<<endl ;


    void *mainContext = zmq_ctx_new ();
    void *mainResponder = zmq_socket (mainContext, ZMQ_REP);
    string address0 = string("tcp://*:") + zmqPort.toStdString() ;
    int   mainRc = zmq_bind (mainResponder, address0.c_str() );
    if( mainRc != 0 ){
        cout<<"main zeromq bind failed."<<endl ;
        return 15 ;
    }

    //run http server
    cout<<"start http server threading..."<<endl ;
    std::thread httpThread(runHttp) ;

    cout<<"continue main threading..."<<endl ;


    while(true){
        char buffer[2048] ;
        cout<<"main wainting."<<endl ;
        int recvbytesize = zmq_recv (mainResponder, buffer, 2048, 0);
        if( recvbytesize<=0 ){
            string outjsondata = "{\"state\":4,\"message\":\"bad params.\",\"data\":{}}" ;
            zmq_send (mainResponder, outjsondata.c_str() , outjsondata.size() , 0);
        }else{
            buffer[min(recvbytesize,2047)] = '\0' ;
            cout<<"main recv buffer:"<<buffer<<endl ;
            string outjsondata = "" ;
            QString fullstr = QString::fromUtf8(buffer) ;
            QStringList strArr = fullstr.split( QString::fromStdString(g_methodSeparator) ) ;
            if( strArr.size()!=2 ){
                outjsondata = "{\"state\":1,\"message\":\"splited strArr.size not 2.\",\"data\":{}}" ;
            }else{
                string method = strArr[0].toStdString() ;
                QString jsondata = strArr[1];
                if( method=="" || jsondata=="" ){
                    outjsondata = "{\"state\":1,\"message\":\"no method or data.\",\"data\":{}}"  ;
                }else{
                    cout<<"method:"<<method<<endl ;
                    string runError ;
                    string outJsonDataText ;
                    qDebug()<<"jsondata:"<<jsondata ;
                    int runcode = mapComposer.run(method , jsondata , outJsonDataText , runError ) ;
                    QString fullOutJsonText = QString("{")
                            + "\"state\":" + QString::number(runcode) + ","
                            + "\"message\":" + "\"" + QString::fromStdString(runError) + "\","
                            + "\"data\":" +  QString::fromStdString(outJsonDataText) + "}" ;
                    outjsondata = fullOutJsonText.toStdString() ;
                }
            }
            zmq_send (mainResponder, outjsondata.c_str() , outjsondata.size() , 0);
        }
    }


    cout<<"qt exec ... ..."<<endl ;
    a.exec() ;
    cout<<"service out."<<endl;
    return 0;
}

#include <QCoreApplication>
/// 在线作图后台程序 2022-4-13
///
///


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


#include "ajson5.h"
#include "wmapcomposer.h"


using namespace std;

bool loadTask17Config(QString configfile, QString& retPeDir , QString& retResDir)
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

    return true ;
}


int main(int argc, char *argv[])
{
    cout<<"A service program for pixelengine qgis map composer. 2022-4-13"<<endl ;
    cout<<"usage: pe_mapcomposer_service task17config.json"<<endl ;
    cout<<"A4 page export dpi72 has 841x595 pixels."<<endl ;
    cout<<"This program will create oms_out dir under pedir for output jsons and pngs."<<endl ;
    cout<<"v0.0.0 created."<<endl ;
    cout<<"v0.0.1 "<<endl ;

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

    if( argc!=2 ){
        cout<<"argc not 2"<<endl ;
        return 11 ;
    }

    QString task17configfile = argv[1] ;
    QString peDir , resDir ;
    bool jsonok = loadTask17Config(task17configfile, peDir, resDir) ;
    if( jsonok==false ){
        cout<<"parse config json failed."<<endl ;
        return 12 ;
    }
    qDebug()<<"pedir,omc_resdir:"<<peDir<<","<<resDir<<endl ;

    //make subdir of pedir/omc_out/
    QString omcOutDirPath = peDir + "omc_out" ;
    {
        QDir omcOutDir(omcOutDirPath) ;
        if( omcOutDir.exists()==false ){
            qDebug()<<"try to create subdir: "<<omcOutDirPath ;
            bool mkgood = omcOutDir.mkdir(omcOutDirPath) ;
            if( mkgood==false ){
                qDebug()<<"make omc_out subdir failed." ;
                return 13 ;
            }
        }
        qDebug()<<"omc_out is ok:" << omcOutDirPath ;
    }



    WMapComposer mapComposer("./" , "./layout_res/") ;

    while(true){

        cout<<mapComposer.getMethodAPIs()<<endl ;

        cout<<"method:"<<endl ;
        string method ;
        cin>>method ;
        cout<<"jsondata:"<<endl ;


        QTextStream textStream(stdin) ;
        QString jsondata ;
        textStream>>jsondata ;

        cout<<"run "<<method<<endl ;
        string runerror ;
        int runcode = mapComposer.run(method,jsondata,runerror) ;
        cout<<"run return code:"<<runcode<<endl ;
        if( runcode!=0 ){
            cout<<"run error:"<<runerror<<endl ;
        }
    }


    cout<<"qt exec ... ..."<<endl ;
    a.exec() ;
    cout<<"service out."<<endl;
    return 0;
}

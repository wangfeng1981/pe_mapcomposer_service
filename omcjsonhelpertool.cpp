#include "omcjsonhelpertool.h"

OmcJsonHelperTool::OmcJsonHelperTool()
{

}


bool OmcJsonHelperTool::jsonStr2JsonObject(QString& str, QJsonObject& retObj,QString& error)
{
    QJsonParseError parseError;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(str.toUtf8(), &parseError);
    if (parseError.error != QJsonParseError::NoError)
    {
        error = "parse jsondata failed.";
        return false;
    }
    // Make sure the root is an object.
    if (!jsonDoc.isObject())
    {
        error = "root is not object.";
        return false;
    }
    retObj = jsonDoc.object();
    return true;
}


bool OmcJsonHelperTool::jsonFile2JsonObject(QString& jsonfilename, QJsonObject& retObj,QString& error)
{
    QFile file(jsonfilename);
    if( !file.open(QIODevice::ReadOnly) ){
        error=QString("failed to open ")+jsonfilename;
        return false;
    }
    QByteArray jsonData = file.readAll();
    file.close();

    QJsonParseError parseError;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData, &parseError);
    if (parseError.error != QJsonParseError::NoError)
    {
        error = "parse jsondata failed.";
        return false;
    }
    // Make sure the root is an object.
    if (!jsonDoc.isObject())
    {
        error = "root is not object.";
        return false;
    }
    retObj = jsonDoc.object();
    return true;
}

bool OmcJsonHelperTool::writeJsonObjectIntoTextfile(const QJsonObject& jobj,QString filename,QString& error)
{
    QJsonDocument document;
    document.setObject( jobj );
    QByteArray bytes = document.toJson( QJsonDocument::Indented );
    QFile file( filename );
    if( file.open( QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate ) )
    {
       QTextStream iStream( &file );
       iStream.setCodec( "utf-8" );
       iStream << bytes;
       file.close();
       return true;
    }
    else
    {
       error=QString("failed to open for writing, ") + filename ;
       return false;
    }
}


bool OmcJsonHelperTool::removeFilesFromFlistFile(QString flistFilename,QString& error)
{
    QFile flistFile(flistFilename) ;
    if(flistFile.exists()==false) return true;
    int nbad=0;
    if( flistFile.open(QIODevice::ReadOnly) ){
        QTextStream ts(&flistFile) ;
        QString text = ts.readAll();
        flistFile.close();
        QStringList flist = text.split(",");
        for(int i = 0;i<flist.length();++i ){
            if( flist.at(i).length()>0 ){
                QFile tfile1(flist.at(i)) ;
                if(tfile1.exists()){
                    bool rmok = tfile1.remove();
                    if(rmok==false) ++nbad;
                }
            }
        }
        if(nbad==0) return true;
        else{
            error = QString("bad remove ") + QString::number(nbad);
            return false;
        }
        return true;
    }else{
        error = "failed to open flist file." ;
        return false;
    }
}

bool OmcJsonHelperTool::writeFilesIntoFlistFile(QStringList& filenameList, QString flistFilename,QString& error)
{
    QFile flistFile(flistFilename) ;
    if( flistFile.open(QIODevice::WriteOnly) ){
        for(int i = 0;i<filenameList.length();++i ){
            QString  str = filenameList.at(i) +"," ;
            flistFile.write(str.toUtf8()) ;
        }
        flistFile.close();
        return true;
    }else{
        error = "failed to open flist file for write." ;
        return false;
    }
}

bool OmcJsonHelperTool::appendFileIntoFlistFile(QString filename, QString flistFilename,QString& error)
{
    QFile flistFile(flistFilename) ;
    if( flistFile.open(QIODevice::WriteOnly|QIODevice::Append) ){
        QString filename1 = filename + ",";
        flistFile.write( filename1.toUtf8() );
        flistFile.close();
        return true;
    }else{
        error = "failed to open flist file for write." ;
        return false;
    }
}

QString OmcJsonHelperTool::makeQgisFlistFilename(QString qgsfile)
{
    return qgsfile + ".flist.txt" ;
}

#include "omcjsonhelpertool.h"

OmcJsonHelperTool::OmcJsonHelperTool()
{

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

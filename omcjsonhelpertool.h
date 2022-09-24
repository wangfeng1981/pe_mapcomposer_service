#ifndef OMCJSONHELPERTOOL_H
#define OMCJSONHELPERTOOL_H

#include <QJsonObject>
#include <QFile>
#include <QJsonParseError>
#include <QJsonDocument>
#include <QTextStream>
#include <QStringList>


class OmcJsonHelperTool
{
public:
    OmcJsonHelperTool();
    static bool jsonStr2JsonObject(QString& str, QJsonObject& retObj,QString& error);
    static bool jsonFile2JsonObject(QString& jsonfilename, QJsonObject& retObj,QString& error);
    static bool writeJsonObjectIntoTextfile(const QJsonObject& jobj,QString filename,QString& error);
    static bool removeFilesFromFlistFile(QString flistFilename,QString& error) ;
    static bool writeFilesIntoFlistFile(QStringList& filenameList, QString flistFilename,QString& error) ;
    static bool appendFileIntoFlistFile(QString filename, QString flistFilename,QString& error) ;
    static QString makeQgisFlistFilename(QString qgsfile);
};

#endif // OMCJSONHELPERTOOL_H

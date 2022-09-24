#ifndef OMCJSONHELPERTOOL_H
#define OMCJSONHELPERTOOL_H

#include <QJsonObject>
#include <QFile>
#include <QJsonParseError>
#include <QJsonDocument>
#include <QTextStream>


class OmcJsonHelperTool
{
public:
    OmcJsonHelperTool();
    static bool jsonFile2JsonObject(QString& jsonfilename, QJsonObject& retObj,QString& error);
    static bool writeJsonObjectIntoTextfile(const QJsonObject& jobj,QString filename,QString& error);
};

#endif // OMCJSONHELPERTOOL_H

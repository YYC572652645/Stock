#ifndef JSONCONFIG_H
#define JSONCONFIG_H
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonArray>
#include <QFile>

#define CONFIGJSON JsonConfig::getInstance()

class JsonConfig
{
public:
    static JsonConfig *getInstance();
    JsonConfig();

    void readConfig();
    QList<QMap<QString, QString>> getMapDataList() const;

private:
    QList<QMap<QString, QString>> mapDataList;
    static JsonConfig *instance;
};

#endif // JSONCONFIG_H

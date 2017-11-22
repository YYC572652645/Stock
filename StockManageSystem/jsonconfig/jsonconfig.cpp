#include "jsonconfig.h"
#include <QDebug>

JsonConfig *JsonConfig::instance = new JsonConfig();

/************************   构造函数            ********************/
JsonConfig::JsonConfig()
{

}

/************************   单例模式            ********************/
JsonConfig *JsonConfig::getInstance()
{
    return instance;
}

/************************   读取配置            ********************/
void JsonConfig::readConfig()
{
    QFile file("config/config.json");
    if(!file.open(QIODevice::ReadOnly)) return;

    mapDataList.clear();
    QString arrayData = QString(file.readAll());

    QJsonParseError err;
    QJsonDocument jsonDom = QJsonDocument::fromJson(arrayData.toUtf8(), &err);

    if(err.error == QJsonParseError::NoError)
    {
        QJsonObject jsonObject = jsonDom.object();
        QJsonValue jsonValue = jsonObject.value(QString("urllist"));

        QJsonArray jsonArray = jsonValue.toArray();

        for(int i = 0; i < jsonArray.size(); i ++)
        {
            QMap<QString, QString>mapData;

            QJsonObject objectItem = jsonArray.at(i).toObject();
            QStringList stringList = objectItem.keys();

            for(int i = 0; i < stringList.size(); i ++)
            {
                mapData[stringList[i]] = objectItem[stringList[i]].toString();
            }

            mapDataList.append(mapData);
        }
    }
    file.close();
}

/************************   获取信息            ********************/
QList<QMap<QString, QString> > JsonConfig::getMapDataList() const
{
    return mapDataList;
}

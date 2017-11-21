#ifndef LOCALDATA_H
#define LOCALDATA_H
#include <QString>
#include <QSqlDriver>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QSqlDatabase>
#include "groupchat/config/qreadini.h"
#include "groupchat/database/databasedef.h"
#include "groupchat/database/sqllite/sqlitedatabase.h"
#include "globaldef.h"

/***************************************************************
   功能: 本地数据

   创建人:YYC

   创建时间:2017-11-15
**************************************************************/

class LocalData : public SqliteDataBase
{
public:
    LocalData();

    bool selectData(QString beginTime, QString endTime);    //查询消息记录
    bool deleteData(const MessageData &dataLocal);          //删除消息记录
    bool insertData(const MessageData &dataLocal);          //插入消息记录

    QList<MessageData> getLocalList() const;

private:

    QList<MessageData> localList;                          //消息记录数据
};

#endif // LOCALDATA_H

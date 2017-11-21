#ifndef LOGDATA_H
#define LOGDATA_H
#include<QString>
#include<QSqlDriver>
#include<QSqlRecord>
#include<QSqlQuery>
#include<QSqlDatabase>
#include "groupchat/config/qreadini.h"
#include "groupchat/database/databasedef.h"
#include "groupchat/database/mysql/mysqldatabase.h"

/***************************************************************
   功能: 数据库日志类

   创建人:YYC

   创建时间:2017-11-15
**************************************************************/

typedef struct DataLog
{
    QString userName;
    QString text;
    QString dateTime;
}DataLog;

class LogData : public MySqlDataBase
{
public:
    LogData();
    bool selectData(QString beginTime, QString endTime); //查询消息记录
    bool selectData(QString chatText);                   //查询消息记录
    QList<DataLog> getLogList() const;                   //获取消息列表
    void changeLogeList(int index);                      //改变数据列表

private:
    QList<DataLog> logList;                              //消息记录数据
};

#endif // SQLLOG_H

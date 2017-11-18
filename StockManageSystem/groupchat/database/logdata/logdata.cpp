#include "logdata.h"
#include "globaldef.h"
#include "groupchat/database/databasedef.h"

/**********************    构造函数         *************************/
LogData::LogData()
{
    if(!this->mysqlDataCnn())
    {
        qDebug()<<"连接数据库失败";
    }
}

/**********************    聊天记录查询     *************************/
bool LogData::selectData(QString beginTime, QString endTime)
{
    if(!mysqlDb.isOpen()) mysqlDb.open();

    logList.clear();

    QSqlQuery query;

    QString str;

    str = QString("select * from chatlog where time between '%1' and '%2'").arg(beginTime).arg(endTime);

    bool success = query.exec(str);

    if(!success) return false;

    while(query.next())        //挨个遍历数据
    {
        DataLog dataLog;

        dataLog.userName = query.value(DATABASEDEF::CHATUSERNAME).toString();
        dataLog.text     = query.value(DATABASEDEF::CHATTEXT).toString();
        dataLog.dateTime = query.value(DATABASEDEF::CHATTIME).toString();

        logList.append(dataLog);
    }

    query.clear();

    mysqlDb.close();

    return true;
}

bool LogData::selectData(QString chatText)
{
    if(!mysqlDb.isOpen()) mysqlDb.open();

    logList.clear();

    QSqlQuery query;

    QString str;

    str = QString("select * from chatlog where text like '%%1%'").arg(chatText);

    bool success = query.exec(str);

    if(!success) return false;

    while(query.next())        //挨个遍历数据
    {
        DataLog dataLog;

        dataLog.userName = query.value(DATABASEDEF::CHATUSERNAME).toString();
        dataLog.text     = query.value(DATABASEDEF::CHATTEXT).toString();
        dataLog.dateTime = query.value(DATABASEDEF::CHATTIME).toString();

        logList.append(dataLog);
    }

    query.clear();

    mysqlDb.close();

    return true;
}

/**********************    获取聊天记录     *************************/
QList<DataLog> LogData::getLogList() const
{
    return logList;
}

/**********************    改变数据列表     *************************/
void LogData::changeLogeList(int index)
{
    if(index < 0 || index >= logList.size()) return;
    logList.removeAt(index);
}



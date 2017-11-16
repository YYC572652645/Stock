#include "logdata.h"
#include "globaldef.h"
#include "groupchat/database/databasedef.h"

/**********************    构造函数         *************************/
LogData::LogData()
{
    if(!this->dataCnn(GLOBALDEF::QMYSQL))
    {
        qDebug()<<"连接数据库失败";
    }
}

/**********************    聊天记录查询     *************************/
bool LogData::selectData(QString beginTime, QString endTime)
{
    if(!db.isOpen()) db.open();

    logList.clear();

    QSqlQuery query;

    QString str;

    str = QString("select * from chatlog where time between '%1' and '%2'").arg(beginTime).arg(endTime);

    bool success = query.exec(str);

    if(!success) return false;

    while(query.next())        //挨个遍历数据
    {
        DataLog dataLog;

        dataLog.userName = query.value(DATABASE::CHATUSERNAME).toString();
        dataLog.text     = query.value(DATABASE::CHATTEXT).toString();
        dataLog.dateTime = query.value(DATABASE::CHATTIME).toString();

        logList.append(dataLog);
    }

    query.clear();

    db.close();

    return true;
}

/**********************    获取聊天记录     *************************/
QList<DataLog> LogData::getLogList() const
{
    return logList;
}



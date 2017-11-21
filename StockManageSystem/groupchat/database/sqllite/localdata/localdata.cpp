#include "localdata.h"
#include "globaldef.h"

/**********************    构造函数     *************************/
LocalData::LocalData()
{
    if(!sqliteDataCnn())
    {
        qDebug()<<"连接数据库失败";
    }
}

/**********************    聊天记录查询     *************************/
bool LocalData::selectData(QString beginTime, QString endTime)
{
    if(!sqliteDb.isOpen()) sqliteDb.open();

    localList.clear();

    QString str;

    str = QString("select * from chatlog where time between '%1' and '%2'").arg(beginTime).arg(endTime);

    QSqlQuery query(NULL, sqliteDb);

    bool success = query.exec(str);

    if(!success) return false;

    while(query.next())        //挨个遍历数据
    {
        MessageData dataLocal;

        dataLocal.userName    = query.value(DATABASEDEF::LOCALUSERNAME).toString();
        dataLocal.nickName    = query.value(DATABASEDEF::LOCALNICKNAME).toString();
        dataLocal.font        = query.value(DATABASEDEF::LOCALFONT).toString();
        dataLocal.fontSize    = query.value(DATABASEDEF::LOCALFONTSIZE).toString();
        dataLocal.fontColor   = query.value(DATABASEDEF::LOCALFONTCOLOR).toString();
        dataLocal.textContent = query.value(DATABASEDEF::LOCALTEXT).toString();
        dataLocal.dateTime    = query.value(DATABASEDEF::LOCALTIME).toString();

        localList.append(dataLocal);
    }

    query.clear();

    sqliteDb.close();

    return true;
}

/**********************    删除聊天数据     *************************/
bool LocalData::deleteData(const MessageData &dataLocal)
{
    if(!sqliteDb.isOpen()) sqliteDb.open();

    QString str;

    str = "delete from chatlog where ";

    str += "username = '" + dataLocal.userName    + "' and ";

    str += "text = '"     + dataLocal.textContent + "' and ";

    str += "time = '"     + dataLocal.dateTime    + "' ;" ;

    QSqlQuery query(NULL, sqliteDb);

    bool success = query.exec(str);

    if(!success) return false;

    query.clear();

    sqliteDb.close();

    return true;
}

/**********************    插入聊天数据     *************************/
bool LocalData::insertData(const MessageData &dataLocal)
{
    if(!sqliteDb.isOpen()) sqliteDb.open();

    QString str;

    str = "insert into chatlog  values ('";

    str +=  dataLocal.userName    + "' , '";

    str +=  dataLocal.nickName    + "' , '";

    str +=  dataLocal.font        + "' , '";

    str +=  dataLocal.fontSize    + "' , '";

    str +=  dataLocal.fontColor   + "' , '";

    str +=  dataLocal.textContent + "' , '";

    str +=  dataLocal.dateTime    + "' ) ;";

    QSqlQuery query(NULL, sqliteDb);

    bool success = query.exec(str);

    if(!success) return false;

    query.clear();

    sqliteDb.close();

    return true;
}

/**********************    获取本地列表     *************************/
QList<MessageData> LocalData::getLocalList() const
{
    return localList;
}

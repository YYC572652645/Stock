#include "database.h"
#include "groupchat/config/qreadini.h"
#include "globaldef.h"
#include <QDebug>

/****************          构造函数              ***************/
DataBase::DataBase()
{   
}

/****************          连接数据库             ***************/
bool DataBase::mysqlDataCnn()
{

    mysqlDb = QSqlDatabase::addDatabase(DATACONFIG.mysqlVersion);           //设置数据库类型

    mysqlDb.setDatabaseName(DATACONFIG.dataBaseName);                       //设置数据库名
    mysqlDb.setHostName(DATACONFIG.ip);                                     //设置数据库主机名
    mysqlDb.setPort(DATACONFIG.port.toInt());                               //设置端口
    mysqlDb.setUserName(DATACONFIG.userName);                               //设置用户名
    mysqlDb.setPassword(DATACONFIG.passWord);                               //设置密码


    if(mysqlDb.isOpen()) mysqlDb.close();                                   //如果是打开状态，则关闭
    return mysqlDb.open();

}


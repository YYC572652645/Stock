#include "mysqldatabase.h"
#include "groupchat/config/qreadini.h"
#include "globaldef.h"
#include <QDebug>

/****************          构造函数              ***************/
MySqlDataBase::MySqlDataBase()
{   
}


/****************          连接数据库             ***************/
bool MySqlDataBase::mysqlDataCnn()
{
    //是否为默认连接

    if(QSqlDatabase::contains("dbMysql"))
    {
        mysqlDb = QSqlDatabase::database("dbMysql");
    }
    else
    {
        mysqlDb = QSqlDatabase::addDatabase(DATACONFIG.mysqlVersion, "dbMysql");              //设置数据库类型
    }
    mysqlDb.setHostName(DATACONFIG.ip);                                        //设置数据库主机名
    mysqlDb.setPort(DATACONFIG.port.toInt());                                  //设置端口
    mysqlDb.setDatabaseName(DATACONFIG.dataBaseName);                          //设置数据库名
    mysqlDb.setUserName(DATACONFIG.userName);                                  //设置用户名
    mysqlDb.setPassword(DATACONFIG.passWord);                                  //设置密码

    //如果数据库处于打开状态，则关闭
    if(mysqlDb.isOpen()) mysqlDb.close();

    return mysqlDb.open();
}


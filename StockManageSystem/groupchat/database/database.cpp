#include "database.h"
#include "groupchat/config/qreadini.h"
#include "globaldef.h"
#include <QDebug>

/****************          构造函数              ***************/
DataBase::DataBase()
{   
}

/****************          连接数据库             ***************/
bool DataBase::dataCnn(int type)
{
    //是否为默认连接
    if(QSqlDatabase::contains("qt_sql_default_connection"))
    {
        db = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        if(type == GLOBALDEF::QMYSQL)
        {
            db = QSqlDatabase::addDatabase(DATACONFIG.mysqlVersion);      //设置数据库类型
        }
        else
        {
            db = QSqlDatabase::addDatabase(DATACONFIG.sqliteVersion);     //设置数据库类型
        }
    }

    db.setHostName(DATACONFIG.ip);                                        //设置数据库主机名
    db.setPort(DATACONFIG.port.toInt());                                  //设置端口
    db.setDatabaseName(DATACONFIG.dataBaseName);                          //设置数据库名
    db.setUserName(DATACONFIG.userName);                                  //设置用户名
    db.setPassword(DATACONFIG.passWord);                                  //设置密码

    if(db.isOpen()) db.close();                                           //如果是打开状态，则关闭

    return db.open();
}

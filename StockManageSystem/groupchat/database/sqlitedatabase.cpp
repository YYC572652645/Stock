#include "sqlitedatabase.h"
#include "groupchat/config/qreadini.h"
#include <QDebug>

SqliteDataBase::SqliteDataBase()
{

}

bool SqliteDataBase::sqliteDataCnn()
{

    sqliteDb = QSqlDatabase::addDatabase(DATACONFIG.sqliteVersion, "dbsecond");  //设置数据库类型


    sqliteDb.setHostName(DATACONFIG.ip);                                        //设置数据库主机名
    sqliteDb.setPort(DATACONFIG.port.toInt());                                  //设置端口
    sqliteDb.setDatabaseName(DATACONFIG.dataBaseName + ".db");                  //设置数据库名
    sqliteDb.setUserName(DATACONFIG.userName);                                  //设置用户名
    sqliteDb.setPassword(DATACONFIG.passWord);                                  //设置密码
    qDebug()<<DATACONFIG.dataBaseName + ".db";

    if(sqliteDb.isOpen()) sqliteDb.close();                             //如果是打开状态，则关闭
    return sqliteDb.open();
}

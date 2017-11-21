#include "sqlitedatabase.h"
#include "groupchat/config/qreadini.h"
#include <QDebug>

SqliteDataBase::SqliteDataBase()
{

}

/****************          连接数据库             ***************/
bool SqliteDataBase::sqliteDataCnn()
{
    if(QSqlDatabase::contains("dbsqlite"))
    {
        sqliteDb = QSqlDatabase::database("dbsqlite");
    }
    else
    {
        sqliteDb = QSqlDatabase::addDatabase(DATACONFIG.sqliteVersion, "dbsqlite");         //设置数据库类型
    }

    sqliteDb.setDatabaseName(DATACONFIG.dataBaseName + ".db");                    //设置数据库名

    //如果数据库处于打开状态，则关闭
    if(sqliteDb.isOpen()) sqliteDb.close();

    return sqliteDb.open();
}

#include "sqlitedatabase.h"
#include "groupchat/config/qreadini.h"

SqliteDataBase::SqliteDataBase()
{

}

bool SqliteDataBase::sqliteDataCnn()
{

    sqliteDb = QSqlDatabase::addDatabase(DATACONFIG.sqliteVersion, "dbsecond");  //设置数据库类型

    sqliteDb.setDatabaseName(DATACONFIG.dataBaseName + ".db");          //设置数据库名

    if(sqliteDb.isOpen()) sqliteDb.close();                             //如果是打开状态，则关闭
    return sqliteDb.open();
}

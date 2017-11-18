#ifndef SQLITEDATABASE_H
#define SQLITEDATABASE_H
#include<QString>
#include<QSqlDriver>
#include<QSqlRecord>
#include<QSqlQuery>
#include<QSqlDatabase>

class SqliteDataBase
{
public:
    SqliteDataBase();

    bool sqliteDataCnn();
    QSqlDatabase sqliteDb;
};

#endif // SQLITEDATABASE_H

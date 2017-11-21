#ifndef DATABASE_H
#define DATABASE_H
#include<QString>
#include<QSqlDriver>
#include<QSqlRecord>
#include<QSqlQuery>
#include<QSqlDatabase>

/***************************************************************
   功能: 数据库主父类

   创建人: YYC

   创建时间: 2017-11-15
**************************************************************/

class MySqlDataBase
{
public:

    /************         构造函数         *************/
    MySqlDataBase();

    /************         连接数据库       *************/
    bool mysqlDataCnn();


    QSqlDatabase mysqlDb;
};

#endif // DATABASE_H

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

class DataBase
{
public:

    /************         构造函数         *************/
    DataBase();

    /************         连接数据库       *************/
    bool dataCnn(int type);

    QSqlDatabase db;

};

#endif // DATABASE_H

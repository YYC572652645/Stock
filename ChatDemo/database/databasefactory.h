#ifndef DATABASEFACTORY_H
#define DATABASEFACTORY_H
#include "database/database.h"

/***************************************************************
   功能: 数据库工厂类

   创建人:殷宇辰

   创建时间:2017-11-15
**************************************************************/

class DataBaseFactory
{
public:
    DataBaseFactory();

    /************         创建数据库         *************/
    DataBase *createDataBase(int type);
};

#endif // DATABASEFACTORY_H

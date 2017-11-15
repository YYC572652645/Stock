#include "databasefactory.h"
#include "globaldef.h"
#include "logindata/logindata.h"
#include "logdata/logdata.h"

/************         构造函数         *************/
DataBaseFactory::DataBaseFactory()
{

}

/************         创建数据库         *************/
DataBase *DataBaseFactory::createDataBase(int type)
{
    DataBase *dataBase = NULL;

    switch (type)
    {
    case GLOBALDEF::LOGINDATA: dataBase = new LoginData(); break;
    case GLOBALDEF::LOGDATA: dataBase = new LogData(); break;
    }

    return dataBase;
}

#ifndef LOGDATA_H
#define LOGDATA_H
#include "database/database.h"

/***************************************************************
   功能: 数据库日志类

   创建人:YYC

   创建时间:2017-11-15
**************************************************************/

typedef struct DataLog
{
    QString userName;
    QString text;
    QString dateTime;
}DataLog;

class LogData : public DataBase
{
public:
    LogData();

    void insrtData(DataLog data);
};

#endif // SQLLOG_H

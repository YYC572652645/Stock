#ifndef GLOBALDEF_H
#define GLOBALDEF_H
#include <QString>
#include <QDebug>
#include "client/client.h"
#include "protocol.h"


#define MSGSIZE  100
#define BUFFERSIZE 4096 * 1024

#ifndef SAFEDELETE
#define SAFEDELETE(pointer) \
{                           \
    if(pointer)             \
    {                       \
        delete pointer;     \
    }                       \
    pointer = NULL;         \
}
#endif

typedef struct MessageData
{
    QString userName;
    QString textContent;
    QString font;
    QString fontSize;
    QString fontColor;
    QString dateTime;
}MessageData;

namespace GLOBALDEF
{

enum SQLVERSION
{
    QMYSQL,
    QSQLITE,
};

enum TABLETYPE
{
    LOGINDATA,
    LOGDATA,

};

}




#endif // GLOBALDEF_H

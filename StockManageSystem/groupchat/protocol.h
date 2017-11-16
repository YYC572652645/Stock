#ifndef PROTOCOL_H
#define PROTOCOL_H


namespace Protocol
{
const static int INVALID = -1;        //无用协议

enum TCPPROTOCOL
{
    ADDSOCKETREQ    = 0,    //添加请求
    CLOSEREQ        = 1,    //关闭套接字
    SENDMESSAGEREQ  = 2,    //发送消息请求
    SENDMESSAGEINFO = 3,    //发送消息信息
    SENDBREAKHEARTREQ = 4,  //发送心跳包
    SENDBREAKHEARTINFO = 5, //接收心跳包信息
};


/***************************   好友相关   ****************************/
const static QString user         = "user";
const static QString sendContext  = "text";
const static QString font         = "font";
const static QString fontSize     = "fontSize";
const static QString fontColor    = "fontColor";
const static QString agreeFriend  = "agreeFriend";
const static QString dateTime     = "time";
}

#endif // PROTOCOL_H

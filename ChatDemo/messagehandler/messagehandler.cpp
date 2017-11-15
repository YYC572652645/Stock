#include "messagehandler.h"
#include "protocol.h"
#include <QDebug>

MessageHandler * MessageHandler::instance = NULL;

/*************************  构造函数                  *********************/
MessageHandler::MessageHandler()
{
    dataMessageList[Protocol::SENDMESSAGEINFO] = DataMessage("sendmessageinfo", &MessageHandler::receiveSendMessageInfo);
}

/*************************   根据协议号调取对应函数       *********************/
void MessageHandler::onCommand(QMap<QString, QString> &mapData, int protocolNumber)
{
    if(NULL == dataMessageList[protocolNumber].commandhandler)  return;

    if(protocolNumber != Protocol::INVALID && protocolNumber < MSGSIZE)
    {
        (this->*(dataMessageList[protocolNumber].commandhandler))(mapData);
    }
}

/*************************   接收发送信息          *********************/
void MessageHandler::receiveSendMessageInfo(QMap<QString, QString> &mapData)
{
    CHATTOGETHER->receiveData(mapData);
}



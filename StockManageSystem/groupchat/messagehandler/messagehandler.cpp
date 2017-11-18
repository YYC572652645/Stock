#include "messagehandler.h"
#include "groupchat/protocol.h"
#include <QDebug>

MessageHandler * MessageHandler::instance = NULL;

/*************************  构造函数                *********************/
MessageHandler::MessageHandler()
{
    dataMessageList[Protocol::SENDMESSAGEINFO] = DataMessage("sendmessageinfo", &MessageHandler::receiveSendMessageInfo);
    dataMessageList[Protocol::SENDBREAKHEARTINFO] = DataMessage("heartbreakinfo", &MessageHandler::receiveHeartMessageInfo);
    dataMessageList[Protocol::SENDDELCHATTEXTINFO] = DataMessage("deletechatinfo", &MessageHandler::receiveDelDataMessageInfo);
}

/*************************   根据协议号调取对应函数    *********************/
void MessageHandler::onCommand(QMap<QString, QString> &mapData, int protocolNumber)
{
    if(NULL == dataMessageList[protocolNumber].commandhandler)  return;

    if(protocolNumber != Protocol::INVALID && protocolNumber < MSGSIZE)
    {
        (this->*(dataMessageList[protocolNumber].commandhandler))(mapData);
    }
}

/*************************   接收发送信息            *********************/
void MessageHandler::receiveSendMessageInfo(QMap<QString, QString> &mapData)
{
    CHATTOGETHER->receiveData(mapData);
}

/*************************   接收心跳包              *********************/
void MessageHandler::receiveHeartMessageInfo(QMap<QString, QString> &mapData)
{
    CLIENT->heartBreakCount = 0;
}

/*************************   接收删除数据消息          *********************/
void MessageHandler::receiveDelDataMessageInfo(QMap<QString, QString> &mapData)
{
    qDebug()<<"收到了";
}

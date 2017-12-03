#include "client.h"
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonArray>
#include "globaldef.h"
#include "groupchat/protocol.h"
#include "groupchat/messagehandler/messagehandler.h"

Client * Client::instance = new Client();

/**********************    构造函数                 *************************/
Client::Client(): protocolNumber(Protocol::INVALID),heartBreakCount(0),tcpSocket(NULL)
{
    //实例化套接字对象
    tcpSocket = new QTcpSocket(this);

    //连接信号与槽
    connect(tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(displayError(QAbstractSocket::SocketError)));
    connect(tcpSocket, SIGNAL(readyRead()),this, SLOT(readData()));
}

/**********************    析构函数                 *************************/
Client::~Client()
{
    SAFEDELETE(tcpSocket);
}

/**********************    饿汉模式                 *************************/
Client *Client::getInstance()
{
    return instance;
}

/**********************    连接服务器               *************************/
void Client::connectServer()
{
    if(GLOBALDEF::myUserName.isEmpty()) return;

    tcpSocket->abort();
    tcpSocket->connectToHost(QHostAddress(GLOBALDEF::IPADDRESS), GLOBALDEF::SERVERPORT);

    QMap<QString, QString> mapData;
    this->netSend(Protocol::ADDSOCKETREQ, GLOBALDEF::myUserName, mapData);
}

/**********************    关闭连接       58         *************************/
void Client::closeSocket()
{
    if(GLOBALDEF::myUserName.isEmpty()) return;

    QMap<QString, QString> mapData;
    this->netSend(Protocol::CLOSEREQ, GLOBALDEF::myUserName, mapData);

    tcpSocket->abort();
}

/**********************    输出错误信息              *************************/
void Client::displayError(QAbstractSocket::SocketError)
{
    qDebug()<<tcpSocket->errorString();
    tcpSocket->close();
}

/**********************    读取数据                 *************************/
void Client::readData()
{
    while(tcpSocket->bytesAvailable() > 0)
    {
        QByteArray data;

        data.resize(tcpSocket->bytesAvailable());

        tcpSocket->read(data.data(), data.size());

        static QString str;
        str += data.data();

        if(!str.isEmpty())
        {
            if(this->readJson(str))
            {
                str.clear();

                if(protocolNumber == Protocol::INVALID) continue;

                MESSAGEHANDLE->onCommand(mapData, protocolNumber);
            }
        }
    }
}

/**********************    是否连接到服务器           *************************/
bool Client::isConnect() 
{
    return tcpSocket->isWritable();
}

/**********************    组合json数据，然后发送     *************************/
void Client::netSend(int protocol, QString userName, QMap<QString, QString> &mapData)
{
    QJsonObject jsonTotal;
    QJsonObject jsonData;

    jsonData.insert("protocol", QString::number(protocol));
    jsonData.insert("user", userName);
    jsonData.insert(Protocol::nickName, GLOBALDEF::myNickName);

    for(auto iter = mapData.begin(); iter != mapData.end(); ++ iter)
    {
        jsonData.insert(iter.key(), iter.value());
    }

    jsonTotal.insert("data", jsonData);

    QJsonDocument document;
    document.setObject(jsonTotal);

    QByteArray arrayData = document.toJson();

    tcpSocket->write(arrayData, arrayData.length());
}

/**********************    读取Json数据             *************************/
bool Client::readJson(QString arrayData)
{
    mapData.clear();
    protocolNumber = Protocol::INVALID;
    QJsonParseError err;
    QJsonDocument jsonDom = QJsonDocument::fromJson(arrayData.toUtf8(), &err);

    if(err.error == QJsonParseError::NoError)
    {
        QJsonObject jsonObject = jsonDom.object();
        QJsonValue jsonValue = jsonObject.value(QString("data"));

        QJsonObject objectItem = jsonValue.toObject();
        QStringList stringList = objectItem.keys();

        for(int i = 0; i < stringList.size(); i ++)
        {
            mapData[stringList[i]] = objectItem[stringList[i]].toString();
        }

        auto iter = mapData.find("protocol");

        protocolNumber = iter.value().toInt();
        mapData.remove("protocol");

        return true;
    }

    return false;
}

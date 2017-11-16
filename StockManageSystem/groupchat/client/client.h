#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QHostAddress>

/***************************************************************
   功能: 客户端，发送数据都在这里处理

   创建人:YYC

   创建时间:2017-11-15
**************************************************************/

#define CLIENT Client::getInstance()

class Client : public QObject
{
    Q_OBJECT
public:
    static Client * getInstance();                                                  //饿汉模式
    void connectServer();                                                           //连接服务器
    void closeSocket();                                                             //关闭Socket
    void netSend(int protocol, QString userName, QMap<QString, QString> &mapData);  //组合json数据，然后发送
    bool isConnect();                                                               //判断是否与服务器连接
    int heartBreakCount;                                                            //心跳次数，五次清零

public slots:
    void displayError(QAbstractSocket::SocketError); //显示错误信息
    void readData();                                 //读取数据

private:
    static Client * instance;                        //单例模式
    QTcpSocket * tcpSocket;                          //客户端套接字
    QMap<QString, QString>mapData;                   //存储接收到的JSON数据
    int protocolNumber;                              //协议号

private:
    Client();
    ~Client();
    bool readJson(QString arrayData);                //读取json数据
    void initValue();                                //初始化值

};

#endif // CLIENT_H

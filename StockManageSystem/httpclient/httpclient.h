#ifndef HTTPCLIENT_H
#define HTTPCLIENT_H
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QObject>
#include <QFile>
#include <QFileInfo>

class HttpClient : public QObject
{
    Q_OBJECT
public:
    HttpClient();                               //构造函数
    ~HttpClient();                              //析构函数

    void getUrlDownLoad(QString urlStr);        //获取get下载文件
    void postUrl(QString urlStr);               //获取post请求
    void analysisJson(QString jsonData);        //解析JSON

public slots:
    void replyFinished();                       //接收响应数据
    void httpReadyRead();                       //有可用数据
    void downLoadFinishSlot();                  //下载完成槽

signals:
    void downLoadFinishSignal();                //下载完成信号

private:
    void initValue();                           //初始化值
    int finishCount;                            //完成次数
    QFile *file;                                //文件对象
    QNetworkAccessManager *accessManger;        //网络类
    QNetworkReply *netWorkReplay;               //网络类
};

#endif // HTTPCLIENT_H

#include "httpclient.h"

/*********************     构造函数      *******************/
HttpClient::HttpClient() :accessManger(NULL), netWorkReplay(NULL), file(NULL)
{
    this->initValue();

    this->getUrl("http://127.0.0.1:9090/YunNiuProject.rar");
}

/*********************     初始化数据      *******************/
void HttpClient::initValue()
{
    accessManger = new QNetworkAccessManager();
    file = new QFile();
}

/*********************     接收响应数据      *******************/
void HttpClient::replyFinished()
{
    file->flush();
    file->close();
    netWorkReplay->close();
    netWorkReplay->deleteLater();
}

/*********************     接收响应数据      *******************/
void HttpClient::httpReadyRead()
{
    if(NULL != file)
    {
        file->write(netWorkReplay->readAll());
    }
}

/*********************     get请求      *******************/
void HttpClient::getUrlDownLoad(QString urlStr)
{
    QFileInfo info(QUrl(urlStr).path());
    QString fileName(info.fileName());

    file->setFileName(fileName);

    if(!file->open(QIODevice::WriteOnly))
    {
       return;
    }

    QNetworkRequest request;

    request.setUrl(QUrl(urlStr));

    netWorkReplay = accessManger->get(request);

    connect(netWorkReplay, SIGNAL(readyRead()), this, SLOT(httpReadyRead()));
    connect(netWorkReplay,SIGNAL(finished()), this,SLOT(replyFinished()));
}

/*********************     post请求      *******************/
void HttpClient::postUrl(QString urlStr)
{

}

/*********************     解析JSON      *******************/
void HttpClient::analysisJson(QString jsonData)
{

}

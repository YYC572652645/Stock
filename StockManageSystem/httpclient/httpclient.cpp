#include "httpclient.h"
#include "jsonconfig/jsonconfig.h"
#include "globaldef.h"
#include <windows.h>

/*********************     构造函数      *******************/
HttpClient::HttpClient() :accessManger(NULL), netWorkReplay(NULL), file(NULL), finishCount(0)
{
    this->initValue();
}

/*********************     析构函数      *******************/
HttpClient::~HttpClient()
{
    SAFEDELETE(accessManger);
    SAFEDELETE(file);
}

/*********************     初始化数据      *******************/
void HttpClient::initValue()
{
    accessManger = new QNetworkAccessManager();
    file = new QFile();

    connect(this, SIGNAL(downLoadFinishSignal()), this, SLOT(downLoadFinishSlot()));

    this->getUrlDownLoad(GLOBALDEF::CONFIGURL);
}

/*********************     接收响应数据      *******************/
void HttpClient::replyFinished()
{
    file->flush();
    file->close();
    netWorkReplay->close();
    netWorkReplay->deleteLater();

    emit downLoadFinishSignal();
}

/*********************     接收响应数据      *******************/
void HttpClient::httpReadyRead()
{
    if(NULL != file)
    {
        file->write(netWorkReplay->readAll());
    }
}

/*********************     下载完成槽      *******************/
void HttpClient::downLoadFinishSlot()
{
    if(0 == finishCount) CONFIGJSON->readConfig();
    if(finishCount < 0 || finishCount >= CONFIGJSON->getMapDataList().size()) return;

    this->getUrlDownLoad(CONFIGJSON->getMapDataList().at(finishCount).value(GLOBALDEF::IMAGEURL));

    finishCount ++;
}

/*********************     get请求      *******************/
void HttpClient::getUrlDownLoad(QString urlStr)
{
    QFileInfo info(QUrl(urlStr).path());
    QString fileName = "config\\" + info.fileName();

    file->setFileName(fileName);

    if(!file->open(QIODevice::WriteOnly)) return;

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

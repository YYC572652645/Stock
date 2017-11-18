#ifndef CHATDEMO_H
#define CHATDEMO_H

#include <QWidget>
#include "titlebar/titlebar.h"
#include "groupchat/database/database.h"
#include <QResizeEvent>
#include <QKeyEvent>
#include "groupchat/chatlog/chatlog.h"
#include <QTimer>
#include "groupchat/logmanage/logmanage.h"
#include "groupchat/database/localdata/localdata.h"

/***************************************************************
   功能: 聊天类

   创建人:YYC

   创建时间:2017-11-15
**************************************************************/

#define CHATTOGETHER ChatTogether::getInstance()

namespace Ui {
class chatdemo;
}

class ChatTogether : public QWidget
{
    Q_OBJECT

public:
    explicit ChatTogether(QWidget *parent = 0);
    ~ChatTogether();

    static ChatTogether * getInstance();                               //单例模式
    void receiveData(const QMap<QString, QString> &mapData);           //接收数据
    void clearIllegalData(const QMap<QString, QString> &mapData);      //清除不合法信息

    void initConn();                                                   //进行连接
    void showWidget();                                                 //显示窗体
signals:
    void sendNetStatus(int);

private slots:
    void on_pushButtonColor_clicked();                                 //改变颜色
    void on_comboBoxSize_currentIndexChanged(const QString &arg1);     //改变大小
    void on_fontComboBoxFont_currentIndexChanged(const QString &arg1); //改变字体
    void on_pushButtonSend_clicked();                                  //发送数据
    void updateTimer();                                                //定时器槽函数
    void on_pushButtonChatLog_clicked();                               //查看聊天记录
    void on_pushButtonManage_clicked();                                //聊天管理

private:
    Ui::chatdemo *ui;
    static ChatTogether *instance;                                     //单例模式
    TitleBar *titleBar;                                                //标题栏
    ChatLog *chatLog;                                                  //聊天记录
    QTimer *timer;                                                     //定时器
    LogManage *logManage;                                              //聊天管理
    LocalData *localData;                                              //本地数据
    QColor fontColor;                                                  //字体颜色

    void initControl();                                                //初始化控件
    void setTextEdit();                                                //设置文本框
    void setUpText(const MessageData &messageData);                    //设置文本
    void resizeEvent(QResizeEvent *event);                             //界面更改事件
};

#endif // CHATDEMO_H

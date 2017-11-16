#ifndef CHATLOG_H
#define CHATLOG_H

#include <QWidget>
#include "titlebar/titlebar.h"
#include "groupchat/database/logdata/logdata.h"

/***************************************************************
   功能: 查询聊天记录

   创建人:YYC

   创建时间:2017-11-16
**************************************************************/

namespace Ui {
class chatlog;
}

class ChatLog : public QWidget
{
    Q_OBJECT

public:
    explicit ChatLog(QWidget *parent = 0);
    ~ChatLog();

    void showWidget();                      //显示窗口

private slots:
    void on_pushButtonSelect_clicked();     //查询记录

private:
    Ui::chatlog *ui;
    TitleBar *titleBar;                     //标题栏
    LogData *logData;                       //数据库对象

    void initControl();                     //初始化控件
    void resizeEvent(QResizeEvent *event);  //界面改动事件
};

#endif // CHATLOG_H

#ifndef LOGMANAGE_H
#define LOGMANAGE_H

#include <QWidget>
#include "titlebar/titlebar.h"
#include "groupchat/database/logdata/logdata.h"

namespace Ui {
class logmanage;
}

class LogManage : public QWidget
{
    Q_OBJECT

public:
    explicit LogManage(QWidget *parent = 0);
    ~LogManage();
    void showWidget();                      //显示窗口
private slots:
    void on_pushButtonSelect_clicked();     //查询记录
    void on_pushButtonDelete_clicked();     //删除记录

private:
    Ui::logmanage *ui;
    TitleBar *titleBar;                     //标题栏
    LogData *logData;                       //数据库对象

    void initControl();                     //初始化控件
    void resizeEvent(QResizeEvent *event);  //界面改动事件
};

#endif // LOGMANAGE_H

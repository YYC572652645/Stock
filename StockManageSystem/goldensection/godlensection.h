#ifndef GODLENSECTION_H
#define GODLENSECTION_H

#include <QWidget>
#include "titlebar/titlebar.h"
#include <QResizeEvent>

namespace Ui {
class godlensection;
}

class GodlenSection : public QWidget
{
    Q_OBJECT

public:
    explicit GodlenSection(QWidget *parent = 0);  //构造函数
    ~GodlenSection();                             //析构函数
    void showWidget();                            //显示窗体

private:
    Ui::godlensection *ui;
    TitleBar *titleBar ;                          //标题栏

    void initControl();                           //初始化控件
    void resizeEvent(QResizeEvent *event);        //界面改变事件
};

#endif // GODLENSECTION_H

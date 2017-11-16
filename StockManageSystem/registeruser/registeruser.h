#ifndef REGISTERUSER_H
#define REGISTERUSER_H

#include <QWidget>
#include <QResizeEvent>
#include "titlebar/titlebar.h"
#include "groupchat/database/logindata/logindata.h"

namespace Ui {
class registeruser;
}

class RegisterUser : public QWidget
{
    Q_OBJECT

public:
    explicit RegisterUser(QWidget *parent = 0);
    ~RegisterUser();

private slots:
    void on_pushButtonOk_clicked();

private:
    Ui::registeruser *ui;

    TitleBar *titleBar ;                    //标题栏
    LoginData *loginData;                   //登录数据库对象

    void initControl();                     //初始化控件
    void resizeEvent(QResizeEvent *event);  //界面改变事件
};

#endif // REGISTERUSER_H

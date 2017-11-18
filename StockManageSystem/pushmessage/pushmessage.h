#ifndef PUSHMESSAGE_H
#define PUSHMESSAGE_H

#include <QWidget>
#include <QDesktopWidget>
#include <QResizeEvent>
#include "titlebar/titlebar.h"
#include <QTimer>

namespace Ui {
class pushmessage;
}

class PushMessage : public QWidget
{
    Q_OBJECT

public:
    explicit PushMessage(QWidget *parent = 0);
    ~PushMessage();
    void showWidget();

private slots:
    void updateTimer();
private:
    Ui::pushmessage *ui;
    TitleBar *titleBar;
    QTimer *timer;
    QPoint normalPoint;
    QRect deskRect;

    void initControl();                         //初始化控件
    void resizeEvent(QResizeEvent *event);      //界面更改事件
};

#endif // PUSHMESSAGE_H

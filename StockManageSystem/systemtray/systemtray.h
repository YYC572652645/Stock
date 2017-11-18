#ifndef SYSTEMTRAY_H
#define SYSTEMTRAY_H

#include<QSystemTrayIcon>
#include<QAction>
#include<QApplication>
#include<QMenu>
#include<QWidget>
#include<QObject>

/***************************************************************
   功能:系统托盘

   创建人:殷宇辰

   创建时间:2017-11-11
**************************************************************/

class SystemTray : public QSystemTrayIcon
{
    Q_OBJECT
public:
    explicit SystemTray(QWidget * parent = 0);
    ~SystemTray();

    void addAction();    //添加菜单
    void createAction(); //创建菜单

public:
    QMenu *myMenu;                    //托盘菜单
    QAction* exitSoftWare;            //退出软件
 signals:
    void showMainWindow();
    void showAboutUs();
};

#endif // SYSTEMTRAY_H


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QResizeEvent>
#include <QTimer>
#include <QMovie>
#include <QVBoxLayout>
#include "systemtray/systemtray.h"
#include "titlebar/titlebar.h"
#include "maincontent/maincontent.h"
#include <QNetworkConfigurationManager>

/*************************************************

功能：主窗口
作者: YYC
时间：2017-11-10

*************************************************/

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void receiveStatus(QString nickName);
    void receiveNetStatus(int type);
    void receiveLoginOut();

private:
    Ui::MainWindow *ui;
    TitleBar *titleBar;
    MainContent *mainContend;
    QMovie  *movie;
    QTimer  *timer;
    SystemTray *systemTray;
    QPushButton *userMsgButton;
    QPushButton *netMsgButton;

    void initControl();
    void initConnect();
    void resizeEvent(QResizeEvent *event);
    bool isNetWorkOnline();
};

#endif // MAINWINDOW_H

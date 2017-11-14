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

private:
    Ui::MainWindow *ui;
    TitleBar *titleBar;
    MainContent *mainContend;
    QMovie  *movie;
    QTimer  *timer;
    SystemTray *systemTray;

    void initControl();
    void resizeEvent(QResizeEvent *event);
};

#endif // MAINWINDOW_H

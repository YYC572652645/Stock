#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "globaldef.h"

/************************   构造函数              ************************/
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
  ,ui(new Ui::MainWindow)
  ,titleBar(NULL)
  ,mainContend(NULL)
  ,movie(NULL)
  ,timer(NULL)
  ,systemTray(NULL)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    this->initControl();
}

/************************   析构函数              ************************/
MainWindow::~MainWindow()
{
    delete ui;
}

/************************   初始化控件              ************************/
void MainWindow::initControl()
{
    titleBar = new TitleBar(this);
    mainContend = new MainContent(this);
    timer = new QTimer(this);
    movie = new QMovie(GLOBALDEF::LINKIMAGE);
    systemTray = new SystemTray(this);

    titleBar->setIcon(GLOBALDEF::LOGOIMG);
    titleBar->setTitle(GLOBALDEF::APPNAME);

    ui->labelImage->setMovie(movie);
    movie->start();

    timer->start(GLOBALDEF::REFRESHTIME);

    ui->labelImage->setScaledContents(true);

    //添加界面
    QVBoxLayout *vBoxLayout = new QVBoxLayout(this);
    vBoxLayout->addWidget(mainContend);
    ui->widgetMainContent->setLayout(vBoxLayout);

    this->setWindowTitle(GLOBALDEF::APPNAME);
}

/************************   改变事件              ************************/
void MainWindow::resizeEvent(QResizeEvent *event)
{
    titleBar->resize(this->width(), TitleBar::TITLEBARHEIGHT);
}

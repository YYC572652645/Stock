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
  ,userMsgButton(NULL)
  ,netMsgButton(NULL)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    this->initControl();
    this->initConnect();
}

/************************   析构函数              ************************/
MainWindow::~MainWindow()
{
    delete ui;
}

/************************   接收登录状态              ************************/
void MainWindow::receiveStatus(QString nickName)
{
    userMsgButton->setText(nickName + GLOBALDEF::USERLOGINSTATUS);
    userMsgButton->setIcon(QIcon(GLOBALDEF::USERLOGINIMG));
}

/************************   接收网络状态              ************************/
void MainWindow::receiveNetStatus(int type)
{
    if(type == GLOBALDEF::NETCONNSUCCESS)
    {
        netMsgButton->setText(MESSAGEINFO::NETCONNSUCCESS);
        netMsgButton->setIcon(QIcon(GLOBALDEF::USERLOGINIMG));
    }
    else
    {
        netMsgButton->setText(MESSAGEINFO::NETCONNFAILED);
        netMsgButton->setIcon(QIcon(GLOBALDEF::LOGINFAILIMG));
    }
}

/************************   初始化控件              ************************/
void MainWindow::initControl()
{
    //实例化对象
    titleBar = new TitleBar(this);
    mainContend = new MainContent(this);
    timer = new QTimer(this);
    systemTray = new SystemTray(this);
    userMsgButton = new QPushButton(this);
    netMsgButton = new QPushButton(this);

    //初始化登录状态
    userMsgButton->setText(MESSAGEINFO::NOTLOGIN);
    userMsgButton->setIcon(QIcon(GLOBALDEF::LOGINFAILIMG));
    userMsgButton->setStyleSheet("background-color:transparent");

    //判断当前状态是否联网
    if(isNetWorkOnline())
    {
        netMsgButton->setText(MESSAGEINFO::NETCONNSUCCESS);
        netMsgButton->setIcon(QIcon(GLOBALDEF::USERLOGINIMG));
        netMsgButton->setStyleSheet("background-color:transparent");
    }
    else
    {
        netMsgButton->setText(MESSAGEINFO::NETCONNFAILED);
        netMsgButton->setIcon(QIcon(GLOBALDEF::LOGINFAILIMG));
    }

    //添加Widget
    ui->statusBar->addWidget(userMsgButton);
    ui->statusBar->addPermanentWidget(netMsgButton);

    //添加图标和标题
    titleBar->setIcon(GLOBALDEF::LOGOIMG);
    titleBar->setTitle(GLOBALDEF::APPNAME);

    //设置Gif动画
    movie = new QMovie(GLOBALDEF::LINKIMAGE);
    ui->labelImage->setMovie(movie);
    movie->start();

    timer->start(GLOBALDEF::REFRESHTIME);
    ui->labelImage->setScaledContents(true);

    //添加界面
    QVBoxLayout *vBoxLayout = new QVBoxLayout(this);
    vBoxLayout->addWidget(mainContend);
    ui->widgetMainContent->setLayout(vBoxLayout);

    this->setWindowTitle(GLOBALDEF::APPNAME);

    //初始化信号与槽
    connect(mainContend, SIGNAL(sendNetStatus(int)), this, SLOT(receiveNetStatus(int)));
}

/************************   初始化信号与槽              ************************/
void MainWindow::initConnect()
{
    connect(mainContend, SIGNAL(sendLoginStatus(QString)), this ,SLOT(receiveStatus(QString)));
}

/************************   改变事件              ************************/
void MainWindow::resizeEvent(QResizeEvent *event)
{
    titleBar->resize(this->width(), titleBar->getTitleBarHeight());
}

/************************   判断是否联网              ************************/
bool MainWindow::isNetWorkOnline()
{
    QNetworkConfigurationManager mgr;
    return mgr.isOnline();
}

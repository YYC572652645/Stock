#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "globaldef.h"

/************************   构造函数              ************************/
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
  ,ui(new Ui::MainWindow)
  ,mainContend(NULL)
  ,movie(NULL)
  ,timer(NULL)
  ,systemTray(NULL)
  ,userMsgButton(NULL)
  ,netMsgButton(NULL)
{
    ui->setupUi(this);

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

/************************   退出登录              ************************/
void MainWindow::receiveLoginOut()
{
    userMsgButton->setText(MESSAGEINFO::NOTLOGIN);
    userMsgButton->setIcon(QIcon(GLOBALDEF::LOGINFAILIMG));
}

/************************   初始化控件              ************************/
void MainWindow::initControl()
{
    //实例化对象
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

    //设置Gif动画
    movie = new QMovie(GLOBALDEF::LINKIMAGE);
    ui->labelImage->setMovie(movie);
    movie->start();

    timer->start(GLOBALDEF::REFRESHTIME);
    ui->labelImage->setScaledContents(true);

    //添加界面
    QVBoxLayout *vBoxLayout = new QVBoxLayout(ui->widgetMainContent);
    vBoxLayout->addWidget(mainContend);
    ui->widgetMainContent->setLayout(vBoxLayout);
    vBoxLayout->setContentsMargins(0,0,0,0);
    ui->widgetMainContent->setContentsMargins(0,0,0,0);

    this->setWindowTitle(GLOBALDEF::APPNAME);

    //初始化信号与槽
    connect(mainContend, SIGNAL(sendNetStatus(int)), this, SLOT(receiveNetStatus(int)));
    connect(mainContend, SIGNAL(sendNetStatus(int)), this, SLOT(receiveNetStatus(int)));
}

/************************   初始化信号与槽              ************************/
void MainWindow::initConnect()
{
    connect(mainContend, SIGNAL(sendLoginStatus(QString)), this ,SLOT(receiveStatus(QString)));
}

/************************   判断是否联网              ************************/
bool MainWindow::isNetWorkOnline()
{
    QNetworkConfigurationManager mgr;
    return mgr.isOnline();
}

#include "systemtray.h"
#include "globaldef.h"
#include <QDebug>
#include <QIcon>

SystemTray::SystemTray(QWidget * parent)
    :QSystemTrayIcon(parent)
    ,myMenu(NULL)
    ,exitSoftWare(NULL)
{
    this->createAction();  //创建托盘菜单
    this->addAction();     //菜单添加事件

}

SystemTray::~SystemTray()
{
    SAFEDELETE(myMenu);
    SAFEDELETE(exitSoftWare);
}

void SystemTray::addAction()
{
    myMenu->addAction(exitSoftWare);
}

void SystemTray::createAction()
{
    myMenu = new QMenu();                                  //托盘菜单
    exitSoftWare = new QAction(tr("退出软件 "), this);           //退出软件

    this->setIcon(QIcon(GLOBALDEF::LOGOIMG));
    this->setToolTip(tr("股票分析"));

    connect(exitSoftWare, SIGNAL(triggered(bool)), qApp, SLOT(quit())); //退出软件

    this->setContextMenu(myMenu);

    this->show();
}


#include "registeruser.h"
#include "ui_registeruser.h"
#include "globaldef.h"

RegisterUser::RegisterUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registeruser)
{
    ui->setupUi(this);
    this->initControl();
}

RegisterUser::~RegisterUser()
{
    delete ui;
}

void RegisterUser::initControl()
{
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    titleBar = new TitleBar(this);

    titleBar->setTitle(GLOBALDEF::REGISTERUSER);
    titleBar->setIcon(GLOBALDEF::LOGOIMG);

    titleBar->subButton(TITLEBAR::MAXMINWIDGET);

    this->setWindowFlags(Qt::CoverWindow | Qt::FramelessWindowHint);
}

/************************   改变事件              ************************/
void RegisterUser::resizeEvent(QResizeEvent *event)
{
    titleBar->resize(this->width(), TitleBar::TITLEBARHEIGHT);
}

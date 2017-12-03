#include "godlensection.h"
#include "ui_godlensection.h"
#include "globaldef.h"


/************************   构造函数              ************************/
GodlenSection::GodlenSection(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::godlensection)
{
    ui->setupUi(this);

    this->initControl();
}


/************************   析构函数              ************************/
GodlenSection::~GodlenSection()
{
    delete ui;
}


/************************   初始化控件              ************************/
void GodlenSection::initControl()
{
    titleBar = new TitleBar(this);

    titleBar->setTitle(GLOBALDEF::GOLDENSECTION);
    titleBar->setIcon(GLOBALDEF::LOGOIMG);

    titleBar->subButton(TITLEBAR::MAXMINWIDGET);
    this->setWindowModality(Qt::ApplicationModal);
    this->setWindowFlags(Qt::CoverWindow | Qt::FramelessWindowHint);
}

/************************   显示窗体              ************************/
void GodlenSection::showWidget()
{
    this->show();
}

/************************   改变事件              ************************/
void GodlenSection::resizeEvent(QResizeEvent *event)
{
    titleBar->resize(this->width(), titleBar->getTitleBarHeight());
}

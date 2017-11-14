#include "godlensection.h"
#include "ui_godlensection.h"
#include "globaldef.h"

GodlenSection::GodlenSection(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::godlensection)
{
    ui->setupUi(this);

    this->initControl();
}

GodlenSection::~GodlenSection()
{
    delete ui;
}

void GodlenSection::initControl()
{
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    titleBar = new TitleBar(this);

    titleBar->setTitle(GLOBALDEF::GOLDENSECTION);
    titleBar->setIcon(GLOBALDEF::LOGOIMG);

    titleBar->subButton(TITLEBAR::MAXMINWIDGET);

    this->setWindowFlags(Qt::CoverWindow | Qt::FramelessWindowHint);
}

/************************   改变事件              ************************/
void GodlenSection::resizeEvent(QResizeEvent *event)
{
    titleBar->resize(this->width(), TitleBar::TITLEBARHEIGHT);
}

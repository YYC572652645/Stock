#include "uvslsplic.h"
#include "ui_uvslsplic.h"

UvslSplic::UvslSplic(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::uvslsplic)
{
    ui->setupUi(this);

    this->initControl();

}

UvslSplic::~UvslSplic()
{
    delete ui;
}


void UvslSplic::initControl()
{
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    titleBar = new TitleBar(this);

    titleBar->setTitle(GLOBALDEF::UNIVERSALSPLIC);
    titleBar->setIcon(GLOBALDEF::LOGOIMG);

    titleBar->subButton(TITLEBAR::MAXMINWIDGET);

    this->setWindowFlags(Qt::CoverWindow | Qt::FramelessWindowHint);
}

/************************   改变事件              ************************/
void UvslSplic::resizeEvent(QResizeEvent *event)
{
    titleBar->resize(this->width(), TitleBar::TITLEBARHEIGHT);
}

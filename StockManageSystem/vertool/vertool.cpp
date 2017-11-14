#include "vertool.h"
#include "ui_vertool.h"
#include "globaldef.h"

VerTool::VerTool(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::vertool)
{
    ui->setupUi(this);

    this->initControl();
}

VerTool::~VerTool()
{
    delete ui;
}

void VerTool::initControl()
{
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    titleBar = new TitleBar(this);

    titleBar->setTitle(GLOBALDEF::VERTOOL);
    titleBar->setIcon(GLOBALDEF::LOGOIMG);

    titleBar->subButton(TITLEBAR::MAXMINWIDGET);

    this->setWindowFlags(Qt::CoverWindow | Qt::FramelessWindowHint);
}

/************************   改变事件              ************************/
void VerTool::resizeEvent(QResizeEvent *event)
{
    titleBar->resize(this->width(), TitleBar::TITLEBARHEIGHT);
}

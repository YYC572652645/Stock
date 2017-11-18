#include "pushmessage.h"
#include "ui_pushmessage.h"
#include "globaldef.h"

PushMessage::PushMessage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pushmessage)
  ,titleBar(NULL)
  ,timer(NULL)
{
    ui->setupUi(this);

    this->initControl();
}

PushMessage::~PushMessage()
{
    delete ui;
}

void PushMessage::showWidget()
{
    deskRect = QApplication::desktop()->availableGeometry();

    normalPoint.setX(deskRect.width() -  rect().width());

    normalPoint.setY(deskRect.height());

    this->move(normalPoint);

    this->show();

    timer->start();
}

/************************   界面改变事件            ************************/
void PushMessage::updateTimer()
{
    if(normalPoint.y() <= deskRect.height() -  rect().height())
    {
        timer->stop();

        return;
    }

    normalPoint = QPoint(normalPoint.x(), normalPoint.y() - GLOBALDEF::MOVEPOINT);

    this->move(normalPoint);
}

/************************   初始化控件            ************************/
void PushMessage::initControl()
{
    timer = new QTimer(this);
    timer->setInterval(GLOBALDEF::WIDGETINTERNAL);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTimer()));

    titleBar = new TitleBar(this);
    titleBar->setTitle(GLOBALDEF::APPNAME);
    titleBar->setIcon(GLOBALDEF::LOGOIMG);
    titleBar->subButton(TITLEBAR::MAXMINWIDGET);
    titleBar->setTitleBarHeight(35);

    ui->labelContent->setScaledContents(true);

    this->setWindowFlags(Qt::CoverWindow | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
}

/************************   界面改变事件            ************************/
void PushMessage::resizeEvent(QResizeEvent *event)
{
    titleBar->resize(this->width(), titleBar->getTitleBarHeight());
}

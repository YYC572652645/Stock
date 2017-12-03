#include "chatlog.h"
#include "ui_chatlog.h"

/************************   构造函数            ************************/
ChatLog::ChatLog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chatlog)
{
    ui->setupUi(this);

    this->initControl();
}

/************************   析构函数            ************************/
ChatLog::~ChatLog()
{
    delete ui;
    SAFEDELETE(logData);
}

/************************   显示窗口            ************************/
void ChatLog::showWidget()
{
    QString currentTime = QDateTime::currentDateTime().toString(GLOBALDEF::BEGINTIMEFORMAT);
    ui->dateTimeEditBeginTime->setDateTime(QDateTime::fromString(currentTime, GLOBALDEF::BEGINTIMEFORMAT));
    ui->dateTimeEditEndTime->setDateTime(QDateTime::currentDateTime());

    this->show();
}

/************************   初始化控件           ************************/
void ChatLog::initControl()
{
    titleBar = new TitleBar(this);
    logData = new LogData();

    ui->dateTimeEditBeginTime->setCalendarPopup(true);
    ui->dateTimeEditEndTime->setCalendarPopup(true);

    titleBar->setIcon(GLOBALDEF::LOGOIMG);
    titleBar->setTitle(GLOBALDEF::GROUPCHAT);

    titleBar->subButton(TITLEBAR::MAXMINWIDGET);
    this->setWindowModality(Qt::ApplicationModal);
    this->setWindowFlags(Qt::CoverWindow | Qt::FramelessWindowHint);
}

/**********************    聊天记录查询           *************************/
void ChatLog::on_pushButtonSelect_clicked()
{
    ui->textBrowserLog->clear();

    QString beginTime = ui->dateTimeEditBeginTime->dateTime().toString(GLOBALDEF::TIMEFORMAT);
    QString endTime = ui->dateTimeEditEndTime->dateTime().toString(GLOBALDEF::TIMEFORMAT);

    logData->selectData(beginTime, endTime);

    for(int i = 0; i < logData->getLogList().size(); i ++)
    {
        ui->textBrowserLog->setTextColor(Qt::blue);
        ui->textBrowserLog->setCurrentFont(QFont(GLOBALDEF::FONTNAME, GLOBALDEF::BIGFONTSIZE, true));
        ui->textBrowserLog->append(" [" + logData->getLogList().at(i).userName + "]   " + logData->getLogList().at(i).dateTime);

        ui->textBrowserLog->setTextColor(Qt::black);
        ui->textBrowserLog->setCurrentFont(QFont(GLOBALDEF::FONTNAME, GLOBALDEF::SMALLFONTSIZE, true));
        ui->textBrowserLog->append(logData->getLogList().at(i).text);
    }

}

/************************   改变事件             ************************/
void ChatLog::resizeEvent(QResizeEvent *event)
{
    titleBar->resize(this->width(), titleBar->getTitleBarHeight());
}

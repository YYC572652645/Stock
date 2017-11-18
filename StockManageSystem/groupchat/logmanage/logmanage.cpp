#include "logmanage.h"
#include "ui_logmanage.h"
#include "groupchat/database/databasedef.h"

LogManage::LogManage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::logmanage)
{
    ui->setupUi(this);

    this->initControl();
}

LogManage::~LogManage()
{
    delete ui;
}

/************************   显示窗口            ************************/
void LogManage::showWidget()
{
    QString currentTime = QDateTime::currentDateTime().toString(GLOBALDEF::BEGINTIMEFORMAT);
    ui->dateTimeEditBeginTime->setDateTime(QDateTime::fromString(currentTime, GLOBALDEF::BEGINTIMEFORMAT));
    ui->dateTimeEditEndTime->setDateTime(QDateTime::currentDateTime());

    this->show();
}

/************************   初始化控件           ************************/
void LogManage::initControl()
{
    titleBar = new TitleBar(this);
    logData = new LogData();

    ui->dateTimeEditBeginTime->setCalendarPopup(true);
    ui->dateTimeEditEndTime->setCalendarPopup(true);

    titleBar->setIcon(GLOBALDEF::LOGOIMG);
    titleBar->setTitle(GLOBALDEF::LOGMANAGE);

    titleBar->subButton(TITLEBAR::MAXMINWIDGET);

    this->setWindowFlags(Qt::CoverWindow | Qt::FramelessWindowHint);

    //设置单行选中
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setAlternatingRowColors(true);

    //纵向隐藏序号
    ui->tableWidget->verticalHeader()->setHidden(true);

    //设置为不可编辑
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //设置表头点击禁止塌陷
    ui->tableWidget->horizontalHeader()->setHighlightSections(false);

    //设置点击表头排序
    ui->tableWidget->setSortingEnabled(true);

    //等宽显示
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    //设置单行选中
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
}

/**********************    聊天记录查询           *************************/
void LogManage::on_pushButtonSelect_clicked()
{
    if(ui->comboBox->currentIndex() == 0)
    {
        QString beginTime = ui->dateTimeEditBeginTime->dateTime().toString(GLOBALDEF::TIMEFORMAT);
        QString endTime = ui->dateTimeEditEndTime->dateTime().toString(GLOBALDEF::TIMEFORMAT);

        logData->selectData(beginTime, endTime);
    }
    else
    {
        logData->selectData(ui->lineEditText->text());
    }

    ui->tableWidget->setRowCount(logData->getLogList().size());

    for(int i = 0; i < logData->getLogList().size(); i ++)
    {
        ui->tableWidget->setItem(i, DATABASEDEF::CHATUSERNAME, DATA(logData->getLogList().at(i).userName));
        ui->tableWidget->setItem(i, DATABASEDEF::CHATTEXT,     DATA(logData->getLogList().at(i).text));
        ui->tableWidget->setItem(i, DATABASEDEF::CHATTIME,     DATA(logData->getLogList().at(i).dateTime));
    }
}

/************************   改变事件             ************************/
void LogManage::resizeEvent(QResizeEvent *event)
{
    titleBar->resize(this->width(), titleBar->getTitleBarHeight());
}

/************************   删除             ************************/
void LogManage::on_pushButtonDelete_clicked()
{
    if(NULL == ui->tableWidget->currentItem()) return;
    if(ui->tableWidget->currentRow() < 0 || ui->tableWidget->currentRow() >= logData->getLogList().size()) return;

    QMap<QString, QString> mapData;

    mapData[Protocol::userName]    = logData->getLogList().at(ui->tableWidget->currentRow()).userName;
    mapData[Protocol::sendContext] = logData->getLogList().at(ui->tableWidget->currentRow()).text;
    mapData[Protocol::dateTime]    = logData->getLogList().at(ui->tableWidget->currentRow()).dateTime;

    CLIENT->netSend(Protocol::SENDDELCHATTEXTREQ, GLOBALDEF::myUserName, mapData);

    ui->tableWidget->removeRow(ui->tableWidget->currentRow());
    logData->changeLogeList(ui->tableWidget->currentRow());
}

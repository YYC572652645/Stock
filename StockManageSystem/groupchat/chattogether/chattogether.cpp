#include "chattogether.h"
#include "ui_chattogether.h"
#include <QDateTime>
#include <QColorDialog>
#include "groupchat/client/client.h"

ChatTogether * ChatTogether::instance = NULL;

/************************   构造函数              ************************/
ChatTogether::ChatTogether(QWidget *parent) :
    QWidget(parent)
  ,ui(new Ui::chatdemo)
  ,titleBar(NULL)
  ,chatLog(NULL)
  ,timer(NULL)
  ,logManage(NULL)
  ,localData(NULL)
{
    ui->setupUi(this);
    this->initControl();
}

/************************   析构函数              ************************/
ChatTogether::~ChatTogether()
{
    delete ui;
    SAFEDELETE(chatLog);
    SAFEDELETE(logManage);
    SAFEDELETE(localData);
}

/************************   单例模式              ************************/
ChatTogether *ChatTogether::getInstance()
{
    if(NULL == instance)
    {
        instance = new ChatTogether();
    }

    return instance;
}

/************************   初始化控件            ************************/
void ChatTogether::initControl()
{
    titleBar = new TitleBar(this);
    chatLog = new ChatLog();
    timer = new QTimer(this);
    logManage = new LogManage();
    localData = new LocalData();

    titleBar->setIcon(GLOBALDEF::LOGOIMG);
    titleBar->setTitle(GLOBALDEF::GROUPCHAT);

    titleBar->subButton(TITLEBAR::MAXMINWIDGET);

    this->setWindowModality(Qt::ApplicationModal);
    this->setWindowFlags(Qt::CoverWindow | Qt::FramelessWindowHint);

    timer->setInterval(GLOBALDEF::INTERNAL);

    connect(timer, SIGNAL(timeout()), this, SLOT(updateTimer()));
}

/************************   显示窗口              ************************/
void ChatTogether::showWidget()
{
    if(GLOBALDEF::myVip != 0)
    {
        this->show();
    }
    else
    {
        ui->pushButtonManage->hide();
        this->show();
    }
}

/************************   接受数据              ************************/
void ChatTogether::receiveData(const QMap<QString, QString> &mapData)
{
    //将数据显示到界面
    MessageData messageData;

    messageData.userName    = mapData.value(Protocol::user);
    messageData.nickName    = mapData.value(Protocol::nickName);
    messageData.font        = mapData.value(Protocol::font);
    messageData.fontSize    = mapData.value(Protocol::fontSize);
    messageData.fontColor   = mapData.value(Protocol::fontColor);
    messageData.textContent = mapData.value(Protocol::sendContext);
    messageData.dateTime    = mapData.value(Protocol::dateTime);

    this->setUpText(messageData);

    localData->insertData(messageData);
}

/************************   清除不合法信息              ************************/
void ChatTogether::clearIllegalData(const QMap<QString, QString> &mapData)
{
    //清空重新显示
    ui->textBrowserContent->clear();

    //将不合法信息删除
    MessageData messageData;

    messageData.userName    = mapData.value(Protocol::userName);
    messageData.textContent = mapData.value(Protocol::sendContext);
    messageData.dateTime    = mapData.value(Protocol::dateTime);

    localData->deleteData(messageData);

    //重新查询显示
    QString beginTime = QDateTime::currentDateTime().toString(GLOBALDEF::BEGINTIMEFORMAT);
    QString endTime = QDateTime::currentDateTime().toString(GLOBALDEF::TIMEFORMAT);
    localData->selectData(beginTime, endTime);

    for(int i = 0; i < localData->getLocalList().size(); i ++)
    {
        this->setUpText(localData->getLocalList().at(i));
    }

    logManage->on_pushButtonSelect_clicked();
}

/************************   进行连接              ************************/
void ChatTogether::initConn()
{
    CLIENT->connectServer();

    timer->start();
}

/************************   关闭连接              ************************/
void ChatTogether::closeConn()
{
    timer->stop();

    CLIENT->closeSocket();
}

/************************   改变事件              ************************/
void ChatTogether::resizeEvent(QResizeEvent *event)
{
    titleBar->resize(this->width(), titleBar->getTitleBarHeight());
}

/************************   设置颜色              ************************/
void ChatTogether::on_pushButtonColor_clicked()
{
    fontColor = QColorDialog::getColor(Qt::black, this);

    QPalette palette = ui->pushButtonColor->palette();
    palette.setColor(QPalette::Button, fontColor);
    ui->pushButtonColor->setPalette(palette);
    ui->pushButtonColor->setAutoFillBackground(true);
    ui->pushButtonColor->setFlat(true);

    this->setTextEdit();
}

/************************   设置大小              ************************/
void ChatTogether::on_comboBoxSize_currentIndexChanged(const QString &arg1)
{
    this->setTextEdit();
}

/************************   设置字体              ************************/
void ChatTogether::on_fontComboBoxFont_currentIndexChanged(const QString &arg1)
{
    this->setTextEdit();
}

/*******************        设置文本              ***********************/
void ChatTogether::setUpText(const MessageData &messageData)
{
    ui->textBrowserContent->setTextColor(Qt::blue);
    ui->textBrowserContent->setCurrentFont(QFont(GLOBALDEF::FONTNAME, GLOBALDEF::BIGFONTSIZE, true));
    ui->textBrowserContent->append(" [" + messageData.nickName + "]   " + messageData.dateTime);

    ui->textBrowserContent->setTextColor(QColor::fromRgb(messageData.fontColor.toUInt()));
    ui->textBrowserContent->setCurrentFont(QFont(messageData.font, messageData.fontSize.toInt()));
    ui->textBrowserContent->append(messageData.textContent);
}

/************************   设置文本框            ************************/
void ChatTogether::setTextEdit()
{
    QFont font = ui->fontComboBoxFont->currentFont();

    font.setPointSize(ui->comboBoxSize->currentText().toInt());

    ui->textEditSendText->setFont(font);

    ui->textEditSendText->setTextColor(fontColor);

    ui->textEditSendText->setTextColor(fontColor);

    QString text = ui->textEditSendText->toPlainText();

    ui->textEditSendText->clear();

    ui->textEditSendText->setText(text);
}

/************************   发送数据              ************************/
void ChatTogether::on_pushButtonSend_clicked()
{
    if(ui->textEditSendText->toPlainText().isEmpty()) return;

    if(!CLIENT->isConnect())
    {
        ui->labelInfo->setText(MESSAGEINFO::NETCONNFAILED);
        return;
    }

    //发送数据到服务器
    QMap<QString, QString> mapData;

    mapData[Protocol::sendContext] = ui->textEditSendText->toPlainText();
    mapData[Protocol::font] = ui->fontComboBoxFont->currentFont().toString();
    mapData[Protocol::fontSize] = ui->comboBoxSize->currentText();
    mapData[Protocol::fontColor] = QString::number(fontColor.rgb());
    mapData[Protocol::dateTime] = QDateTime::currentDateTime().toString(GLOBALDEF::TIMEFORMAT);

    CLIENT->netSend(Protocol::SENDMESSAGEREQ, GLOBALDEF::myUserName, mapData);


    //将数据显示到界面
    MessageData messageData;

    messageData.userName = GLOBALDEF::myUserName;
    messageData.nickName = GLOBALDEF::myNickName;
    messageData.font = ui->fontComboBoxFont->currentFont().toString();
    messageData.fontSize = ui->comboBoxSize->currentText();
    messageData.fontColor = QString::number(fontColor.rgb());
    messageData.textContent = ui->textEditSendText->toPlainText();
    messageData.dateTime = QDateTime::currentDateTime().toString(GLOBALDEF::TIMEFORMAT);

    this->setUpText(messageData);

    //插入本地数据库
    localData->insertData(messageData);

    ui->textEditSendText->clear();
}

/************************   定时心跳包            ************************/
void ChatTogether::updateTimer()
{
    if(!CLIENT->isConnect()) CLIENT->connectServer();

    QMap<QString, QString> mapData;
    CLIENT->netSend(Protocol::SENDBREAKHEARTREQ, GLOBALDEF::myUserName, mapData);

    CLIENT->heartBreakCount ++;

    if(CLIENT->heartBreakCount >= GLOBALDEF::HEARTBREAKMAX)
    {
        emit sendNetStatus(GLOBALDEF::NETCONNFAILED);
    }
    else
    {
        emit sendNetStatus(GLOBALDEF::NETCONNSUCCESS);
    }
}

/************************   聊天记录              ************************/
void ChatTogether::on_pushButtonChatLog_clicked()
{
    chatLog->showWidget();
}

/************************   聊天管理              ************************/
void ChatTogether::on_pushButtonManage_clicked()
{
    logManage->showWidget();
}

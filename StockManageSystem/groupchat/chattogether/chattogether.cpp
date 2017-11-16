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
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    this->initControl();
}

/************************   析构函数              ************************/
ChatTogether::~ChatTogether()
{
    delete ui;
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

    titleBar->setIcon(GLOBALDEF::LOGOIMG);
    titleBar->setTitle(GLOBALDEF::GROUPCHAT);

    titleBar->subButton(TITLEBAR::MAXMINWIDGET);

    this->setWindowFlags(Qt::CoverWindow | Qt::FramelessWindowHint);
}

/************************   接受数据              ************************/
void ChatTogether::receiveData(const QMap<QString, QString> &mapData)
{
    MessageData messageData;

    messageData.userName    = mapData.value(Protocol::user);
    messageData.font        = mapData.value(Protocol::font);
    messageData.fontSize    = mapData.value(Protocol::fontSize);
    messageData.fontColor   = mapData.value(Protocol::fontColor);
    messageData.textContent = mapData.value(Protocol::sendContext);

    this->setUpText(messageData);
}

/************************   进行连接              ************************/
void ChatTogether::initConn()
{
    CLIENT->connectServer();

    timer->setInterval(GLOBALDEF::INTERNAL);

    connect(timer, SIGNAL(timeout()), this, SLOT(updateTimer()));

    timer->start();
}

/************************   改变事件              ************************/
void ChatTogether::resizeEvent(QResizeEvent *event)
{
    titleBar->resize(this->width(), TitleBar::TITLEBARHEIGHT);
}

void ChatTogether::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Enter)
    {
        on_pushButtonSend_clicked();
    }
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
    ui->textBrowserContent->append(" [" + messageData.userName + "]   " + QDateTime::currentDateTime().toString(GLOBALDEF::TIMEFORMAT));

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
    if(!CLIENT->isConnect()) CLIENT->connectServer();

    QMap<QString, QString> mapData;

    mapData[Protocol::sendContext] = ui->textEditSendText->toPlainText();
    mapData[Protocol::font] = ui->fontComboBoxFont->currentFont().toString();
    mapData[Protocol::fontSize] = ui->comboBoxSize->currentText();
    mapData[Protocol::fontColor] = QString::number(fontColor.rgb());
    mapData[Protocol::dateTime] = QDateTime::currentDateTime().toString(GLOBALDEF::TIMEFORMAT);;

    CLIENT->netSend(Protocol::SENDMESSAGEREQ, myUserName, mapData);

    MessageData messageData;

    messageData.userName = myUserName;
    messageData.font = ui->fontComboBoxFont->currentFont().toString();
    messageData.fontSize = ui->comboBoxSize->currentText();
    messageData.fontColor = QString::number(fontColor.rgb());
    messageData.textContent = ui->textEditSendText->toPlainText();

    this->setUpText(messageData);

    ui->textEditSendText->clear();
}

/************************   定时心跳包            ************************/
void ChatTogether::updateTimer()
{
    if(!CLIENT->isConnect()) CLIENT->connectServer();

    QMap<QString, QString> mapData;
    CLIENT->netSend(Protocol::SENDBREAKHEARTREQ, myUserName, mapData);

    CLIENT->heartBreakCount ++;

    if(CLIENT->heartBreakCount > GLOBALDEF::HEARTBREAKMAX)
    {
        qDebug()<<"网络已经断开";
    }
}

/************************   聊天记录              ************************/
void ChatTogether::on_pushButtonChatLog_clicked()
{
    chatLog->show();
}

#include "chattogether.h"
#include "ui_chatdemo.h"
#include <QDateTime>
#include <QColorDialog>
#include "client/client.h"

ChatTogether * ChatTogether::instance = NULL;

ChatTogether::ChatTogether(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chatdemo)
{
    ui->setupUi(this);


    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    this->initControl();
}

ChatTogether::~ChatTogether()
{
    delete ui;
}

ChatTogether *ChatTogether::getInstance()
{
    if(NULL == instance)
    {
        instance = new ChatTogether();
    }

    return instance;

}

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

/************************   初始化控件              ************************/
void ChatTogether::initControl()
{
    titleBar = new TitleBar(this);

    CLIENT->connectServer();
}

/************************   改变事件              ************************/
void ChatTogether::resizeEvent(QResizeEvent *event)
{
    titleBar->resize(this->width(), TitleBar::TITLEBARHEIGHT);
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
    ui->textBrowserContent->setCurrentFont(QFont("ZYsong", 14, true));
    ui->textBrowserContent->append(" [" + messageData.userName + "]   " + QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));


    ui->textBrowserContent->setTextColor(QColor::fromRgb(messageData.fontColor.toUInt()));
    ui->textBrowserContent->setCurrentFont(QFont(messageData.font, messageData.fontSize.toInt()));
    ui->textBrowserContent->append(messageData.textContent);
}

/************************   设置文本框              ************************/
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
    if(!CLIENT->isConnect()) CLIENT->connectServer();

    QMap<QString, QString> mapData;

    mapData[Protocol::sendContext] = ui->textEditSendText->toPlainText();
    mapData[Protocol::font] = ui->fontComboBoxFont->currentFont().toString();
    mapData[Protocol::fontSize] = ui->comboBoxSize->currentText();
    mapData[Protocol::fontColor] = QString::number(fontColor.rgb());
    mapData[Protocol::dateTime] = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");

    CLIENT->netSend(Protocol::SENDMESSAGEREQ, "admin1", mapData);

    MessageData messageData;

    messageData.userName = "admin1";
    messageData.font = ui->fontComboBoxFont->currentFont().toString();
    messageData.fontSize = ui->comboBoxSize->currentText();
    messageData.fontColor = QString::number(fontColor.rgb());
    messageData.textContent = ui->textEditSendText->toPlainText();

    this->setUpText(messageData);

    ui->textEditSendText->clear();
}

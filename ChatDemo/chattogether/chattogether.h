#ifndef CHATDEMO_H
#define CHATDEMO_H

#include <QWidget>
#include "titlebar/titlebar.h"
#include "database/database.h"
#include <QResizeEvent>

/***************************************************************
   功能: 聊天类

   创建人:YYC

   创建时间:2017-11-15
**************************************************************/

#define CHATTOGETHER ChatTogether::getInstance()

namespace Ui {
class chatdemo;
}

class ChatTogether : public QWidget
{
    Q_OBJECT

public:
    explicit ChatTogether(QWidget *parent = 0);
    ~ChatTogether();

    static ChatTogether * getInstance();
    void receiveData(const QMap<QString, QString> &mapData);

public slots:
    void on_pushButtonColor_clicked();
    void on_comboBoxSize_currentIndexChanged(const QString &arg1);
    void on_fontComboBoxFont_currentIndexChanged(const QString &arg1);
    void on_pushButtonSend_clicked();

private:
    Ui::chatdemo *ui;
    static ChatTogether *instance;

    TitleBar *titleBar;
    QColor fontColor;

    void initControl();
    void setTextEdit();
    void setUpText(const MessageData &messageData);
    void resizeEvent(QResizeEvent *event);
};

#endif // CHATDEMO_H

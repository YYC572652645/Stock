/********************************************************************************
** Form generated from reading UI file 'chatdemo.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATDEMO_H
#define UI_CHATDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chatdemo
{
public:
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowserContent;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QFontComboBox *fontComboBoxFont;
    QComboBox *comboBoxSize;
    QPushButton *pushButtonColor;
    QTextEdit *textEditSendText;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonSend;

    void setupUi(QWidget *chatdemo)
    {
        if (chatdemo->objectName().isEmpty())
            chatdemo->setObjectName(QStringLiteral("chatdemo"));
        chatdemo->resize(787, 743);
        verticalLayout_3 = new QVBoxLayout(chatdemo);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_3);

        horizontalSpacer_2 = new QSpacerItem(40, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textBrowserContent = new QTextBrowser(chatdemo);
        textBrowserContent->setObjectName(QStringLiteral("textBrowserContent"));
        textBrowserContent->setMinimumSize(QSize(100, 0));

        verticalLayout->addWidget(textBrowserContent);

        frame = new QFrame(chatdemo);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMaximumSize(QSize(16777215, 50));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        fontComboBoxFont = new QFontComboBox(frame);
        fontComboBoxFont->setObjectName(QStringLiteral("fontComboBoxFont"));
        fontComboBoxFont->setMinimumSize(QSize(40, 0));
        fontComboBoxFont->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_2->addWidget(fontComboBoxFont);

        comboBoxSize = new QComboBox(frame);
        comboBoxSize->setObjectName(QStringLiteral("comboBoxSize"));
        comboBoxSize->setMinimumSize(QSize(60, 0));
        comboBoxSize->setEditable(true);

        horizontalLayout_2->addWidget(comboBoxSize);

        pushButtonColor = new QPushButton(frame);
        pushButtonColor->setObjectName(QStringLiteral("pushButtonColor"));
        pushButtonColor->setMinimumSize(QSize(60, 0));
        pushButtonColor->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(pushButtonColor);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(frame);

        textEditSendText = new QTextEdit(chatdemo);
        textEditSendText->setObjectName(QStringLiteral("textEditSendText"));
        textEditSendText->setMinimumSize(QSize(0, 100));
        textEditSendText->setMaximumSize(QSize(16777215, 100));

        verticalLayout->addWidget(textEditSendText);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonSend = new QPushButton(chatdemo);
        pushButtonSend->setObjectName(QStringLiteral("pushButtonSend"));

        horizontalLayout_3->addWidget(pushButtonSend);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout);


        retranslateUi(chatdemo);

        QMetaObject::connectSlotsByName(chatdemo);
    } // setupUi

    void retranslateUi(QWidget *chatdemo)
    {
        chatdemo->setWindowTitle(QApplication::translate("chatdemo", "chatdemo", 0));
        comboBoxSize->clear();
        comboBoxSize->insertItems(0, QStringList()
         << QApplication::translate("chatdemo", "2", 0)
         << QApplication::translate("chatdemo", "4", 0)
         << QApplication::translate("chatdemo", "6", 0)
         << QApplication::translate("chatdemo", "8", 0)
         << QApplication::translate("chatdemo", "10", 0)
         << QApplication::translate("chatdemo", "12", 0)
         << QApplication::translate("chatdemo", "14", 0)
         << QApplication::translate("chatdemo", "16", 0)
         << QApplication::translate("chatdemo", "18", 0)
         << QApplication::translate("chatdemo", "20", 0)
         << QApplication::translate("chatdemo", "22", 0)
         << QApplication::translate("chatdemo", "24", 0)
         << QApplication::translate("chatdemo", "26", 0)
         << QApplication::translate("chatdemo", "28", 0)
         << QApplication::translate("chatdemo", "30", 0)
         << QApplication::translate("chatdemo", "32", 0)
         << QApplication::translate("chatdemo", "34", 0)
         << QApplication::translate("chatdemo", "36", 0)
        );
        comboBoxSize->setCurrentText(QApplication::translate("chatdemo", "12", 0));
        pushButtonColor->setText(QString());
        pushButtonSend->setText(QApplication::translate("chatdemo", "\345\217\221\351\200\201", 0));
    } // retranslateUi

};

namespace Ui {
    class chatdemo: public Ui_chatdemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATDEMO_H

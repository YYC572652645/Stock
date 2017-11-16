/********************************************************************************
** Form generated from reading UI file 'chatlog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATLOG_H
#define UI_CHATLOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chatlog
{
public:
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QDateTimeEdit *dateTimeEditBeginTime;
    QLabel *label;
    QDateTimeEdit *dateTimeEditEndTime;
    QPushButton *pushButtonSelect;
    QTextBrowser *textBrowserLog;

    void setupUi(QWidget *chatlog)
    {
        if (chatlog->objectName().isEmpty())
            chatlog->setObjectName(QStringLiteral("chatlog"));
        chatlog->resize(711, 606);
        verticalLayout_3 = new QVBoxLayout(chatlog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer);

        horizontalSpacer_2 = new QSpacerItem(40, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(chatlog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 9, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        dateTimeEditBeginTime = new QDateTimeEdit(frame);
        dateTimeEditBeginTime->setObjectName(QStringLiteral("dateTimeEditBeginTime"));
        QFont font;
        font.setPointSize(12);
        dateTimeEditBeginTime->setFont(font);

        horizontalLayout->addWidget(dateTimeEditBeginTime);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(30, 16777215));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        dateTimeEditEndTime = new QDateTimeEdit(frame);
        dateTimeEditEndTime->setObjectName(QStringLiteral("dateTimeEditEndTime"));
        dateTimeEditEndTime->setFont(font);

        horizontalLayout->addWidget(dateTimeEditEndTime);

        pushButtonSelect = new QPushButton(frame);
        pushButtonSelect->setObjectName(QStringLiteral("pushButtonSelect"));
        pushButtonSelect->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(pushButtonSelect);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(frame);

        textBrowserLog = new QTextBrowser(chatlog);
        textBrowserLog->setObjectName(QStringLiteral("textBrowserLog"));

        verticalLayout_2->addWidget(textBrowserLog);


        verticalLayout_3->addLayout(verticalLayout_2);

        QWidget::setTabOrder(pushButtonSelect, dateTimeEditEndTime);
        QWidget::setTabOrder(dateTimeEditEndTime, dateTimeEditBeginTime);
        QWidget::setTabOrder(dateTimeEditBeginTime, textBrowserLog);

        retranslateUi(chatlog);

        QMetaObject::connectSlotsByName(chatlog);
    } // setupUi

    void retranslateUi(QWidget *chatlog)
    {
        chatlog->setWindowTitle(QApplication::translate("chatlog", "Form", 0));
        dateTimeEditBeginTime->setDisplayFormat(QApplication::translate("chatlog", "yyyy-MM-dd hh:mm:ss", 0));
        label->setText(QApplication::translate("chatlog", "\350\207\263", 0));
        dateTimeEditEndTime->setDisplayFormat(QApplication::translate("chatlog", "yyyy-MM-dd hh:mm:ss", 0));
        pushButtonSelect->setText(QApplication::translate("chatlog", "\346\237\245\350\257\242", 0));
    } // retranslateUi

};

namespace Ui {
    class chatlog: public Ui_chatlog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATLOG_H

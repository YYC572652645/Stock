/********************************************************************************
** Form generated from reading UI file 'pushmessage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUSHMESSAGE_H
#define UI_PUSHMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pushmessage
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelContent;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonLook;

    void setupUi(QWidget *pushmessage)
    {
        if (pushmessage->objectName().isEmpty())
            pushmessage->setObjectName(QStringLiteral("pushmessage"));
        pushmessage->resize(400, 300);
        pushmessage->setMinimumSize(QSize(400, 300));
        pushmessage->setMaximumSize(QSize(400, 300));
        verticalLayout_3 = new QVBoxLayout(pushmessage);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalSpacer = new QSpacerItem(40, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        horizontalSpacer_2 = new QSpacerItem(40, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(verticalLayout);

        labelContent = new QLabel(pushmessage);
        labelContent->setObjectName(QStringLiteral("labelContent"));
        labelContent->setMinimumSize(QSize(0, 240));
        labelContent->setStyleSheet(QStringLiteral(""));
        labelContent->setPixmap(QPixmap(QString::fromUtf8(":/image/image/picture.jpg")));
        labelContent->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelContent);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButtonLook = new QPushButton(pushmessage);
        pushButtonLook->setObjectName(QStringLiteral("pushButtonLook"));
        pushButtonLook->setMaximumSize(QSize(16777215, 30));
        pushButtonLook->setStyleSheet(QStringLiteral("background-color:transparent;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/image/search-yellow.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonLook->setIcon(icon);

        horizontalLayout->addWidget(pushButtonLook);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(pushmessage);

        QMetaObject::connectSlotsByName(pushmessage);
    } // setupUi

    void retranslateUi(QWidget *pushmessage)
    {
        pushmessage->setWindowTitle(QApplication::translate("pushmessage", "Form", 0));
        labelContent->setText(QString());
        pushButtonLook->setText(QApplication::translate("pushmessage", "\346\237\245\347\234\213", 0));
    } // retranslateUi

};

namespace Ui {
    class pushmessage: public Ui_pushmessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUSHMESSAGE_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QWidget *widgetMessage;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelTitle;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;
    QLabel *labelImage;
    QWidget *widgetMainContent;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(810, 771);
        MainWindow->setMinimumSize(QSize(0, 0));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_7 = new QVBoxLayout(centralWidget);
        verticalLayout_7->setSpacing(1);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalSpacer = new QSpacerItem(40, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        horizontalSpacer_2 = new QSpacerItem(40, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(230, 130));
        groupBox->setStyleSheet(QLatin1String("QGroupBox\n"
"{\n"
"border:0.5px groove rgb(68, 68, 68);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widgetMessage = new QWidget(groupBox);
        widgetMessage->setObjectName(QStringLiteral("widgetMessage"));
        verticalLayout_5 = new QVBoxLayout(widgetMessage);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        labelTitle = new QLabel(widgetMessage);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setMinimumSize(QSize(0, 0));
        labelTitle->setStyleSheet(QLatin1String("background-color: rgb(255, 126, 114);\n"
"color:white;\n"
"font-size:20px;\n"
"QLabel\n"
"{\n"
"    height:25px;\n"
"}"));
        labelTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(labelTitle);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(5, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(widgetMessage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("border-radius:5px;padding:2px 4px;\n"
"background-color: rgb(255, 126, 114);\n"
"color:white;\n"
"    font-size:28px;"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widgetMessage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String("border-radius:5px;padding:2px 4px;\n"
"background-color: rgb(255, 126, 114);\n"
"color:white;\n"
"    font-size:28px;"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widgetMessage);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QLatin1String("border-radius:5px;padding:2px 4px;\n"
"background-color: rgb(255, 126, 114);\n"
"color:white;\n"
"    font-size:28px;"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(widgetMessage);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setStyleSheet(QLatin1String("border-radius:5px;padding:2px 4px;\n"
"background-color: rgb(255, 126, 114);\n"
"color:white;\n"
"    font-size:28px;"));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(widgetMessage);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QLatin1String("border-radius:5px;padding:2px 4px;\n"
"background-color: rgb(255, 126, 114);\n"
"color:white;\n"
"    font-size:28px;"));

        horizontalLayout_2->addWidget(pushButton_4);

        horizontalSpacer_4 = new QSpacerItem(5, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_2);

        label_2 = new QLabel(widgetMessage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 20));

        verticalLayout_4->addWidget(label_2);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_2->addWidget(widgetMessage);


        horizontalLayout->addWidget(groupBox);

        labelImage = new QLabel(centralWidget);
        labelImage->setObjectName(QStringLiteral("labelImage"));
        labelImage->setMinimumSize(QSize(0, 0));
        labelImage->setMaximumSize(QSize(16777215, 130));
        labelImage->setStyleSheet(QStringLiteral("border:0.5px groove rgb(68, 68, 68);"));

        horizontalLayout->addWidget(labelImage);


        verticalLayout_6->addLayout(horizontalLayout);

        widgetMainContent = new QWidget(centralWidget);
        widgetMainContent->setObjectName(QStringLiteral("widgetMainContent"));
        widgetMainContent->setMinimumSize(QSize(0, 600));

        verticalLayout_6->addWidget(widgetMainContent);


        verticalLayout_7->addLayout(verticalLayout_6);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox->setTitle(QString());
        labelTitle->setText(QApplication::translate("MainWindow", "\351\207\215\345\272\206\346\227\266\346\227\266\345\275\251  \347\254\2541\346\234\237", 0));
        pushButton->setText(QApplication::translate("MainWindow", "8", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "8", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "4", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "2", 0));
        label_2->setText(QApplication::translate("MainWindow", "\350\267\235\347\254\254\344\270\200\346\234\237\345\274\200\345\245\226\357\274\232", 0));
        labelImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

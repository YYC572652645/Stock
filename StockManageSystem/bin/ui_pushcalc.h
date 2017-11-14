/********************************************************************************
** Form generated from reading UI file 'pushcalc.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUSHCALC_H
#define UI_PUSHCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pushcalc
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox_2;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label_8;
    QSpinBox *spinBox_5;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinBox_3;
    QLabel *label_4;
    QSpinBox *spinBox_4;
    QLabel *label_9;
    QSpinBox *spinBox_6;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QSpinBox *spinBox_7;
    QRadioButton *radioButton_3;
    QSpinBox *spinBox_8;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QTableWidget *tableWidget;

    void setupUi(QWidget *pushcalc)
    {
        if (pushcalc->objectName().isEmpty())
            pushcalc->setObjectName(QStringLiteral("pushcalc"));
        pushcalc->resize(1100, 642);
        verticalLayout_3 = new QVBoxLayout(pushcalc);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(pushcalc);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(90, 0));
        label->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(label);

        spinBox_2 = new QSpinBox(pushcalc);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMinimumSize(QSize(107, 0));
        spinBox_2->setMaximumSize(QSize(107, 16777215));
        spinBox_2->setMinimum(2);

        horizontalLayout->addWidget(spinBox_2);

        label_3 = new QLabel(pushcalc);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(90, 0));
        label_3->setMaximumSize(QSize(90, 16777215));

        horizontalLayout->addWidget(label_3);

        spinBox = new QSpinBox(pushcalc);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimumSize(QSize(107, 0));
        spinBox->setMaximumSize(QSize(107, 16777215));
        spinBox->setMinimum(2);

        horizontalLayout->addWidget(spinBox);

        label_8 = new QLabel(pushcalc);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(90, 0));
        label_8->setMaximumSize(QSize(90, 16777215));

        horizontalLayout->addWidget(label_8);

        spinBox_5 = new QSpinBox(pushcalc);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));
        spinBox_5->setMinimumSize(QSize(107, 0));
        spinBox_5->setMaximumSize(QSize(107, 16777215));
        spinBox_5->setMinimum(2);

        horizontalLayout->addWidget(spinBox_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(pushcalc);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(90, 0));
        label_2->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_2->addWidget(label_2);

        spinBox_3 = new QSpinBox(pushcalc);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setMinimumSize(QSize(107, 0));
        spinBox_3->setMaximumSize(QSize(107, 16777215));
        spinBox_3->setMinimum(2);

        horizontalLayout_2->addWidget(spinBox_3);

        label_4 = new QLabel(pushcalc);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(90, 0));
        label_4->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_2->addWidget(label_4);

        spinBox_4 = new QSpinBox(pushcalc);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setMinimumSize(QSize(107, 0));
        spinBox_4->setMaximumSize(QSize(107, 16777215));
        spinBox_4->setMinimum(2);

        horizontalLayout_2->addWidget(spinBox_4);

        label_9 = new QLabel(pushcalc);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(90, 0));
        label_9->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_2->addWidget(label_9);

        spinBox_6 = new QSpinBox(pushcalc);
        spinBox_6->setObjectName(QStringLiteral("spinBox_6"));
        spinBox_6->setMinimumSize(QSize(107, 0));
        spinBox_6->setMaximumSize(QSize(107, 16777215));
        spinBox_6->setMinimum(2);

        horizontalLayout_2->addWidget(spinBox_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_7 = new QLabel(pushcalc);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(90, 0));
        label_7->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_3->addWidget(label_7);

        spinBox_7 = new QSpinBox(pushcalc);
        spinBox_7->setObjectName(QStringLiteral("spinBox_7"));
        spinBox_7->setMinimumSize(QSize(107, 0));
        spinBox_7->setMaximumSize(QSize(107, 16777215));
        spinBox_7->setMinimum(2);

        horizontalLayout_3->addWidget(spinBox_7);

        radioButton_3 = new QRadioButton(pushcalc);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setMinimumSize(QSize(90, 0));
        radioButton_3->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_3->addWidget(radioButton_3);

        spinBox_8 = new QSpinBox(pushcalc);
        spinBox_8->setObjectName(QStringLiteral("spinBox_8"));
        spinBox_8->setMinimumSize(QSize(107, 0));
        spinBox_8->setMaximumSize(QSize(107, 16777215));
        spinBox_8->setMinimum(2);

        horizontalLayout_3->addWidget(spinBox_8);

        label_5 = new QLabel(pushcalc);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(7, 0));
        label_5->setMaximumSize(QSize(7, 16777215));

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);

        pushButton = new QPushButton(pushcalc);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("QPushButton:hover\n"
"{\n"
"background-color: rgb(180, 85, 100);\n"
"border-radius:5px;\n"
"color:white;\n"
"}\n"
"\n"
"QPushButton:hover:pressed\n"
"{\n"
"background-color:rgb(180, 85, 100);\n"
"border-radius:5px;\n"
"color:white;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"background-color:rgb(100, 85, 80);\n"
"color:white;\n"
"border-radius:5px;\n"
"height: 40px;\n"
"min-width: 100px;\n"
"spacing: 10px;\n"
"padding: 0px 0px;\n"
"}"));

        horizontalLayout_4->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_4);

        tableWidget = new QTableWidget(pushcalc);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout_2->addWidget(tableWidget);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(pushcalc);

        QMetaObject::connectSlotsByName(pushcalc);
    } // setupUi

    void retranslateUi(QWidget *pushcalc)
    {
        pushcalc->setWindowTitle(QApplication::translate("pushcalc", "Form", 0));
        label->setText(QApplication::translate("pushcalc", "\346\234\237\346\225\260\357\274\232", 0));
        label_3->setText(QApplication::translate("pushcalc", "\345\215\225\346\263\250\346\210\220\346\234\254\357\274\232", 0));
        label_8->setText(QApplication::translate("pushcalc", "\345\274\200\345\247\213\345\200\215\346\225\260\357\274\232", 0));
        label_2->setText(QApplication::translate("pushcalc", "\346\263\250\346\225\260\357\274\232", 0));
        label_4->setText(QApplication::translate("pushcalc", "\345\215\225\346\263\250\345\245\226\351\207\221\357\274\232", 0));
        label_9->setText(QApplication::translate("pushcalc", "\346\216\250\346\263\242\345\207\240\346\234\237\357\274\232", 0));
        label_7->setText(QApplication::translate("pushcalc", "\345\233\272\345\256\232\345\210\251\346\266\246\357\274\232", 0));
        radioButton_3->setText(QApplication::translate("pushcalc", "\347\231\276\345\210\206\346\257\224\345\210\251\346\266\246", 0));
        label_5->setText(QApplication::translate("pushcalc", "%", 0));
        pushButton->setText(QApplication::translate("pushcalc", "\350\256\241\347\256\227\345\200\215\346\212\225", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("pushcalc", "\346\234\237\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("pushcalc", "\345\200\215\346\225\260", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("pushcalc", "\345\275\223\346\234\237\346\212\225\345\205\245", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("pushcalc", "\347\264\257\350\256\241\346\212\225\345\205\245", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("pushcalc", "\346\224\266\347\233\212", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("pushcalc", "\345\210\251\346\266\246", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("pushcalc", "\346\224\266\347\233\212\347\216\207%", 0));
    } // retranslateUi

};

namespace Ui {
    class pushcalc: public Ui_pushcalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUSHCALC_H

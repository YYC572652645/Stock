/********************************************************************************
** Form generated from reading UI file 'normalcalc.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NORMALCALC_H
#define UI_NORMALCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_normalcalc
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_3;
    QSpinBox *spinBox;
    QRadioButton *radioButton;
    QComboBox *comboBox_2;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QRadioButton *radioButton_2;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QRadioButton *radioButton_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QTableView *tableView;

    void setupUi(QWidget *normalcalc)
    {
        if (normalcalc->objectName().isEmpty())
            normalcalc->setObjectName(QStringLiteral("normalcalc"));
        normalcalc->resize(868, 361);
        verticalLayout_3 = new QVBoxLayout(normalcalc);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(normalcalc);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(60, 0));
        label->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(normalcalc);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(107, 0));
        comboBox->setMaximumSize(QSize(107, 16777215));

        horizontalLayout->addWidget(comboBox);

        label_3 = new QLabel(normalcalc);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(70, 0));
        label_3->setMaximumSize(QSize(70, 16777215));

        horizontalLayout->addWidget(label_3);

        spinBox = new QSpinBox(normalcalc);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimumSize(QSize(107, 0));
        spinBox->setMaximumSize(QSize(107, 16777215));
        spinBox->setMinimum(2);

        horizontalLayout->addWidget(spinBox);

        radioButton = new QRadioButton(normalcalc);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setMinimumSize(QSize(70, 0));
        radioButton->setMaximumSize(QSize(70, 16777215));

        horizontalLayout->addWidget(radioButton);

        comboBox_2 = new QComboBox(normalcalc);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(107, 0));
        comboBox_2->setMaximumSize(QSize(107, 16777215));

        horizontalLayout->addWidget(comboBox_2);

        label_7 = new QLabel(normalcalc);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout->addWidget(label_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(normalcalc);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(60, 0));
        label_2->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(normalcalc);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(107, 0));
        lineEdit->setMaximumSize(QSize(107, 16777215));

        horizontalLayout_2->addWidget(lineEdit);

        label_4 = new QLabel(normalcalc);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(70, 0));
        label_4->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_2->addWidget(label_4);

        lineEdit_2 = new QLineEdit(normalcalc);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(107, 0));
        lineEdit_2->setMaximumSize(QSize(107, 16777215));

        horizontalLayout_2->addWidget(lineEdit_2);

        radioButton_2 = new QRadioButton(normalcalc);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setMinimumSize(QSize(70, 0));
        radioButton_2->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_2->addWidget(radioButton_2);

        lineEdit_3 = new QLineEdit(normalcalc);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(107, 0));
        lineEdit_3->setMaximumSize(QSize(107, 16777215));

        horizontalLayout_2->addWidget(lineEdit_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(368, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        radioButton_3 = new QRadioButton(normalcalc);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setMinimumSize(QSize(70, 0));
        radioButton_3->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_3->addWidget(radioButton_3);

        label_5 = new QLabel(normalcalc);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_3->addWidget(label_5);

        lineEdit_4 = new QLineEdit(normalcalc);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(107, 0));
        lineEdit_4->setMaximumSize(QSize(107, 16777215));

        horizontalLayout_3->addWidget(lineEdit_4);

        label_6 = new QLabel(normalcalc);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        lineEdit_5 = new QLineEdit(normalcalc);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(107, 0));
        lineEdit_5->setMaximumSize(QSize(107, 16777215));

        horizontalLayout_3->addWidget(lineEdit_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);

        pushButton = new QPushButton(normalcalc);
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

        tableWidget = new QTableWidget(normalcalc);
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

        tableView = new QTableView(normalcalc);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_2->addWidget(tableView);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(normalcalc);

        QMetaObject::connectSlotsByName(normalcalc);
    } // setupUi

    void retranslateUi(QWidget *normalcalc)
    {
        normalcalc->setWindowTitle(QApplication::translate("normalcalc", "Form", 0));
        label->setText(QApplication::translate("normalcalc", "\350\256\241\345\210\222\346\234\237\357\274\232", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("normalcalc", "2", 0)
         << QApplication::translate("normalcalc", "3", 0)
         << QApplication::translate("normalcalc", "4", 0)
         << QApplication::translate("normalcalc", "5", 0)
         << QApplication::translate("normalcalc", "6", 0)
         << QApplication::translate("normalcalc", "7", 0)
         << QApplication::translate("normalcalc", "8", 0)
         << QApplication::translate("normalcalc", "9", 0)
         << QApplication::translate("normalcalc", "10", 0)
        );
        label_3->setText(QApplication::translate("normalcalc", "\345\215\225\346\263\250\346\210\220\346\234\254\357\274\232", 0));
        radioButton->setText(QApplication::translate("normalcalc", "\346\224\266\347\233\212\346\257\224\347\216\207\357\274\232", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("normalcalc", "10", 0)
         << QApplication::translate("normalcalc", "20", 0)
         << QApplication::translate("normalcalc", "30", 0)
         << QApplication::translate("normalcalc", "40", 0)
         << QApplication::translate("normalcalc", "50", 0)
         << QApplication::translate("normalcalc", "60", 0)
         << QApplication::translate("normalcalc", "70", 0)
         << QApplication::translate("normalcalc", "80", 0)
         << QApplication::translate("normalcalc", "90", 0)
        );
        label_7->setText(QApplication::translate("normalcalc", "%", 0));
        label_2->setText(QApplication::translate("normalcalc", "\346\263\250\346\225\260\357\274\232", 0));
        label_4->setText(QApplication::translate("normalcalc", "\344\270\255\345\245\226\345\245\226\351\207\221\357\274\232", 0));
        radioButton_2->setText(QApplication::translate("normalcalc", "\345\233\272\345\256\232\346\224\266\347\233\212\357\274\232", 0));
        radioButton_3->setText(QApplication::translate("normalcalc", "\347\264\257\345\212\240\345\210\251\346\266\246", 0));
        label_5->setText(QApplication::translate("normalcalc", "\350\265\267\346\255\245", 0));
        label_6->setText(QApplication::translate("normalcalc", "\347\264\257\350\277\233", 0));
        pushButton->setText(QApplication::translate("normalcalc", "\350\256\241\347\256\227\345\200\215\346\212\225", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("normalcalc", "\346\234\237\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("normalcalc", "\345\200\215\346\225\260", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("normalcalc", "\345\275\223\346\234\237\346\212\225\345\205\245", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("normalcalc", "\347\264\257\350\256\241\346\212\225\345\205\245", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("normalcalc", "\346\224\266\347\233\212", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("normalcalc", "\345\210\251\346\266\246", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("normalcalc", "\346\224\266\347\233\212\347\216\207%", 0));
    } // retranslateUi

};

namespace Ui {
    class normalcalc: public Ui_normalcalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NORMALCALC_H

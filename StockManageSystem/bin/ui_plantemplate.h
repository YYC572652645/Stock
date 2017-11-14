/********************************************************************************
** Form generated from reading UI file 'plantemplate.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANTEMPLATE_H
#define UI_PLANTEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_plantemplate
{
public:
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_11;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_13;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_14;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_15;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_16;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_17;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_5;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *plantemplate)
    {
        if (plantemplate->objectName().isEmpty())
            plantemplate->setObjectName(QStringLiteral("plantemplate"));
        plantemplate->resize(802, 500);
        verticalLayout_6 = new QVBoxLayout(plantemplate);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tableWidget = new QTableWidget(plantemplate);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setMaximumSize(QSize(220, 200));

        verticalLayout_2->addWidget(tableWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(plantemplate);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("color:darkred;"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(plantemplate);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(plantemplate);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("color:red;"));

        verticalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        label_4 = new QLabel(plantemplate);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(plantemplate);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(plantemplate);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(plantemplate);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(plantemplate);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);

        label_9 = new QLabel(plantemplate);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("color:red;"));

        verticalLayout->addWidget(label_9);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_11->addLayout(verticalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_10 = new QLabel(plantemplate);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(100, 0));
        label_10->setStyleSheet(QLatin1String(" border: 0.5px solid;\n"
"border-color: gray;"));
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_10);

        lineEdit = new QLineEdit(plantemplate);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 30));
        lineEdit->setStyleSheet(QLatin1String(" border: 0.5px solid;\n"
"border-color: gray;"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_11 = new QLabel(plantemplate);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(100, 0));
        label_11->setStyleSheet(QLatin1String(" border: 0.5px solid;\n"
"border-color: gray;"));
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_11);

        lineEdit_2 = new QLineEdit(plantemplate);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 30));
        lineEdit_2->setStyleSheet(QLatin1String(" border: 0.5px solid;\n"
"border-color: gray;"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_12 = new QLabel(plantemplate);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(100, 0));
        label_12->setStyleSheet(QLatin1String(" border: 0.5px solid;\n"
"border-color: gray;"));
        label_12->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_12);

        lineEdit_3 = new QLineEdit(plantemplate);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(0, 30));
        lineEdit_3->setStyleSheet(QLatin1String(" border: 0.5px solid;\n"
"border-color: gray;"));

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_13 = new QLabel(plantemplate);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(100, 0));
        label_13->setStyleSheet(QLatin1String(" border: 0.5px solid;\n"
"border-color: gray;"));
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_13);

        lineEdit_4 = new QLineEdit(plantemplate);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(0, 30));
        lineEdit_4->setStyleSheet(QLatin1String(" border: 0.5px solid;\n"
"border-color: gray;"));

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_14 = new QLabel(plantemplate);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(100, 0));
        label_14->setStyleSheet(QLatin1String(" border: 0.5px solid;\n"
"border-color: gray;"));
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_14);

        lineEdit_5 = new QLineEdit(plantemplate);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(0, 30));
        lineEdit_5->setStyleSheet(QLatin1String(" border: 0.5px solid;\n"
"border-color: gray;"));

        horizontalLayout_5->addWidget(lineEdit_5);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_15 = new QLabel(plantemplate);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(100, 0));
        label_15->setStyleSheet(QLatin1String(" border: 0.5px solid;\n"
"border-color: gray;"));
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_15);

        lineEdit_6 = new QLineEdit(plantemplate);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setMinimumSize(QSize(0, 30));
        lineEdit_6->setStyleSheet(QLatin1String(" border: 0.5px solid;\n"
"border-color: gray;"));

        horizontalLayout_6->addWidget(lineEdit_6);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_16 = new QLabel(plantemplate);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(100, 0));
        label_16->setStyleSheet(QLatin1String(" border: 0.5px solid;\n"
"border-color: gray;"));
        label_16->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_16);

        textEdit = new QTextEdit(plantemplate);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setStyleSheet(QLatin1String(" border: 0.5px solid;\n"
"border-color: gray;"));

        horizontalLayout_8->addWidget(textEdit);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_17 = new QLabel(plantemplate);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(100, 0));
        label_17->setStyleSheet(QLatin1String(" border: 0.5px solid;\n"
"border-color: gray;"));
        label_17->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_17);

        frame = new QFrame(plantemplate);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
"border: 0.5px solid;\n"
"border-color: gray;\n"
"}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        checkBox = new QCheckBox(frame);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_7->addWidget(checkBox);

        checkBox_2 = new QCheckBox(frame);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout_7->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(frame);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        horizontalLayout_7->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(frame);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        horizontalLayout_7->addWidget(checkBox_4);

        checkBox_6 = new QCheckBox(frame);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));

        horizontalLayout_7->addWidget(checkBox_6);

        checkBox_5 = new QCheckBox(frame);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));

        horizontalLayout_7->addWidget(checkBox_5);


        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout_9->addWidget(frame);


        verticalLayout_5->addLayout(horizontalLayout_9);

        frame_2 = new QFrame(plantemplate);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setStyleSheet(QLatin1String("QFrame{\n"
"\n"
" border: 0.5px solid;\n"
"border-color: gray;}\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_10->addWidget(pushButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);

        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_10->addWidget(pushButton_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_10);


        verticalLayout_5->addWidget(frame_2);


        horizontalLayout_11->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout_11);


        retranslateUi(plantemplate);

        QMetaObject::connectSlotsByName(plantemplate);
    } // setupUi

    void retranslateUi(QWidget *plantemplate)
    {
        plantemplate->setWindowTitle(QApplication::translate("plantemplate", "Form", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("plantemplate", "\346\250\241\346\235\277\345\220\215\347\247\260", 0));
        label->setText(QApplication::translate("plantemplate", "\346\263\250\357\274\232\346\250\241\346\235\277\345\256\241\346\240\270\351\200\232\350\277\207\345\220\216\345\217\257\344\273\245\344\275\277\347\224\250", 0));
        label_2->setText(QApplication::translate("plantemplate", "\346\234\252\345\256\241\346\240\270\351\200\232\350\277\207\345\217\252\350\203\275\345\234\250\345\210\206\344\272\253\345\217\267\347\240\201\344\270\255\344\275\277\347\224\250\351\273\230\350\256\244\346\250\241\346\235\277", 0));
        label_3->setText(QApplication::translate("plantemplate", "\351\273\230\350\256\244\346\250\241\346\235\277\346\227\240\346\263\225\344\277\256\346\224\271\357\274\214\345\217\252\346\234\211\346\226\260\345\242\236\347\232\204\346\211\215\345\217\257\344\273\245\344\277\256\346\224\271", 0));
        label_4->setText(QApplication::translate("plantemplate", "\347\246\201\346\255\242\351\241\271\347\233\256\357\274\232", 0));
        label_5->setText(QApplication::translate("plantemplate", "1.\350\277\235\345\217\215\345\233\275\345\256\266\346\263\225\345\276\213\346\263\225\350\247\204", 0));
        label_6->setText(QApplication::translate("plantemplate", "2.\345\207\272\347\216\260\344\273\273\344\275\225\345\271\263\345\217\260\345\220\215\347\247\260", 0));
        label_7->setText(QApplication::translate("plantemplate", "3.\344\273\273\344\275\225\347\275\221\351\241\265\351\223\276\346\216\245", 0));
        label_8->setText(QApplication::translate("plantemplate", "4.\345\270\246\346\234\211\346\254\272\350\257\210\346\200\247\350\264\250\347\232\204\345\255\227\346\240\267", 0));
        label_9->setText(QApplication::translate("plantemplate", "\344\270\200\347\273\217\345\217\221\347\216\260\350\277\235\350\247\204\357\274\214\347\253\213\345\210\273\345\201\232\345\210\240\345\217\267\345\244\204\347\220\206\357\274\201", 0));
        label_10->setText(QApplication::translate("plantemplate", "\346\250\241\346\235\277ID", 0));
        label_11->setText(QApplication::translate("plantemplate", "\346\250\241\346\235\277\345\220\215\347\247\260", 0));
        label_12->setText(QApplication::translate("plantemplate", "\344\270\252\346\200\247\347\255\276\345\220\215", 0));
        label_13->setText(QApplication::translate("plantemplate", "\350\277\233\350\241\214\344\270\255", 0));
        label_14->setText(QApplication::translate("plantemplate", "\344\270\255", 0));
        label_15->setText(QApplication::translate("plantemplate", "\346\214\202", 0));
        label_16->setText(QApplication::translate("plantemplate", "\345\244\207\346\263\250", 0));
        label_17->setText(QApplication::translate("plantemplate", "\346\230\276\347\244\272", 0));
        checkBox->setText(QApplication::translate("plantemplate", "\350\256\241\345\210\222\345\234\250\344\270\212", 0));
        checkBox_2->setText(QApplication::translate("plantemplate", "\347\233\210\344\272\217", 0));
        checkBox_3->setText(QApplication::translate("plantemplate", "\346\210\220\345\212\237\347\216\207", 0));
        checkBox_4->setText(QApplication::translate("plantemplate", "\345\200\215\346\225\260", 0));
        checkBox_6->setText(QApplication::translate("plantemplate", "\344\270\255\345\245\226\346\234\237\346\225\260", 0));
        checkBox_5->setText(QApplication::translate("plantemplate", "\344\270\255\345\245\226\344\275\215\346\225\260", 0));
        pushButton->setText(QApplication::translate("plantemplate", "\345\242\236\345\212\240\346\250\241\346\235\277", 0));
        pushButton_2->setText(QApplication::translate("plantemplate", "\344\277\235\345\255\230\346\250\241\346\235\277", 0));
    } // retranslateUi

};

namespace Ui {
    class plantemplate: public Ui_plantemplate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANTEMPLATE_H

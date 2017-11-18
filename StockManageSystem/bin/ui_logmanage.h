/********************************************************************************
** Form generated from reading UI file 'logmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGMANAGE_H
#define UI_LOGMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_logmanage
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QDateTimeEdit *dateTimeEditBeginTime;
    QLabel *label;
    QDateTimeEdit *dateTimeEditEndTime;
    QLineEdit *lineEditText;
    QPushButton *pushButtonSelect;
    QPushButton *pushButtonDelete;
    QTableWidget *tableWidget;

    void setupUi(QWidget *logmanage)
    {
        if (logmanage->objectName().isEmpty())
            logmanage->setObjectName(QStringLiteral("logmanage"));
        logmanage->resize(770, 582);
        verticalLayout_4 = new QVBoxLayout(logmanage);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, -1, 6, -1);
        frame = new QFrame(logmanage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 9, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(80, 25));

        horizontalLayout->addWidget(comboBox);

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

        lineEditText = new QLineEdit(frame);
        lineEditText->setObjectName(QStringLiteral("lineEditText"));
        lineEditText->setMinimumSize(QSize(100, 25));

        horizontalLayout->addWidget(lineEditText);

        pushButtonSelect = new QPushButton(frame);
        pushButtonSelect->setObjectName(QStringLiteral("pushButtonSelect"));
        pushButtonSelect->setMinimumSize(QSize(0, 25));
        pushButtonSelect->setMaximumSize(QSize(100, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/image/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSelect->setIcon(icon);
        pushButtonSelect->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButtonSelect);

        pushButtonDelete = new QPushButton(frame);
        pushButtonDelete->setObjectName(QStringLiteral("pushButtonDelete"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/image/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonDelete->setIcon(icon1);
        pushButtonDelete->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(pushButtonDelete);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(frame);

        tableWidget = new QTableWidget(logmanage);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout_2->addWidget(tableWidget);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(logmanage);

        QMetaObject::connectSlotsByName(logmanage);
    } // setupUi

    void retranslateUi(QWidget *logmanage)
    {
        logmanage->setWindowTitle(QApplication::translate("logmanage", "Form", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("logmanage", "\346\227\266\351\227\264\346\237\245\350\257\242", 0)
         << QApplication::translate("logmanage", "\345\206\205\345\256\271\346\237\245\350\257\242", 0)
        );
        dateTimeEditBeginTime->setDisplayFormat(QApplication::translate("logmanage", "yyyy-MM-dd hh:mm:ss", 0));
        label->setText(QApplication::translate("logmanage", "\350\207\263", 0));
        dateTimeEditEndTime->setDisplayFormat(QApplication::translate("logmanage", "yyyy-MM-dd hh:mm:ss", 0));
        pushButtonSelect->setText(QApplication::translate("logmanage", "  \346\237\245\350\257\242", 0));
        pushButtonDelete->setText(QApplication::translate("logmanage", "  \345\210\240\351\231\244", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("logmanage", "\347\224\250\346\210\267\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("logmanage", "\350\201\212\345\244\251\345\206\205\345\256\271", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("logmanage", "\346\227\266\351\227\264", 0));
    } // retranslateUi

};

namespace Ui {
    class logmanage: public Ui_logmanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGMANAGE_H

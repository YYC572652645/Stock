/********************************************************************************
** Form generated from reading UI file 'registeruser.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERUSER_H
#define UI_REGISTERUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registeruser
{
public:
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditUserName;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEditNickName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditPassword;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditCofPassWord;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEditEmail;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEditPhoneNumber;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOk;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonCancel;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *registeruser)
    {
        if (registeruser->objectName().isEmpty())
            registeruser->setObjectName(QStringLiteral("registeruser"));
        registeruser->resize(464, 310);
        verticalLayout_4 = new QVBoxLayout(registeruser);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer_5);

        horizontalSpacer_4 = new QSpacerItem(40, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(registeruser);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(70, 0));
        label->setMaximumSize(QSize(16777215, 70));

        horizontalLayout->addWidget(label);

        lineEditUserName = new QLineEdit(registeruser);
        lineEditUserName->setObjectName(QStringLiteral("lineEditUserName"));

        horizontalLayout->addWidget(lineEditUserName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(registeruser);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(70, 0));
        label_5->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_5->addWidget(label_5);

        lineEditNickName = new QLineEdit(registeruser);
        lineEditNickName->setObjectName(QStringLiteral("lineEditNickName"));

        horizontalLayout_5->addWidget(lineEditNickName);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(registeruser);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(70, 0));
        label_2->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_2->addWidget(label_2);

        lineEditPassword = new QLineEdit(registeruser);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));

        horizontalLayout_2->addWidget(lineEditPassword);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(registeruser);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(70, 0));
        label_3->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_3->addWidget(label_3);

        lineEditCofPassWord = new QLineEdit(registeruser);
        lineEditCofPassWord->setObjectName(QStringLiteral("lineEditCofPassWord"));

        horizontalLayout_3->addWidget(lineEditCofPassWord);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(registeruser);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(70, 0));
        label_4->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_4->addWidget(label_4);

        lineEditEmail = new QLineEdit(registeruser);
        lineEditEmail->setObjectName(QStringLiteral("lineEditEmail"));

        horizontalLayout_4->addWidget(lineEditEmail);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(registeruser);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(70, 0));
        label_6->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_6->addWidget(label_6);

        lineEditPhoneNumber = new QLineEdit(registeruser);
        lineEditPhoneNumber->setObjectName(QStringLiteral("lineEditPhoneNumber"));

        horizontalLayout_6->addWidget(lineEditPhoneNumber);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_8 = new QLabel(registeruser);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QLatin1String("font-weight:bold;\n"
"font-size:14px;"));

        verticalLayout_2->addWidget(label_8);

        label_10 = new QLabel(registeruser);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_2->addWidget(label_10);

        label_9 = new QLabel(registeruser);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_2->addWidget(label_9);


        horizontalLayout_7->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_7);

        label_7 = new QLabel(registeruser);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("color:red;"));

        verticalLayout_3->addWidget(label_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        pushButtonOk = new QPushButton(registeruser);
        pushButtonOk->setObjectName(QStringLiteral("pushButtonOk"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/image/Success.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonOk->setIcon(icon);

        horizontalLayout_8->addWidget(pushButtonOk);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        pushButtonCancel = new QPushButton(registeruser);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/image/Hand.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonCancel->setIcon(icon1);

        horizontalLayout_8->addWidget(pushButtonCancel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_8);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(registeruser);

        QMetaObject::connectSlotsByName(registeruser);
    } // setupUi

    void retranslateUi(QWidget *registeruser)
    {
        registeruser->setWindowTitle(QApplication::translate("registeruser", "Form", 0));
        label->setText(QApplication::translate("registeruser", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        label_5->setText(QApplication::translate("registeruser", "\346\230\265\347\247\260\357\274\232", 0));
        label_2->setText(QApplication::translate("registeruser", "\345\257\206\347\240\201\357\274\232", 0));
        label_3->setText(QApplication::translate("registeruser", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", 0));
        label_4->setText(QApplication::translate("registeruser", "QQ\351\202\256\347\256\261\357\274\232", 0));
        label_6->setText(QApplication::translate("registeruser", "\346\211\213\346\234\272\345\217\267\347\240\201\357\274\232", 0));
        label_8->setText(QApplication::translate("registeruser", "\347\224\250\346\210\267\346\263\250\345\206\214\351\241\273\347\237\245\357\274\232", 0));
        label_10->setText(QApplication::translate("registeruser", "1.\346\230\265\347\247\260\346\263\250\345\206\214\345\220\216\344\270\215\345\217\257\346\233\264\346\224\271\357\274\201", 0));
        label_9->setText(QApplication::translate("registeruser", "2.\346\233\264\345\244\232\345\212\237\350\203\275\345\274\200\346\224\276\344\270\255\357\274\201", 0));
        label_7->setText(QApplication::translate("registeruser", "\350\257\264\346\230\216\357\274\232\346\230\265\347\247\260\344\270\272\344\272\272\345\267\245\350\256\241\345\210\222\347\232\204\345\220\215\347\247\260\357\274\214\346\263\250\345\206\214\345\220\216\346\227\240\346\263\225\344\277\256\346\224\271\343\200\202\346\211\213\346\234\272\345\217\267\347\224\250\346\235\245\345\217\226\345\233\236\345\257\206\347\240\201\357\274\214\350\260\250\346\205\216\345\241\253\345\206\231\357\274\201", 0));
        pushButtonOk->setText(QApplication::translate("registeruser", "\347\241\256\350\256\244\346\263\250\345\206\214", 0));
        pushButtonCancel->setText(QApplication::translate("registeruser", "\345\205\263\351\227\255\346\263\250\345\206\214", 0));
    } // retranslateUi

};

namespace Ui {
    class registeruser: public Ui_registeruser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERUSER_H

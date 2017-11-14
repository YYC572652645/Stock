/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <ActiveQt/QAxWidget>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_homepage
{
public:
    QVBoxLayout *verticalLayout;
    QAxWidget *axWidget;

    void setupUi(QWidget *homepage)
    {
        if (homepage->objectName().isEmpty())
            homepage->setObjectName(QStringLiteral("homepage"));
        homepage->resize(400, 300);
        verticalLayout = new QVBoxLayout(homepage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        axWidget = new QAxWidget(homepage);
        axWidget->setObjectName(QStringLiteral("axWidget"));

        verticalLayout->addWidget(axWidget);


        retranslateUi(homepage);

        QMetaObject::connectSlotsByName(homepage);
    } // setupUi

    void retranslateUi(QWidget *homepage)
    {
        homepage->setWindowTitle(QApplication::translate("homepage", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class homepage: public Ui_homepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H

/********************************************************************************
** Form generated from reading UI file 'maincontent.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINCONTENT_H
#define UI_MAINCONTENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_maincontent
{
public:
    QAction *actionLogin;
    QAction *actionRegister;
    QAction *actionFogetPwd;
    QAction *actionChat;
    QAction *actionOutLogin;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *treeWidgetMenu;
    QTabWidget *tabWidgetContent;
    QToolBar *toolBar;

    void setupUi(QMainWindow *maincontent)
    {
        if (maincontent->objectName().isEmpty())
            maincontent->setObjectName(QStringLiteral("maincontent"));
        maincontent->setEnabled(true);
        maincontent->resize(800, 600);
        actionLogin = new QAction(maincontent);
        actionLogin->setObjectName(QStringLiteral("actionLogin"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/image/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLogin->setIcon(icon);
        actionRegister = new QAction(maincontent);
        actionRegister->setObjectName(QStringLiteral("actionRegister"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/image/register.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRegister->setIcon(icon1);
        actionFogetPwd = new QAction(maincontent);
        actionFogetPwd->setObjectName(QStringLiteral("actionFogetPwd"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/image/Hand.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFogetPwd->setIcon(icon2);
        actionChat = new QAction(maincontent);
        actionChat->setObjectName(QStringLiteral("actionChat"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/image/session.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChat->setIcon(icon3);
        actionOutLogin = new QAction(maincontent);
        actionOutLogin->setObjectName(QStringLiteral("actionOutLogin"));
        centralwidget = new QWidget(maincontent);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 6, -1, -1);
        treeWidgetMenu = new QTreeWidget(centralwidget);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/image/image/app.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/image/image/floder.png"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/image/image/tc.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/image/image/60000958.png"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/image/image/MixFileType.png"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/image/image/v009_24.png"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/image/image/money.png"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/image/image/jskt_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/image/image/calc.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem->setIcon(0, icon4);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem1->setIcon(0, icon5);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem2->setIcon(0, icon6);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem3->setIcon(0, icon6);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem4->setIcon(0, icon6);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem5->setIcon(0, icon6);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem6->setIcon(0, icon6);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem7->setIcon(0, icon5);
        QTreeWidgetItem *__qtreewidgetitem8 = new QTreeWidgetItem(__qtreewidgetitem7);
        __qtreewidgetitem8->setIcon(0, icon6);
        QTreeWidgetItem *__qtreewidgetitem9 = new QTreeWidgetItem(__qtreewidgetitem7);
        __qtreewidgetitem9->setIcon(0, icon6);
        QTreeWidgetItem *__qtreewidgetitem10 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem10->setIcon(0, icon7);
        QTreeWidgetItem *__qtreewidgetitem11 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem11->setIcon(0, icon8);
        QTreeWidgetItem *__qtreewidgetitem12 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem12->setIcon(0, icon9);
        QTreeWidgetItem *__qtreewidgetitem13 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem13->setIcon(0, icon10);
        QTreeWidgetItem *__qtreewidgetitem14 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem14->setIcon(0, icon10);
        QTreeWidgetItem *__qtreewidgetitem15 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem15->setIcon(0, icon10);
        QTreeWidgetItem *__qtreewidgetitem16 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem16->setIcon(0, icon10);
        QTreeWidgetItem *__qtreewidgetitem17 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem17->setIcon(0, icon11);
        QTreeWidgetItem *__qtreewidgetitem18 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem18->setIcon(0, icon11);
        QTreeWidgetItem *__qtreewidgetitem19 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem19->setIcon(0, icon12);
        QTreeWidgetItem *__qtreewidgetitem20 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem20->setIcon(0, icon12);
        treeWidgetMenu->setObjectName(QStringLiteral("treeWidgetMenu"));
        treeWidgetMenu->setMinimumSize(QSize(180, 0));
        treeWidgetMenu->setMaximumSize(QSize(180, 16777215));

        horizontalLayout->addWidget(treeWidgetMenu);

        tabWidgetContent = new QTabWidget(centralwidget);
        tabWidgetContent->setObjectName(QStringLiteral("tabWidgetContent"));

        horizontalLayout->addWidget(tabWidgetContent);


        verticalLayout->addLayout(horizontalLayout);

        maincontent->setCentralWidget(centralwidget);
        toolBar = new QToolBar(maincontent);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setEnabled(true);
        toolBar->setMinimumSize(QSize(0, 0));
        toolBar->setMovable(false);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        maincontent->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(maincontent);

        QMetaObject::connectSlotsByName(maincontent);
    } // setupUi

    void retranslateUi(QMainWindow *maincontent)
    {
        maincontent->setWindowTitle(QApplication::translate("maincontent", "MainWindow", 0));
        actionLogin->setText(QApplication::translate("maincontent", "\347\253\213\345\210\273\347\231\273\345\275\225", 0));
#ifndef QT_NO_TOOLTIP
        actionLogin->setToolTip(QApplication::translate("maincontent", "<html><head/><body><font color=\"#123456\">\347\253\213\345\210\273\347\231\273\345\275\225</font></body></html>\n"
"", 0));
#endif // QT_NO_TOOLTIP
        actionRegister->setText(QApplication::translate("maincontent", "\347\224\250\346\210\267\346\263\250\345\206\214", 0));
#ifndef QT_NO_TOOLTIP
        actionRegister->setToolTip(QApplication::translate("maincontent", "<html><head/><body><font color=\"#123456\">\347\224\250\346\210\267\346\263\250\345\206\214</font></body></html>\n"
"", 0));
#endif // QT_NO_TOOLTIP
        actionFogetPwd->setText(QApplication::translate("maincontent", "\345\277\230\350\256\260\345\257\206\347\240\201", 0));
#ifndef QT_NO_TOOLTIP
        actionFogetPwd->setToolTip(QApplication::translate("maincontent", "<html><head/><body><font color=\"#123456\">\345\277\230\350\256\260\345\257\206\347\240\201</font></body></html>\n"
"", 0));
#endif // QT_NO_TOOLTIP
        actionChat->setText(QApplication::translate("maincontent", "\350\201\212\345\244\251\347\252\227\345\217\243", 0));
#ifndef QT_NO_TOOLTIP
        actionChat->setToolTip(QApplication::translate("maincontent", "<html><head/><body><font color=\"#123456\">\350\201\212\345\244\251\347\252\227\345\217\243</font></body></html>\n"
"", 0));
#endif // QT_NO_TOOLTIP
        actionOutLogin->setText(QApplication::translate("maincontent", "\351\200\200\345\207\272\347\231\273\345\275\225", 0));
#ifndef QT_NO_TOOLTIP
        actionOutLogin->setToolTip(QApplication::translate("maincontent", "\351\200\200\345\207\272\347\231\273\345\275\225", 0));
#endif // QT_NO_TOOLTIP
        QTreeWidgetItem *___qtreewidgetitem = treeWidgetMenu->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("maincontent", "\350\241\250\345\244\264", 0));

        const bool __sortingEnabled = treeWidgetMenu->isSortingEnabled();
        treeWidgetMenu->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidgetMenu->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("maincontent", "\350\202\241\347\245\250\345\210\206\346\236\220\351\246\226\351\241\265", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidgetMenu->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("maincontent", "\347\233\264\351\200\211\345\217\267\347\240\201\351\252\214\350\257\201", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(0, QApplication::translate("maincontent", "\345\256\232\344\275\215\350\203\206", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem2->child(1);
        ___qtreewidgetitem4->setText(0, QApplication::translate("maincontent", "\344\272\214\346\230\237\347\233\264\351\200\211", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem2->child(2);
        ___qtreewidgetitem5->setText(0, QApplication::translate("maincontent", "\344\270\211\346\230\237\347\233\264\351\200\211", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem2->child(3);
        ___qtreewidgetitem6->setText(0, QApplication::translate("maincontent", "\345\233\233\346\230\237\347\233\264\351\200\211", 0));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem2->child(4);
        ___qtreewidgetitem7->setText(0, QApplication::translate("maincontent", "\344\272\224\346\230\237\347\233\264\351\200\211", 0));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidgetMenu->topLevelItem(2);
        ___qtreewidgetitem8->setText(0, QApplication::translate("maincontent", "\346\267\267\351\200\211\345\217\267\347\240\201\351\252\214\350\257\201", 0));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem8->child(0);
        ___qtreewidgetitem9->setText(0, QApplication::translate("maincontent", "\344\272\214\346\230\237\346\267\267\351\200\211", 0));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem8->child(1);
        ___qtreewidgetitem10->setText(0, QApplication::translate("maincontent", "\344\270\211\346\230\237\346\267\267\351\200\211", 0));
        QTreeWidgetItem *___qtreewidgetitem11 = treeWidgetMenu->topLevelItem(3);
        ___qtreewidgetitem11->setText(0, QApplication::translate("maincontent", "\350\256\241\345\210\222\346\250\241\346\235\277\350\256\276\347\275\256", 0));
        QTreeWidgetItem *___qtreewidgetitem12 = treeWidgetMenu->topLevelItem(4);
        ___qtreewidgetitem12->setText(0, QApplication::translate("maincontent", "\344\272\272\345\267\245\350\256\241\345\210\222\345\271\263\345\217\260", 0));
        QTreeWidgetItem *___qtreewidgetitem13 = treeWidgetMenu->topLevelItem(5);
        ___qtreewidgetitem13->setText(0, QApplication::translate("maincontent", "\345\244\247\345\272\225\351\273\204\351\207\221\345\210\206\345\211\262", 0));
        QTreeWidgetItem *___qtreewidgetitem14 = treeWidgetMenu->topLevelItem(6);
        ___qtreewidgetitem14->setText(0, QApplication::translate("maincontent", "\346\227\266\346\227\266\345\275\251\344\272\214\346\230\237\347\274\251\346\260\264", 0));
        QTreeWidgetItem *___qtreewidgetitem15 = treeWidgetMenu->topLevelItem(7);
        ___qtreewidgetitem15->setText(0, QApplication::translate("maincontent", "\346\227\266\346\227\266\345\275\251\344\270\211\346\230\237\347\274\251\346\260\264", 0));
        QTreeWidgetItem *___qtreewidgetitem16 = treeWidgetMenu->topLevelItem(8);
        ___qtreewidgetitem16->setText(0, QApplication::translate("maincontent", "\346\227\266\346\227\266\345\275\251\345\233\233\346\230\237\347\274\251\346\260\264", 0));
        QTreeWidgetItem *___qtreewidgetitem17 = treeWidgetMenu->topLevelItem(9);
        ___qtreewidgetitem17->setText(0, QApplication::translate("maincontent", "\346\227\266\346\227\266\345\275\251\344\272\224\346\230\237\347\274\251\346\260\264", 0));
        QTreeWidgetItem *___qtreewidgetitem18 = treeWidgetMenu->topLevelItem(10);
        ___qtreewidgetitem18->setText(0, QApplication::translate("maincontent", "\344\270\207\350\203\275\346\213\274\346\216\245\345\267\245\345\205\267", 0));
        QTreeWidgetItem *___qtreewidgetitem19 = treeWidgetMenu->topLevelItem(11);
        ___qtreewidgetitem19->setText(0, QApplication::translate("maincontent", "\345\244\247\345\272\225\351\252\214\350\257\201\345\267\245\345\205\267", 0));
        QTreeWidgetItem *___qtreewidgetitem20 = treeWidgetMenu->topLevelItem(12);
        ___qtreewidgetitem20->setText(0, QApplication::translate("maincontent", "\345\270\270\350\247\204\345\200\215\346\212\225\350\256\241\347\256\227", 0));
        QTreeWidgetItem *___qtreewidgetitem21 = treeWidgetMenu->topLevelItem(13);
        ___qtreewidgetitem21->setText(0, QApplication::translate("maincontent", "\346\216\250\346\263\242\345\200\215\346\212\225\350\256\241\347\256\227", 0));
        treeWidgetMenu->setSortingEnabled(__sortingEnabled);

        toolBar->setWindowTitle(QApplication::translate("maincontent", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class maincontent: public Ui_maincontent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINCONTENT_H

#include "mainwindow/mainwindow.h"
#include <QApplication>
#include "globaldef.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    LOADQSS(GLOBALDEF::QSSPATH);
    w.show();

    return a.exec();
}

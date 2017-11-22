#include "mainwindow/mainwindow.h"
#include <QApplication>
#include "globaldef.h"
#include "httpclient/httpclient.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    HttpClient h;

    LOADQSS(GLOBALDEF::QSSPATH);
    w.show();

    return a.exec();
}

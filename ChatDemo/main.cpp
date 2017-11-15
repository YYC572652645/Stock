#include "chattogether/chattogether.h"
#include <QApplication>
#include "database/database.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CHATTOGETHER->show();

    return a.exec();
}

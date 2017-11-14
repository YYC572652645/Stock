#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QWidget>

namespace Ui {
class homepage;
}

class HomePage : public QWidget
{
    Q_OBJECT

public:
    explicit HomePage(QWidget *parent = 0);
    ~HomePage();

    void showWeb(QString webUrl);

private:
    Ui::homepage *ui;
};

#endif // HOMEPAGE_H

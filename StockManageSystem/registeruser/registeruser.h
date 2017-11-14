#ifndef REGISTERUSER_H
#define REGISTERUSER_H

#include <QWidget>
#include <QResizeEvent>
#include "titlebar/titlebar.h"

namespace Ui {
class registeruser;
}

class RegisterUser : public QWidget
{
    Q_OBJECT

public:
    explicit RegisterUser(QWidget *parent = 0);
    ~RegisterUser();

private:
    Ui::registeruser *ui;

    TitleBar *titleBar ;

    void initControl();
    void resizeEvent(QResizeEvent *event);
};

#endif // REGISTERUSER_H

#ifndef GODLENSECTION_H
#define GODLENSECTION_H

#include <QWidget>
#include "titlebar/titlebar.h"
#include <QResizeEvent>

namespace Ui {
class godlensection;
}

class GodlenSection : public QWidget
{
    Q_OBJECT

public:
    explicit GodlenSection(QWidget *parent = 0);
    ~GodlenSection();

private:
    Ui::godlensection *ui;
    TitleBar *titleBar ;


    void initControl();
    void resizeEvent(QResizeEvent *event);
};

#endif // GODLENSECTION_H

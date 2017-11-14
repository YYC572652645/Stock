#ifndef UVSLSPLIC_H
#define UVSLSPLIC_H

#include <QWidget>
#include <QResizeEvent>
#include "globaldef.h"
#include "titlebar/titlebar.h"

namespace Ui {
class uvslsplic;
}

class UvslSplic : public QWidget
{
    Q_OBJECT

public:
    explicit UvslSplic(QWidget *parent = 0);
    ~UvslSplic();

private:
    Ui::uvslsplic *ui;

    TitleBar *titleBar ;


    void initControl();
    void resizeEvent(QResizeEvent *event);
};

#endif // UVSLSPLIC_H

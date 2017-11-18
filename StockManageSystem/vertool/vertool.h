#ifndef VERTOOL_H
#define VERTOOL_H

#include <QWidget>
#include "titlebar/titlebar.h"
#include <QResizeEvent>

namespace Ui {
class vertool;
}

class VerTool : public QWidget
{
    Q_OBJECT

public:
    explicit VerTool(QWidget *parent = 0);
    ~VerTool();
    void showWidget();

private:
    Ui::vertool *ui;

    TitleBar *titleBar ;

    void initControl();
    void resizeEvent(QResizeEvent *event);
};

#endif // VERTOOL_H

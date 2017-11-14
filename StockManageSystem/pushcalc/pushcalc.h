#ifndef PUSHCALC_H
#define PUSHCALC_H

#include <QWidget>

namespace Ui {
class pushcalc;
}

class PushCalc : public QWidget
{
    Q_OBJECT

public:
    explicit PushCalc(QWidget *parent = 0);
    ~PushCalc();

private:
    Ui::pushcalc *ui;
};

#endif // PUSHCALC_H

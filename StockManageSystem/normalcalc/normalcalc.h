#ifndef NORMALCALC_H
#define NORMALCALC_H

#include <QWidget>

namespace Ui {
class normalcalc;
}

class NormalCalc : public QWidget
{
    Q_OBJECT

public:
    explicit NormalCalc(QWidget *parent = 0);
    ~NormalCalc();

private:
    Ui::normalcalc *ui;
};

#endif // NORMALCALC_H

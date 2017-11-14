#ifndef PEOPLEPLAN_H
#define PEOPLEPLAN_H

#include <QWidget>

namespace Ui {
class peopleplan;
}

class PeoplePlan : public QWidget
{
    Q_OBJECT

public:
    explicit PeoplePlan(QWidget *parent = 0);
    ~PeoplePlan();

private:
    Ui::peopleplan *ui;
};

#endif // PEOPLEPLAN_H

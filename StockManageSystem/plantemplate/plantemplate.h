#ifndef PLANTEMPLATE_H
#define PLANTEMPLATE_H

#include <QWidget>

namespace Ui {
class plantemplate;
}

class PlanTemplate : public QWidget
{
    Q_OBJECT

public:
    explicit PlanTemplate(QWidget *parent = 0);
    ~PlanTemplate();

private:
    Ui::plantemplate *ui;
};

#endif // PLANTEMPLATE_H

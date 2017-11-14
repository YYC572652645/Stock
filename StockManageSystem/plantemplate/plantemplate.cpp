#include "plantemplate.h"
#include "ui_plantemplate.h"

PlanTemplate::PlanTemplate(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::plantemplate)
{
    ui->setupUi(this);
}

PlanTemplate::~PlanTemplate()
{
    delete ui;
}

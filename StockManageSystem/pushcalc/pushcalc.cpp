#include "pushcalc.h"
#include "ui_pushcalc.h"

PushCalc::PushCalc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pushcalc)
{
    ui->setupUi(this);
}

PushCalc::~PushCalc()
{
    delete ui;
}

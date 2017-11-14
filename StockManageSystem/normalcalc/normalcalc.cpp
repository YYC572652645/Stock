#include "normalcalc.h"
#include "ui_normalcalc.h"

NormalCalc::NormalCalc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::normalcalc)
{
    ui->setupUi(this);
}

NormalCalc::~NormalCalc()
{
    delete ui;
}

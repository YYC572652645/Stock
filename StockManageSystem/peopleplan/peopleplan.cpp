#include "peopleplan.h"
#include "ui_peopleplan.h"

PeoplePlan::PeoplePlan(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::peopleplan)
{
    ui->setupUi(this);

    ui->widgetFirst->setStyleSheet("border: 1px solid;border-color: gray;");
    ui->widgetSecond->setStyleSheet("border: 1px solid;border-color: gray;");
}

PeoplePlan::~PeoplePlan()
{
    delete ui;
}

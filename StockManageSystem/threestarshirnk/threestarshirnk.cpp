#include "threestarshirnk.h"
#include "ui_threestarshirnk.h"

ThreeStarShrink::ThreeStarShrink(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::threestarshirnk)
{
    ui->setupUi(this);
}

ThreeStarShrink::~ThreeStarShrink()
{
    delete ui;
}

#include "twostarshrink.h"
#include "ui_twostarshrink.h"

TwoStarShrink::TwoStarShrink(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::twostarshrink)
{
    ui->setupUi(this);
}

TwoStarShrink::~TwoStarShrink()
{
    delete ui;
}

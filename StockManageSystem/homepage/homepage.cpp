#include "homepage.h"
#include "ui_homepage.h"

HomePage::HomePage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::homepage)
{
    ui->setupUi(this);
}

HomePage::~HomePage()
{
    delete ui;
}

void HomePage::showWeb(QString webUrl)
{
    ui->axWidget->setControl(QString::fromUtf8("{8856F961-340A-11D0-A96B-00C04FD705A2}")); //设置插件为IE
    ui->axWidget->dynamicCall("Navigate(const QString&)", webUrl);     //调用参数
}

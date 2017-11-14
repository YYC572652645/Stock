#include "starchoose.h"
#include "ui_starchoose.h"
#include "globaldef.h"

StarChoose::StarChoose(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::starchoose)
{
    ui->setupUi(this);

    this->initControl();
}

StarChoose::~StarChoose()
{
    delete ui;
}


void StarChoose::initControl()
{
    frameList.append(ui->frameDWDan);
    frameList.append(ui->frameTwoStartZ);
    frameList.append(ui->frameThreeStartZ);
    frameList.append(ui->frameFourStartZ);
    frameList.append(ui->frameFiveStartZ);
    frameList.append(ui->frameTwoStartH);
    frameList.append(ui->frameThreeStartH);


    //设置单行选中
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setAlternatingRowColors(true);

    //纵向隐藏序号
    ui->tableWidget->verticalHeader()->setHidden(true);

    //设置为不可编辑
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);


    //设置表头点击禁止塌陷
    ui->tableWidget->horizontalHeader()->setHighlightSections(false);

    //设置点击表头排序
    ui->tableWidget->setSortingEnabled(true);

    //设置根据内容调整列宽
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void StarChoose::setHideType(int type)
{
    if(type >= frameList.size()) return;

    for(int i = 0; i < frameList.size(); i ++)
    {
        frameList.at(i)->setHidden(true);
        if(type == i) frameList.at(i)->show();
    }
}

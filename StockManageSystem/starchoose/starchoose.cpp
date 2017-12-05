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

    this->setTableWidget(ui->tableWidgetPut);
    this->setTableWidget(ui->tableWidgetPlan);

    //二星直选
    checkBoxTwoStarZ.append(ui->checkBoxTZQR);
    checkBoxTwoStarZ.append(ui->checkBoxTZHT);
    checkBoxTwoStarZ.append(ui->checkBoxTZWB);
    checkBoxTwoStarZ.append(ui->checkBoxTZWS);
    checkBoxTwoStarZ.append(ui->checkBoxTZWG);
    checkBoxTwoStarZ.append(ui->checkBoxTZQB);
    checkBoxTwoStarZ.append(ui->checkBoxTZQianShi);
    checkBoxTwoStarZ.append(ui->checkBoxTZQianGe);
    checkBoxTwoStarZ.append(ui->checkBoxTZBaiShi);
    checkBoxTwoStarZ.append(ui->checkBoxTZBaiGe);

    //三星直选
    checkBoxThreeStarZ.append(ui->checkBoxTZHouSan);
    checkBoxThreeStarZ.append(ui->checkBoxTZQianSan);
    checkBoxThreeStarZ.append(ui->checkBoxTZZhongSan);
    checkBoxThreeStarZ.append(ui->checkBoxTZWanQianShi);
    checkBoxThreeStarZ.append(ui->checkBoxTZWanQianGe);
    checkBoxThreeStarZ.append(ui->checkBoxTZWanBaiShi);
    checkBoxThreeStarZ.append(ui->checkBoxTZWanBaiGe);
    checkBoxThreeStarZ.append(ui->checkBoxTZWanShiGe);
    checkBoxThreeStarZ.append(ui->checkBoxQianBaiGe);
    checkBoxThreeStarZ.append(ui->checkBoxQianShiGe);

}

void StarChoose::setTableWidget(QTableWidget *tableWidget)
{

    //设置单行选中
    tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableWidget->setAlternatingRowColors(true);

    //纵向隐藏序号
    tableWidget->verticalHeader()->setHidden(true);

    //设置为不可编辑
    tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);


    //设置表头点击禁止塌陷
    tableWidget->horizontalHeader()->setHighlightSections(false);

    //设置点击表头排序
    tableWidget->setSortingEnabled(true);

    //设置根据内容调整列宽
    tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

/************************   设置隐藏            ********************/
void StarChoose::setHideType(int type)
{
    if(type >= frameList.size()) return;

    for(int i = 0; i < frameList.size(); i ++)
    {
        frameList.at(i)->setHidden(true);
        if(type == i) frameList.at(i)->show();

        if(type == DWDAN)
        {
            ui->textEditBetting->setHidden(true);
            ui->widgetGuts->show();
        }
        else
        {
            ui->widgetGuts->setHidden(true);
            ui->textEditBetting->show();
        }
    }
}


/************************   定位胆全            ********************/
void StarChoose::on_pushButtonDQuan_clicked()
{
    ui->checkBoxDWD->setChecked(true);
}


/************************   定位胆清            ********************/
void StarChoose::on_pushButtonDQing_clicked()
{
    ui->checkBoxDWD->setChecked(false);
}


/************************   定位胆反            ********************/
void StarChoose::on_pushButtonDFan_clicked()
{
    if(ui->checkBoxDWD->isChecked())
    {
        ui->checkBoxDWD->setChecked(false);
    }
    else
    {
        ui->checkBoxDWD->setChecked(true);
    }
}

/************************   二星直选全            ********************/
void StarChoose::on_pushButtonTZQuan_clicked()
{
    for(int i = 0; i < checkBoxTwoStarZ.size(); i ++)
    {
        checkBoxTwoStarZ.at(i)->setChecked(true);
    }
}

/************************   二星直选清            ********************/
void StarChoose::on_pushButtonTZQing_clicked()
{
    for(int i = 0; i < checkBoxTwoStarZ.size(); i ++)
    {
        checkBoxTwoStarZ.at(i)->setChecked(false);
    }
}

/************************   二星直选反            ********************/
void StarChoose::on_pushButtonTZFan_clicked()
{
    for(int i = 0; i < checkBoxTwoStarZ.size(); i ++)
    {
        if(checkBoxTwoStarZ.at(i)->isChecked())
        {
            checkBoxTwoStarZ.at(i)->setChecked(false);
        }
        else
        {
            checkBoxTwoStarZ.at(i)->setChecked(true);
        }
    }

}
/************************   三星直选全            ********************/
void StarChoose::on_pushButtonThreeZQuan_clicked()
{
    for(int i = 0; i < checkBoxThreeStarZ.size(); i ++)
    {
        checkBoxThreeStarZ.at(i)->setChecked(true);
    }
}

/************************   三星直选清            ********************/
void StarChoose::on_pushButtonThreeZQing_clicked()
{
    for(int i = 0; i < checkBoxThreeStarZ.size(); i ++)
    {
        checkBoxThreeStarZ.at(i)->setChecked(false);
    }
}

/************************   二星直选反            ********************/
void StarChoose::on_pushButtonThreeZFan_clicked()
{
    for(int i = 0; i < checkBoxThreeStarZ.size(); i ++)
    {
        if(checkBoxThreeStarZ.at(i)->isChecked())
        {
            checkBoxThreeStarZ.at(i)->setChecked(false);
        }
        else
        {
            checkBoxThreeStarZ.at(i)->setChecked(true);
        }
    }
}

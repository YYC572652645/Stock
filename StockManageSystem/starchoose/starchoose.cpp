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

    //四星直选
    checkBoxFourStarZ.append(ui->checkBoxFZqianSi);
    checkBoxFourStarZ.append(ui->checkBoxFZHouSi);
    checkBoxFourStarZ.append(ui->checkBoxFZWanQIanBaiGe);
    checkBoxFourStarZ.append(ui->checkBoxFZWanQianShiGe);
    checkBoxFourStarZ.append(ui->checkBoxFZWanBaiShiGe);

    //二星混选
    checkBoxTwoStarH.append(ui->checkBoxTHQianEr);
    checkBoxTwoStarH.append(ui->checkBoxTHHouEr);
    checkBoxTwoStarH.append(ui->checkBoxTHWanBai);
    checkBoxTwoStarH.append(ui->checkBoxTHWanShi);
    checkBoxTwoStarH.append(ui->checkBoxTHWanGe);
    checkBoxTwoStarH.append(ui->checkBoxTHQianBai);
    checkBoxTwoStarH.append(ui->checkBoxTHQianShi);
    checkBoxTwoStarH.append(ui->checkBoxTHQianGe);
    checkBoxTwoStarH.append(ui->checkBoxTHBaiShi);
    checkBoxTwoStarH.append(ui->checkBoxTHBaiGe);

    //三星混选
    checkBoxThreeStarH.append(ui->checkBoxThreeHHouSan);
    checkBoxThreeStarH.append(ui->checkBoxThreeHQianSan);
    checkBoxThreeStarH.append(ui->checkBoxThreeHZhongSan);
    checkBoxThreeStarH.append(ui->checkBoxThreeHWanQIanShi);
    checkBoxThreeStarH.append(ui->checkBoxThreeHWanQianGe);
    checkBoxThreeStarH.append(ui->checkBoxThreeHWanBaiShi);
    checkBoxThreeStarH.append(ui->checkBoxThreeHWanBaiGe);
    checkBoxThreeStarH.append(ui->checkBoxThreeHWanSHiGe);
    checkBoxThreeStarH.append(ui->checkBoxThreeHQianBaiGe);
    checkBoxThreeStarH.append(ui->checkBoxThreeHQianShiGe);

    //万位按钮
    pushButtonWan.append(ui->pushButtonWanZero);
    pushButtonWan.append(ui->pushButtonWanOne);
    pushButtonWan.append(ui->pushButtonWanTwo);
    pushButtonWan.append(ui->pushButtonWanThree);
    pushButtonWan.append(ui->pushButtonWanFour);
    pushButtonWan.append(ui->pushButtonWanFive);
    pushButtonWan.append(ui->pushButtonWanSix);
    pushButtonWan.append(ui->pushButtonWanSeven);
    pushButtonWan.append(ui->pushButtonWanEight);
    pushButtonWan.append(ui->pushButtonWanNine);

    //千位按钮
    pushButtonQian.append(ui->pushButtonQianZero);
    pushButtonQian.append(ui->pushButtonQianOne);
    pushButtonQian.append(ui->pushButtonQianTwo);
    pushButtonQian.append(ui->pushButtonQianThree);
    pushButtonQian.append(ui->pushButtonQianFour);
    pushButtonQian.append(ui->pushButtonQianFive);
    pushButtonQian.append(ui->pushButtonQianSix);
    pushButtonQian.append(ui->pushButtonQianSeven);
    pushButtonQian.append(ui->pushButtonQianEight);
    pushButtonQian.append(ui->pushButtonQianNine);

    //百位按钮
    pushButtonBai.append(ui->pushButtonBaiZero);
    pushButtonBai.append(ui->pushButtonBaiOne);
    pushButtonBai.append(ui->pushButtonBaiTwo);
    pushButtonBai.append(ui->pushButtonBaiThree);
    pushButtonBai.append(ui->pushButtonBaiFour);
    pushButtonBai.append(ui->pushButtonBaiFive);
    pushButtonBai.append(ui->pushButtonBaiSix);
    pushButtonBai.append(ui->pushButtonBaiSeven);
    pushButtonBai.append(ui->pushButtonBaiEight);
    pushButtonBai.append(ui->pushButtonBaiNine);

    //十位按钮
    pushButtonShi.append(ui->pushButtonShiZero);
    pushButtonShi.append(ui->pushButtonShiOne);
    pushButtonShi.append(ui->pushButtonShiTwo);
    pushButtonShi.append(ui->pushButtonShiThree);
    pushButtonShi.append(ui->pushButtonShiFour);
    pushButtonShi.append(ui->pushButtonShiFive);
    pushButtonShi.append(ui->pushButtonShiSix);
    pushButtonShi.append(ui->pushButtonShiSeven);
    pushButtonShi.append(ui->pushButtonShiEight);
    pushButtonShi.append(ui->pushButtonShiNine);

    //个位按钮
    pushButtonGe.append(ui->pushButtonGeZero);
    pushButtonGe.append(ui->pushButtonGeOne);
    pushButtonGe.append(ui->pushButtonGeTwo);
    pushButtonGe.append(ui->pushButtonGeThree);
    pushButtonGe.append(ui->pushButtonGeFour);
    pushButtonGe.append(ui->pushButtonGeFive);
    pushButtonGe.append(ui->pushButtonGeSix);
    pushButtonGe.append(ui->pushButtonGeSeven);
    pushButtonGe.append(ui->pushButtonGeEight);
    pushButtonGe.append(ui->pushButtonGeNine);

    //初始化标志位
    for(int i = 0; i < 10; i ++)
    {
        pushButtonWan.at(i)->setCheckable(true);
        pushButtonQian.at(i)->setCheckable(true);
        pushButtonBai.at(i)->setCheckable(true);
        pushButtonShi.at(i)->setCheckable(true);
        pushButtonGe.at(i)->setCheckable(true);

        pushButtonWan.at(i)->setStyleSheet(GLOBALDEF::PUTON);
        pushButtonQian.at(i)->setStyleSheet(GLOBALDEF::PUTON);
        pushButtonBai.at(i)->setStyleSheet(GLOBALDEF::PUTON);
        pushButtonShi.at(i)->setStyleSheet(GLOBALDEF::PUTON);
        pushButtonGe.at(i)->setStyleSheet(GLOBALDEF::PUTON);

        connect(pushButtonWan.at(i), SIGNAL(clicked(bool)), this, SLOT(setCheckPushButton()));
        connect(pushButtonQian.at(i), SIGNAL(clicked(bool)), this, SLOT(setCheckPushButton()));
        connect(pushButtonBai.at(i), SIGNAL(clicked(bool)), this, SLOT(setCheckPushButton()));
        connect(pushButtonShi.at(i), SIGNAL(clicked(bool)), this, SLOT(setCheckPushButton()));
        connect(pushButtonGe.at(i), SIGNAL(clicked(bool)), this, SLOT(setCheckPushButton()));
    }
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

/************************   三星直选反            ********************/
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

/************************   四星直选全            ********************/
void StarChoose::on_pushButtonFZQuan_clicked()
{
    for(int i = 0; i < checkBoxFourStarZ.size(); i ++)
    {
        checkBoxFourStarZ.at(i)->setChecked(true);
    }
}

/************************   四星直选清            ********************/
void StarChoose::on_pushButtonFZQing_clicked()
{
    for(int i = 0; i < checkBoxFourStarZ.size(); i ++)
    {
        checkBoxFourStarZ.at(i)->setChecked(false);
    }
}

/************************   四星直选反            ********************/
void StarChoose::on_pushButtonFZFan_clicked()
{
    for(int i = 0; i < checkBoxFourStarZ.size(); i ++)
    {
        if(checkBoxFourStarZ.at(i)->isChecked())
        {
            checkBoxFourStarZ.at(i)->setChecked(false);
        }
        else
        {
            checkBoxFourStarZ.at(i)->setChecked(true);
        }
    }
}

/************************   五星直选全            ********************/
void StarChoose::on_pushButtonFiveZQuan_clicked()
{
    ui->checkBoxFiveZ->setChecked(true);
}

/************************   五星直选清            ********************/
void StarChoose::on_pushButtonFiveZQing_clicked()
{
    ui->checkBoxFiveZ->setChecked(false);
}

/************************   五星直选反            ********************/
void StarChoose::on_pushButtonFiveZFan_clicked()
{
    if(ui->checkBoxFiveZ->isChecked())
    {
        ui->checkBoxFiveZ->setChecked(false);
    }
    else
    {
        ui->checkBoxFiveZ->setChecked(true);
    }
}

/************************   二星混选全            ********************/
void StarChoose::on_pushButtonTwoHQuan_clicked()
{
    for(int i = 0; i < checkBoxTwoStarH.size(); i ++)
    {
        checkBoxTwoStarH.at(i)->setChecked(true);
    }
}

/************************   二星混选清            ********************/
void StarChoose::on_pushButtonTwoHQing_clicked()
{
    for(int i = 0; i < checkBoxTwoStarH.size(); i ++)
    {
        checkBoxTwoStarH.at(i)->setChecked(false);
    }
}

/************************   二星混选反            ********************/
void StarChoose::on_pushButtonTwoHFan_clicked()
{
    for(int i = 0; i < checkBoxTwoStarH.size(); i ++)
    {
        if(checkBoxTwoStarH.at(i)->isChecked())
        {
            checkBoxTwoStarH.at(i)->setChecked(false);
        }
        else
        {
            checkBoxTwoStarH.at(i)->setChecked(true);
        }
    }
}

/************************   三星混选全            ********************/
void StarChoose::on_pushButtonThreeHQuan_clicked()
{
    for(int i = 0; i < checkBoxThreeStarH.size(); i ++)
    {
        checkBoxThreeStarH.at(i)->setChecked(true);
    }
}

/************************   三星混选清            ********************/
void StarChoose::on_pushButtonThreeHQing_clicked()
{
    for(int i = 0; i < checkBoxThreeStarH.size(); i ++)
    {
        checkBoxThreeStarH.at(i)->setChecked(false);
    }
}

/************************   三星混选反            ********************/
void StarChoose::on_pushButtonThreeHFan_clicked()
{
    for(int i = 0; i < checkBoxThreeStarH.size(); i ++)
    {
        if(checkBoxThreeStarH.at(i)->isChecked())
        {
            checkBoxThreeStarH.at(i)->setChecked(false);
        }
        else
        {
            checkBoxThreeStarH.at(i)->setChecked(true);
        }
    }
}

/************************   收益比率            ********************/
void StarChoose::on_radioButtonRevenueRatio_clicked()
{
    if(ui->radioButtonRevenueRatio->isChecked())
    {
        ui->comboBoxRate->setEnabled(true);
        ui->comboBoxCost->setEnabled(true);
    }
    else
    {
        ui->comboBoxRate->setEnabled(false);
        ui->comboBoxCost->setEnabled(false);
    }
}

/************************   固定收益            ********************/
void StarChoose::on_radioButtonFixedIncom_clicked()
{
    if(ui->radioButtonFixedIncom->isChecked())
    {
        ui->lineEditFixedIncom->setEnabled(true);
        ui->lineEditBonusMode->setEnabled(true);
    }
    else
    {
        ui->lineEditFixedIncom->setEnabled(false);
        ui->lineEditBonusMode->setEnabled(false);
    }
}

/************************   累加利润            ********************/
void StarChoose::on_radioButtonAccumulateProfits_clicked()
{
    if(ui->radioButtonFixedIncom->isChecked())
    {
        ui->lineEditBegin->setEnabled(true);
        ui->lineEditAdd->setEnabled(true);
    }
    else
    {
        ui->lineEditBegin->setEnabled(true);
        ui->lineEditAdd->setEnabled(true);
    }
}

/************************   万位全            ********************/
void StarChoose::on_pushButtonWanQuan_clicked()
{
    for(int i = 0; i < pushButtonWan.size(); i ++)
    {
        pushButtonWan.at(i)->setChecked(true);
        pushButtonWan.at(i)->setStyleSheet(GLOBALDEF::PUTDOWN);
    }
}

/************************   万位清            ********************/
void StarChoose::on_pushButtonWanQing_clicked()
{
    for(int i = 0; i < pushButtonWan.size(); i ++)
    {
        pushButtonWan.at(i)->setChecked(false);
        pushButtonWan.at(i)->setStyleSheet(GLOBALDEF::PUTON);
    }
}

/************************   万位反            ********************/
void StarChoose::on_pushButtonWanFan_clicked()
{
    for(int i = 0; i < pushButtonWan.size(); i ++)
    {
        if(!pushButtonWan.at(i)->isChecked())
        {
            pushButtonWan.at(i)->setChecked(true);
            pushButtonWan.at(i)->setStyleSheet(GLOBALDEF::PUTDOWN);
        }
        else
        {
            pushButtonWan.at(i)->setChecked(false);
            pushButtonWan.at(i)->setStyleSheet(GLOBALDEF::PUTON);
        }
    }
}

/************************    设置按钮选中           ********************/
void StarChoose::setCheckPushButton()
{
    for(int i = 0; i < 10; i ++)
    {
        if(pushButtonWan.at(i)->isChecked())
        {
            pushButtonWan.at(i)->setStyleSheet(GLOBALDEF::PUTDOWN);
        }
        else
        {
            pushButtonWan.at(i)->setStyleSheet(GLOBALDEF::PUTON);
        }
        if(pushButtonQian.at(i)->isChecked())
        {
            pushButtonQian.at(i)->setStyleSheet(GLOBALDEF::PUTDOWN);
        }
        else
        {
            pushButtonQian.at(i)->setStyleSheet(GLOBALDEF::PUTON);
        }
        if(pushButtonBai.at(i)->isChecked())
        {
            pushButtonBai.at(i)->setStyleSheet(GLOBALDEF::PUTDOWN);
        }
        else
        {
            pushButtonBai.at(i)->setStyleSheet(GLOBALDEF::PUTON);
        }
        if(pushButtonShi.at(i)->isChecked())
        {
            pushButtonShi.at(i)->setStyleSheet(GLOBALDEF::PUTDOWN);
        }
        else
        {
            pushButtonShi.at(i)->setStyleSheet(GLOBALDEF::PUTON);
        }
        if(pushButtonGe.at(i)->isChecked())
        {
            pushButtonGe.at(i)->setStyleSheet(GLOBALDEF::PUTDOWN);
        }
        else
        {
            pushButtonGe.at(i)->setStyleSheet(GLOBALDEF::PUTON);
        }
    }
}

/************************   千位全            ********************/
void StarChoose::on_pushButtonQianQuan_clicked()
{
    for(int i = 0; i < pushButtonQian.size(); i ++)
    {
        pushButtonQian.at(i)->setChecked(true);
        pushButtonQian.at(i)->setStyleSheet(GLOBALDEF::PUTDOWN);
    }
}

/************************   千位清            ********************/
void StarChoose::on_pushButtonQianQing_clicked()
{
    for(int i = 0; i < pushButtonQian.size(); i ++)
    {
        pushButtonQian.at(i)->setChecked(false);
        pushButtonQian.at(i)->setStyleSheet(GLOBALDEF::PUTON);
    }
}

/************************   千位反            ********************/
void StarChoose::on_pushButtonQianFan_clicked()
{
    for(int i = 0; i < pushButtonQian.size(); i ++)
    {
        if(!pushButtonQian.at(i)->isChecked())
        {
            pushButtonQian.at(i)->setChecked(true);
            pushButtonQian.at(i)->setStyleSheet(GLOBALDEF::PUTDOWN);
        }
        else
        {
            pushButtonQian.at(i)->setChecked(false);
            pushButtonQian.at(i)->setStyleSheet(GLOBALDEF::PUTON);
        }
    }
}

/************************   百位全            ********************/
void StarChoose::on_pushButtonBaiQuan_clicked()
{
    for(int i = 0; i < pushButtonBai.size(); i ++)
    {
        pushButtonBai.at(i)->setChecked(true);
        pushButtonBai.at(i)->setStyleSheet(GLOBALDEF::PUTDOWN);
    }
}

/************************   百位清            ********************/
void StarChoose::on_pushButtonBaiQing_clicked()
{
    for(int i = 0; i < pushButtonBai.size(); i ++)
    {
        pushButtonBai.at(i)->setChecked(false);
        pushButtonBai.at(i)->setStyleSheet(GLOBALDEF::PUTON);
    }
}

/************************   百位反            ********************/
void StarChoose::on_pushButtonBaiFan_clicked()
{
    for(int i = 0; i < pushButtonBai.size(); i ++)
    {
        if(!pushButtonBai.at(i)->isChecked())
        {
            pushButtonBai.at(i)->setChecked(true);
            pushButtonBai.at(i)->setStyleSheet(GLOBALDEF::PUTDOWN);
        }
        else
        {
            pushButtonBai.at(i)->setChecked(false);
            pushButtonBai.at(i)->setStyleSheet(GLOBALDEF::PUTON);
        }
    }
}

/************************   十位全            ********************/
void StarChoose::on_pushButtonShiQuan_clicked()
{
    for(int i = 0; i < pushButtonShi.size(); i ++)
    {
        pushButtonShi.at(i)->setChecked(true);
        pushButtonShi.at(i)->setStyleSheet(GLOBALDEF::PUTDOWN);
    }
}

/************************   十位清            ********************/
void StarChoose::on_pushButtonShiQing_clicked()
{
    for(int i = 0; i < pushButtonShi.size(); i ++)
    {
        pushButtonShi.at(i)->setChecked(false);
        pushButtonShi.at(i)->setStyleSheet(GLOBALDEF::PUTON);
    }
}

/************************   十位反            ********************/
void StarChoose::on_pushButtonShiFan_clicked()
{
    for(int i = 0; i < pushButtonShi.size(); i ++)
    {
        if(!pushButtonShi.at(i)->isChecked())
        {
            pushButtonShi.at(i)->setChecked(true);
            pushButtonShi.at(i)->setStyleSheet(GLOBALDEF::PUTDOWN);
        }
        else
        {
            pushButtonShi.at(i)->setChecked(false);
            pushButtonShi.at(i)->setStyleSheet(GLOBALDEF::PUTON);
        }
    }
}

/************************   个位全            ********************/
void StarChoose::on_pushButtonGeQuan_clicked()
{
    for(int i = 0; i < pushButtonGe.size(); i ++)
    {
        pushButtonGe.at(i)->setChecked(true);
        pushButtonGe.at(i)->setStyleSheet(GLOBALDEF::PUTDOWN);
    }
}

/************************   个位清            ********************/
void StarChoose::on_pushButtonGeQing_clicked()
{
    for(int i = 0; i < pushButtonGe.size(); i ++)
    {
        pushButtonGe.at(i)->setChecked(false);
        pushButtonGe.at(i)->setStyleSheet(GLOBALDEF::PUTON);
    }
}

/************************   个位反            ********************/
void StarChoose::on_pushButtonGeFan_clicked()
{
    for(int i = 0; i < pushButtonGe.size(); i ++)
    {
        if(!pushButtonGe.at(i)->isChecked())
        {
            pushButtonGe.at(i)->setChecked(true);
            pushButtonGe.at(i)->setStyleSheet(GLOBALDEF::PUTDOWN);
        }
        else
        {
            pushButtonGe.at(i)->setChecked(false);
            pushButtonGe.at(i)->setStyleSheet(GLOBALDEF::PUTON);
        }
    }
}

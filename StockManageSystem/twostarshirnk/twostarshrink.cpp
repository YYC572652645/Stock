#include "twostarshrink.h"
#include "ui_twostarshrink.h"

/************************   构造函数            ********************/
TwoStarShrink::TwoStarShrink(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::twostarshrink)
{
    ui->setupUi(this);
    this->initControl();
}

/************************   析构函数            ********************/
TwoStarShrink::~TwoStarShrink()
{
    delete ui;
}

/************************   初始化控件         ********************/
void TwoStarShrink::initControl()
{
    //类型选择
    checkboxTypeList.append(ui->checkBoxPair);
    checkboxTypeList.append(ui->checkBoxMiscellaneous);
    checkboxTypeList.append(ui->checkBoxDiscontinuous);
    checkboxTypeList.append(ui->checkBoxTwoLian);

    //胆码选择
    checkboxDanList.append(ui->checkBoxDanZero);
    checkboxDanList.append(ui->checkBoxDanOne);
    checkboxDanList.append(ui->checkBoxDanTwo);
    checkboxDanList.append(ui->checkBoxDanThree);
    checkboxDanList.append(ui->checkBoxDanFour);
    checkboxDanList.append(ui->checkBoxDanFive);
    checkboxDanList.append(ui->checkBoxDanSix);
    checkboxDanList.append(ui->checkBoxDanSeven);
    checkboxDanList.append(ui->checkBoxDanEight);
    checkboxDanList.append(ui->checkBoxDanNine);

    //和值选择
    checkboxHeList.append(ui->checkBoxHeZero);
    checkboxHeList.append(ui->checkBoxHeOne);
    checkboxHeList.append(ui->checkBoxHeTwo);
    checkboxHeList.append(ui->checkBoxHeThree);
    checkboxHeList.append(ui->checkBoxHeFour);
    checkboxHeList.append(ui->checkBoxHeFive);
    checkboxHeList.append(ui->checkBoxHeSix);
    checkboxHeList.append(ui->checkBoxHeSeven);
    checkboxHeList.append(ui->checkBoxHeEight);
    checkboxHeList.append(ui->checkBoxHeNine);
    checkboxHeList.append(ui->checkBoxHeTen);
    checkboxHeList.append(ui->checkBoxHeEleven);
    checkboxHeList.append(ui->checkBoxHeTwelve);
    checkboxHeList.append(ui->checkBoxHeThirteen);
    checkboxHeList.append(ui->checkBoxHeFourTeen);
    checkboxHeList.append(ui->checkBoxHeFifTeen);
    checkboxHeList.append(ui->checkBoxHeSixTeen);
    checkboxHeList.append(ui->checkBoxHeSevenTeen);
    checkboxHeList.append(ui->checkBoxHeEightTeen);

    //012选择
    checkboxLingList.append(ui->checkBoxLingOneOne);
    checkboxLingList.append(ui->checkBoxLingOneTwo);
    checkboxLingList.append(ui->checkBoxLingOneZero);
    checkboxLingList.append(ui->checkBoxLingTwoZero);
    checkboxLingList.append(ui->checkBoxLingTwoTwo);
    checkboxLingList.append(ui->checkBoxLingZeroZero);
    checkboxLingList.append(ui->checkBoxLingZeroOne);
    checkboxLingList.append(ui->checkBoxLingZeroTwo);

    //十位选择
    checkboxShiList.append(ui->checkBoxShiZero);
    checkboxShiList.append(ui->checkBoxShiOne);
    checkboxShiList.append(ui->checkBoxShiTwo);
    checkboxShiList.append(ui->checkBoxShiThree);
    checkboxShiList.append(ui->checkBoxShiFour);
    checkboxShiList.append(ui->checkBoxShiFive);
    checkboxShiList.append(ui->checkBoxShiSix);
    checkboxShiList.append(ui->checkBoxShiSeven);
    checkboxShiList.append(ui->checkBoxShiEight);
    checkboxShiList.append(ui->checkBoxShiNine);

    //个位选择
    checkboxGeList.append(ui->checkBoxGeZero);
    checkboxGeList.append(ui->checkBoxGeOne);
    checkboxGeList.append(ui->checkBoxGeTwo);
    checkboxGeList.append(ui->checkBoxGeThree);
    checkboxGeList.append(ui->checkBoxGeFour);
    checkboxGeList.append(ui->checkBoxGeFive);
    checkboxGeList.append(ui->checkBoxGeSix);
    checkboxGeList.append(ui->checkBoxGeSeven);
    checkboxGeList.append(ui->checkBoxGeEight);
    checkboxGeList.append(ui->checkBoxGeNine);

    //大中小排除
    checkboxBigList.append(ui->checkBoxBigDaDa);
    checkboxBigList.append(ui->checkBoxBigDaZhong);
    checkboxBigList.append(ui->checkBoxBigZhongDa);
    checkboxBigList.append(ui->checkBoxBigZhongZhong);
    checkboxBigList.append(ui->checkBoxBigXiaoXiao);
    checkboxBigList.append(ui->checkBoxBigXiaoZhong);
    checkboxBigList.append(ui->checkBoxBigZhongXiao);
    checkboxBigList.append(ui->checkBoxBigXiaoDa);
    checkboxBigList.append(ui->checkBoxBigDaXiao);

    //奇偶排除
    checkboxOddList.append(ui->checkBoxOddOuOu);
    checkboxOddList.append(ui->checkBoxOddOuJi);
    checkboxOddList.append(ui->checkBoxOddJiOu);
    checkboxOddList.append(ui->checkBoxOddJiJi);

    //质和排除
    checkboxQqeList.append(ui->checkBoxQqeHeHe);
    checkboxQqeList.append(ui->checkBoxQqeHeZhi);
    checkboxQqeList.append(ui->checkBoxQqeZhiHe);
    checkboxQqeList.append(ui->checkBoxQqeZhiZhi);

    //跨度排除
    checkboxKuaList.append(ui->checkBoxKuaZero);
    checkboxKuaList.append(ui->checkBoxKuaOne);
    checkboxKuaList.append(ui->checkBoxKuaTwo);
    checkboxKuaList.append(ui->checkBoxKuaThree);
    checkboxKuaList.append(ui->checkBoxKuaFour);
    checkboxKuaList.append(ui->checkBoxKuaFive);
    checkboxKuaList.append(ui->checkBoxKuaSix);
    checkboxKuaList.append(ui->checkBoxKuaSeven);
    checkboxKuaList.append(ui->checkBoxKuaEight);
    checkboxKuaList.append(ui->checkBoxKuaNine);


    //和尾值
    checkboxWeiList.append(ui->checkBoxWeiZero);
    checkboxWeiList.append(ui->checkBoxWeiOne);
    checkboxWeiList.append(ui->checkBoxWeiTwo);
    checkboxWeiList.append(ui->checkBoxWeiThree);
    checkboxWeiList.append(ui->checkBoxWeiFour);
    checkboxWeiList.append(ui->checkBoxWeiFive);
    checkboxWeiList.append(ui->checkBoxWeiSix);
    checkboxWeiList.append(ui->checkBoxWeiSeven);
    checkboxWeiList.append(ui->checkBoxWeiEight);
    checkboxWeiList.append(ui->checkBoxWeiNine);

}


/************************   类型全            ********************/
void TwoStarShrink::on_pushButtonTypeQuan_clicked()
{
    setUpCheckList(checkboxTypeList, true);
}

/************************   类型清            ********************/
void TwoStarShrink::on_pushButtonTypeQing_clicked()
{
    setUpCheckList(checkboxTypeList, false);
}

/************************     胆码全          ********************/
void TwoStarShrink::on_pushButtonDanQuan_clicked()
{
    setUpCheckList(checkboxDanList, true);
}

/************************   胆码清            ********************/
void TwoStarShrink::on_pushButtonDanQing_clicked()
{
    setUpCheckList(checkboxDanList, false);
}

/************************   和值全            ********************/
void TwoStarShrink::on_pushButtonHeQuan_clicked()
{
    setUpCheckList(checkboxHeList, true);
}

/************************   和值清            ********************/
void TwoStarShrink::on_pushButtonHeQing_clicked()
{
    setUpCheckList(checkboxHeList, false);
}

/************************   012全            ********************/
void TwoStarShrink::on_pushButtonLingQuan_clicked()
{
    setUpCheckList(checkboxLingList, true);
}

/************************   012清            ********************/
void TwoStarShrink::on_pushButtonLingQing_clicked()
{
    setUpCheckList(checkboxLingList, false);
}

/************************   十位全            ********************/
void TwoStarShrink::on_pushButtonShiQuan_clicked()
{
    setUpCheckList(checkboxShiList, true);
}

/************************   十位清            ********************/
void TwoStarShrink::on_pushButtonShiQing_clicked()
{
    setUpCheckList(checkboxShiList, false);
}

/************************   个位全            ********************/
void TwoStarShrink::on_pushButtonGeQuan_clicked()
{
    setUpCheckList(checkboxGeList, true);
}

/************************   个位清            ********************/
void TwoStarShrink::on_pushButtonGeQing_clicked()
{
    setUpCheckList(checkboxGeList, false);
}

/************************   大中小排除清            ********************/
void TwoStarShrink::on_pushButtonBigQuan_clicked()
{
    setUpCheckList(checkboxBigList, true);
}

/************************   大中小排除清            ********************/
void TwoStarShrink::on_pushButtonBigQing_clicked()
{
    setUpCheckList(checkboxBigList, false);
}

/************************   奇偶排除全            ********************/
void TwoStarShrink::on_pushButtonOddQuan_clicked()
{
    setUpCheckList(checkboxOddList, true);
}

/************************   奇偶排除清            ********************/
void TwoStarShrink::on_pushButtonOddQing_clicked()
{
    setUpCheckList(checkboxOddList, false);
}

/************************   质和排除全            ********************/
void TwoStarShrink::on_pushButtonQqeQuan_clicked()
{
    setUpCheckList(checkboxQqeList, true);
}

/************************   质和排除清            ********************/
void TwoStarShrink::on_pushButtonQqeQing_clicked()
{
    setUpCheckList(checkboxQqeList, false);
}

/************************   和尾值排除全            ********************/
void TwoStarShrink::on_pushButtonWeiQuan_clicked()
{
    setUpCheckList(checkboxWeiList, true);
}

/************************   和尾值排除清            ********************/
void TwoStarShrink::on_pushButtonWeiQing_clicked()
{
    setUpCheckList(checkboxWeiList, false);
}

/************************   跨度排除全            ********************/
void TwoStarShrink::on_pushButtonKuaQuan_clicked()
{
    setUpCheckList(checkboxKuaList, true);
}

/************************   跨度排除清            ********************/
void TwoStarShrink::on_pushButtonKuaQing_clicked()
{
    setUpCheckList(checkboxKuaList, false);
}

/************************   设置列表选中            ********************/
void TwoStarShrink::setUpCheckList(QList<QCheckBox *> checkList, bool falge)
{
    for(int i = 0; i < checkList.size(); i ++)
    {
        checkList.at(i)->setChecked(falge);
    }
}

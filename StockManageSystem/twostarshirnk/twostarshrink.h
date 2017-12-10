#ifndef TWOSTARSHRINK_H
#define TWOSTARSHRINK_H

#include <QWidget>
#include <QCheckBox>

namespace Ui {
class twostarshrink;
}

class TwoStarShrink : public QWidget
{
    Q_OBJECT

public:
    explicit TwoStarShrink(QWidget *parent = 0);
    ~TwoStarShrink();

private slots:
    void on_pushButtonTypeQuan_clicked();   //类型全
    void on_pushButtonTypeQing_clicked();   //类型清
    void on_pushButtonDanQuan_clicked();    //胆码全
    void on_pushButtonDanQing_clicked();    //胆码清
    void on_pushButtonHeQuan_clicked();     //和值全
    void on_pushButtonHeQing_clicked();     //和值清
    void on_pushButtonLingQuan_clicked();   //012全
    void on_pushButtonLingQing_clicked();   //012清
    void on_pushButtonShiQuan_clicked();    //十位全
    void on_pushButtonShiQing_clicked();    //十位清
    void on_pushButtonGeQuan_clicked();     //个位全
    void on_pushButtonGeQing_clicked();     //个位清
    void on_pushButtonBigQuan_clicked();    //大中小排除全
    void on_pushButtonBigQing_clicked();    //大中小排除清
    void on_pushButtonOddQuan_clicked();    //奇偶排除全
    void on_pushButtonOddQing_clicked();    //奇偶排除清
    void on_pushButtonQqeQuan_clicked();    //质和排除全
    void on_pushButtonQqeQing_clicked();    //质和排除清
    void on_pushButtonWeiQuan_clicked();    //跨度排除全
    void on_pushButtonWeiQing_clicked();    //跨度排除清
    void on_pushButtonKuaQuan_clicked();    //和尾值排除全
    void on_pushButtonKuaQing_clicked();    //和尾值排除清

private:
    Ui::twostarshrink *ui;

    void initControl();                     //初始化控件

    QList<QCheckBox*>checkboxTypeList;      //类型选择
    QList<QCheckBox*>checkboxDanList;       //胆码选择
    QList<QCheckBox*>checkboxHeList;        //和值选择
    QList<QCheckBox*>checkboxLingList;      //012选择
    QList<QCheckBox*>checkboxShiList;       //十位选择
    QList<QCheckBox*>checkboxGeList;        //个位选择
    QList<QCheckBox*>checkboxBigList;       //大中小排除
    QList<QCheckBox*>checkboxOddList;       //奇偶排除
    QList<QCheckBox*>checkboxQqeList;       //质和排除
    QList<QCheckBox*>checkboxKuaList;       //跨度排除
    QList<QCheckBox*>checkboxWeiList;       //和尾值排除

    void setUpCheckList(QList<QCheckBox*> checkList, bool falge);
};

#endif // TWOSTARSHRINK_H

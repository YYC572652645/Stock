#ifndef STARCHOOSE_H
#define STARCHOOSE_H

#include <QWidget>
#include <QFrame>
#include <QCheckBox>
#include <QPushButton>
#include <QStringList>

class QTableWidget;

namespace Ui {
class starchoose;
}

class StarChoose : public QWidget
{
    Q_OBJECT

public:
    explicit StarChoose(QWidget *parent = 0, int type = 0);
    ~StarChoose();
    void setHideType(int type);

private slots:
    void on_pushButtonDQuan_clicked();
    void on_pushButtonDQing_clicked();
    void on_pushButtonDFan_clicked();
    void on_pushButtonTZQuan_clicked();
    void on_pushButtonTZQing_clicked();
    void on_pushButtonTZFan_clicked();
    void on_pushButtonThreeZQuan_clicked();
    void on_pushButtonThreeZQing_clicked();
    void on_pushButtonThreeZFan_clicked();
    void on_pushButtonFZQuan_clicked();
    void on_pushButtonFZQing_clicked();
    void on_pushButtonFZFan_clicked();
    void on_pushButtonFiveZQuan_clicked();
    void on_pushButtonFiveZQing_clicked();
    void on_pushButtonFiveZFan_clicked();
    void on_pushButtonTwoHQuan_clicked();
    void on_pushButtonTwoHQing_clicked();
    void on_pushButtonTwoHFan_clicked();
    void on_pushButtonThreeHQuan_clicked();
    void on_pushButtonThreeHQing_clicked();
    void on_pushButtonThreeHFan_clicked();
    void on_radioButtonRevenueRatio_clicked();
    void on_radioButtonFixedIncom_clicked();
    void on_radioButtonAccumulateProfits_clicked();
    void on_pushButtonWanQuan_clicked();
    void on_pushButtonWanQing_clicked();
    void on_pushButtonQianQuan_clicked();
    void on_pushButtonQianQing_clicked();
    void on_pushButtonQianFan_clicked();
    void on_pushButtonBaiQuan_clicked();
    void on_pushButtonBaiQing_clicked();
    void on_pushButtonBaiFan_clicked();
    void on_pushButtonShiQuan_clicked();
    void on_pushButtonShiQing_clicked();
    void on_pushButtonShiFan_clicked();
    void on_pushButtonGeQuan_clicked();
    void on_pushButtonGeQing_clicked();
    void on_pushButtonGeFan_clicked();
    void on_pushButtonWanFan_clicked();
    void setCheckPushButton();
    void on_radioButtonFreeTimes_clicked();
    void on_textEditBetting_textChanged();

private:
    Ui::starchoose *ui;
    QList<QFrame*>frameList;
    int countData;
    int widgetType;

    QList<QCheckBox*>checkBoxTwoStarZ;
    QList<QCheckBox*>checkBoxThreeStarZ;
    QList<QCheckBox*>checkBoxFourStarZ;
    QList<QCheckBox*>checkBoxTwoStarH;
    QList<QCheckBox*>checkBoxThreeStarH;

    QList<QPushButton*>pushButtonWan;
    QList<QPushButton*>pushButtonQian;
    QList<QPushButton*>pushButtonBai;
    QList<QPushButton*>pushButtonShi;
    QList<QPushButton*>pushButtonGe;

    void initControl();
    void setControl();
    void calcCount(int type);
    void setPushButtonList(QList<QPushButton*>listButton);
    void setTableWidget(QTableWidget * tableWidget);
};

#endif // STARCHOOSE_H

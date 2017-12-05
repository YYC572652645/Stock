#ifndef STARCHOOSE_H
#define STARCHOOSE_H

#include <QWidget>
#include <QFrame>
#include <QCheckBox>

class QTableWidget;

namespace Ui {
class starchoose;
}

class StarChoose : public QWidget
{
    Q_OBJECT

public:
    explicit StarChoose(QWidget *parent = 0);
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

private:
    Ui::starchoose *ui;
    QList<QFrame*>frameList;

    QList<QCheckBox*>checkBoxTwoStarZ;
    QList<QCheckBox*>checkBoxThreeStarZ;
    void initControl();

    void setTableWidget(QTableWidget * tableWidget);
};

#endif // STARCHOOSE_H

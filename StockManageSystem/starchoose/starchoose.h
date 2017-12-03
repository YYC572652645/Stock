#ifndef STARCHOOSE_H
#define STARCHOOSE_H

#include <QWidget>
#include <QFrame>

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

private:
    Ui::starchoose *ui;
    QList<QFrame*>frameList;
    void initControl();

    void setTableWidget(QTableWidget * tableWidget);
};

#endif // STARCHOOSE_H

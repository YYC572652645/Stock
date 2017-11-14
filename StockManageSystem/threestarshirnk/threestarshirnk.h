#ifndef THREESTARSHIRNK_H
#define THREESTARSHIRNK_H

#include <QWidget>

namespace Ui {
class threestarshirnk;
}

class ThreeStarShrink : public QWidget
{
    Q_OBJECT

public:
    explicit ThreeStarShrink(QWidget *parent = 0);
    ~ThreeStarShrink();

private:
    Ui::threestarshirnk *ui;
};

#endif // THREESTARSHIRNK_H

#ifndef TWOSTARSHRINK_H
#define TWOSTARSHRINK_H

#include <QWidget>

namespace Ui {
class twostarshrink;
}

class TwoStarShrink : public QWidget
{
    Q_OBJECT

public:
    explicit TwoStarShrink(QWidget *parent = 0);
    ~TwoStarShrink();

private:
    Ui::twostarshrink *ui;
};

#endif // TWOSTARSHRINK_H

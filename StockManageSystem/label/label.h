#ifndef LABEL_H
#define LABEL_H

#include <QObject>
#include <QLabel>
#include <QMouseEvent>
#include <QWidget>

class Label : public QLabel
{
    Q_OBJECT
public:
    explicit Label(QWidget *parent = 0, int type = 0);

    void mousePressEvent(QMouseEvent *event);

private:
    int labelType;
};

#endif // LABEL_H

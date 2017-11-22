#include "label.h"
#include <QDesktopServices>
#include <QUrl>

/************************   构造函数          ************************/
Label::Label(QWidget *parent, int type):
    QLabel(parent),labelType(0)
{
    labelType = type;
}

/************************   鼠标点击事件          ************************/
void Label::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        switch(labelType)
        {
        case 0 : QDesktopServices::openUrl(QUrl("https://www.baidu.com"));break;
        }
    }
}

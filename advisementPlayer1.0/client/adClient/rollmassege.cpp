#include "rollmassege.h"
#include <QDebug>

RollMassege::RollMassege(QWidget *parent) :
    QLabel(parent)
{
}

RollMassege::RollMassege(QLabel *_label, QWidget *parent) :
    QLabel(parent)
{
    rect = _label->geometry();
    rect.setWidth(798);
    rect.setHeight(80);
    setGeometry(rect);
    show();
    qDebug()<<rect.width()<<" "<<rect.height();

    offset = rect.width();
    txt = "暂无信息";
    timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(updateMsg()));
    timer->start(50);
}

void RollMassege::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    QFont font;
    font.setPointSize(16);
    painter.setFont(font);
    painter.drawText(rect.x()+offset, rect.y()+30, txt);
}


void RollMassege::updateMsg()
{
    offset--;
    if(offset<0) offset = rect.width();
    update();
}

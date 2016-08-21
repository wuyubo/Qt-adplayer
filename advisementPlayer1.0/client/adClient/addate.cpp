#include "addate.h"

AdDate::AdDate(QLabel *_mlabel, QObject *parent):
    QObject(parent)
{
    mlabel = _mlabel;
    mtimer = new QTimer;
    connect(mtimer, SIGNAL(timeout()), this, SLOT(updateTime()));
}

AdDate::~AdDate()
{
    delete mtimer;
}

void AdDate::start()
{
     mtimer->start(1000);
}

void AdDate::updateTime()
{
    QString time = QDate::currentDate().toString("yy-MM-dd")+"\n"
                   +QTime::currentTime().toString("hh:mm:ss");
    mlabel->setText(time);
}

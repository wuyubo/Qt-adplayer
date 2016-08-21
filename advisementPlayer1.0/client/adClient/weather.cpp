#include "weather.h"

Weather::Weather( QLabel *_label, QObject *parent) :
    QObject(parent)
{
    label = _label;
}

void Weather::showWeather(QString weather)
{
    label->setText(weather);
}

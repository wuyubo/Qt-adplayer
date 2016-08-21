#ifndef WEATHER_H
#define WEATHER_H

#include <QObject>
#include <QLabel>

class Weather : public QObject
{
    Q_OBJECT
public:
    explicit Weather( QLabel *_label,QObject *parent = 0);

signals:

public slots:
    void showWeather(QString weather);

private:
    QLabel *label;
};

#endif // WEATHER_H

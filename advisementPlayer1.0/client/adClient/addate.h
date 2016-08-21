#ifndef ADDATE_H
#define ADDATE_H

#include <QTime>
#include <QDate>
#include <QLabel>
#include <QTimer>

class AdDate : public QObject
{
    Q_OBJECT
public:
    AdDate(QLabel *_mlabel, QObject *parent = 0);
    ~AdDate();
    void start();
public slots:
    void updateTime();
private:
    QLabel *mlabel;
    QTimer *mtimer;
};

#endif // ADDATE_H

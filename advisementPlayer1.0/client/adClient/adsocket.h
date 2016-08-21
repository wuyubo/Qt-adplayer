#ifndef ADSOCKET_H
#define ADSOCKET_H

#include <QTcpSocket>
#include <QHostAddress>


enum MsgType{WEATHER, MASSEGE, VIDEO};

class AdSocket : public QTcpSocket
{
    Q_OBJECT
public:
    explicit AdSocket(QObject *parent = 0);
    ~AdSocket();

signals:
    void showWeather(QString wt);

public slots:
    void readMsg();
    void conSuc();
    void conAgain();


private:
    QString id;
};

#endif // ADSOCKET_H

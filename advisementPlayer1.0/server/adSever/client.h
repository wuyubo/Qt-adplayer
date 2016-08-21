#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QString>
#include <QTcpSocket>

class Client
{
 //   Q_OBJECT
public:
    explicit Client(QObject *parent = 0);
    QString id;
    QTcpSocket *msocket;


};

#endif // CLIENT_H

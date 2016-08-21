#include "adsocket.h"
#include <QDebug>

AdSocket::AdSocket(QObject *parent) :
    QTcpSocket(parent)
{
    id = "0011";
    connect(this, SIGNAL(readyRead()),this, SLOT(readMsg()));
    connect(this, SIGNAL(connected()),this, SLOT(conSuc()));
    connect(this, SIGNAL(disconnected()),this, SLOT(conAgain()));
    connectToHost(QHostAddress("192.168.1.140"), 9999);
}

AdSocket::~AdSocket()
{

}

void AdSocket::readMsg()
{
    QString msg;
    msg = readAll();

    QStringList msgs = msg.split("|");
    if(msgs.size() >= 2)
    {
        switch (msgs[0].toInt())
        {
        case WEATHER:
            emit showWeather(msgs[1]);
            break;
        case MASSEGE:
    
            break;
        case VIDEO:

            break;
        default:
            break;
        }
    }

}

void AdSocket::conSuc()
{
    this->write(id.toUtf8());
    qDebug()<<"connect success";
}

void AdSocket::conAgain()
{
    abort();
    connectToHost(QHostAddress("192.168.1.140"), 9999);
}

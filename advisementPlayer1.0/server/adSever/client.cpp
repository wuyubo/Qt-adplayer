#include "client.h"

Client::Client(QObject *parent)
{
    msocket = new QTcpSocket;
}

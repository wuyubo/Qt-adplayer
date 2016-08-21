#ifndef ADTCP_H
#define ADTCP_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QHostAddress>
#include <QMessageBox>

#include <QList>
#include <QListWidget>
#include "client.h"

enum MsgType{WEATHER, MASSEGE, VIDEO};


class AdTcp : public QTcpServer
{
    Q_OBJECT
public:
     AdTcp(QListWidget *_client_lw, QObject *parent = 0);
     ~AdTcp();

signals:

public slots:
    void newClient();
    void read_id();
    void rmClient();

    void broadcastMsg(QString msg);
private:
    QList<Client> *client_list;
    QListWidget *client_lw;

};

#endif // ADTCP_H

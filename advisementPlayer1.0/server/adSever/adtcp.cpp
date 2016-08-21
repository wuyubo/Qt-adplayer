#include "adtcp.h"
#include <QDebug>

AdTcp::AdTcp(QListWidget *_client_lw, QObject *parent) :
    QTcpServer(parent)
{
    if(!listen(QHostAddress::Any, 9999))
    {
        //QMessageBox::warning(this, "服务器启动失败");
        close();
    }


    client_list = new QList<Client>;
    client_lw =_client_lw;

    connect(this, SIGNAL(newConnection()), this, SLOT(newClient()));
    qDebug()<<"init tcp";
  //  connect(this, SIGNAL(), this, SLOT(newClient()));
  //  connect(this, SIGNAL(acceptError(QAbstractSocket::SocketError)), this, SLOT(newClient()));
}

AdTcp::~AdTcp()
{
    delete client_list;
    close();
}

void AdTcp::newClient()
{
    Client *new_client = new Client;
    new_client->msocket = this->nextPendingConnection();

    connect(new_client->msocket, SIGNAL(readyRead()), this, SLOT(read_id()));\
    connect(new_client->msocket, SIGNAL(disconnected()), this, SLOT(rmClient()));
    client_list->append(*new_client);
}

void AdTcp::read_id()
{
    QString id = client_list->last().msocket->readAll();
    client_list->last().id = id;
    client_lw->addItem(id);
}

void AdTcp::broadcastMsg(QString msg)
{
    int count = client_list->size();
    for(int i = 0; i< count; i++)
    {
        client_list->at(i).msocket->write(msg.toUtf8());
    }
}

void AdTcp::rmClient()
{
    qDebug()<<"someone disconnect";
    if(client_list->first().msocket->isSequential())
    {
        client_lw->clear();
    }
}

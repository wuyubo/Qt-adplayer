#include "adclient.h"
#include "ui_adclient.h"
#include <QDebug>

AdClient::AdClient(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdClient)
{
    ui->setupUi(this);
    date = new AdDate(ui->date_lb);
    socket = new AdSocket;
    weater = new Weather(ui->weather_lb);
    rollmsg = new RollMassege(ui->msg_lb, ui->msg_lb);


    connect(socket, SIGNAL(showWeather(QString)), weater, SLOT(showWeather(QString)));
    date->start();
}

AdClient::~AdClient()
{
    delete ui;
}

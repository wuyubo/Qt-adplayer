#include "adsever.h"
#include "ui_adsever.h"

AdSever::AdSever(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdSever)
{
    ui->setupUi(this);
    tcpsever = new AdTcp(ui->client_lw);
}

AdSever::~AdSever()
{
    delete ui;
}

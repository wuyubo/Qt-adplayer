#ifndef ADCLIENT_H
#define ADCLIENT_H

#include <QMainWindow>
#include "addate.h"
#include "adsocket.h"
#include "weather.h"
#include "rollmassege.h"
#include <QLabel>

namespace Ui {
class AdClient;
}

class AdClient : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdClient(QWidget *parent = 0);
    ~AdClient();

private:
    Ui::AdClient *ui;
    AdDate *date;
    AdSocket *socket;
    Weather *weater;
    RollMassege *rollmsg;
};

#endif // ADCLIENT_H

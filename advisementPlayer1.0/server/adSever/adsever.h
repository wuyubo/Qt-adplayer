#ifndef ADSEVER_H
#define ADSEVER_H

#include <QMainWindow>
#include "adtcp.h"

namespace Ui {
class AdSever;
}

class AdSever : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdSever(QWidget *parent = 0);
    ~AdSever();

private:
    Ui::AdSever *ui;
    AdTcp *tcpsever;
};

#endif // ADSEVER_H

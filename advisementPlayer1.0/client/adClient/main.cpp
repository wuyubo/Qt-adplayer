#include "adclient.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AdClient w;
    w.show();

    return a.exec();
}

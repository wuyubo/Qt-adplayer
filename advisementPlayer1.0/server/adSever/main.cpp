#include "adsever.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AdSever w;
    w.show();

    return a.exec();
}

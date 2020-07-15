#include "client_daemon.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    client_daemon w(QString(QLatin1String(argv[1])));
    return a.exec();
}

#include "kylinserver.h"
#include "kylin_adaptor.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDBusConnection connection = QDBusConnection::systemBus();

    if (!connection.registerService("com.kylin.runtime")) {
        qDebug() << "error:" << connection.lastError().message();
        exit(-1);
    }
    KylinServer *kylin_dbus = new KylinServer();
    new InterfaceAdaptor(kylin_dbus);
    connection.registerObject("/com/kylin/runtime", kylin_dbus);
    return a.exec();
}

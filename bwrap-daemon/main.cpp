#include "client_daemon.h"

#include <QApplication>

int main(int argc, char *argv[])
{

    qDebug() << "目标文件名称: " <<  __FILE__<< "目标行数编号: " <<  __LINE__<< "目标函数名称: " <<  __FUNCTION__;
    QString app_platform =  QString(QLatin1String(argv[1]));
    QApplication a(argc, argv);
    client_daemon w(app_platform);
    return a.exec();
}

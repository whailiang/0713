#include "client_daemon.h"
#include "app_start_thread.h"

client_daemon::client_daemon(QString app_platform)
{
    platform_and_app = app_platform;

    QDBusConnection::systemBus().connect(QString("com.kylin.runtime"), QString("/com/kylin/runtime"), "com.kylin.runtime.interface", "app_start", this, SLOT(run_app_slot(QString )));

    QDBusConnection::systemBus().connect(QString("com.kylin.runtime"), QString("/com/kylin/runtime"), "com.kylin.runtime.interface", "kill_app", this, SLOT(kill_app_slot(QString )));

    QVariantList platform_status;
    platform_status<<QVariant::fromValue(app_platform);
    QDBusInterface *serviceInterface = new QDBusInterface("com.kylin.runtime",
                                                          "/com/kylin/runtime",
                                                          "com.kylin.runtime.interface",
                                                          QDBusConnection::systemBus());
    if (!serviceInterface->isValid())
    {
        qDebug() << qPrintable(QDBusConnection::systemBus().lastError().message());
        return ;
    }

    serviceInterface->asyncCallWithArgumentList("daemon_ready",platform_status);

}
//arg1: app@platform  arg2: app_args
void client_daemon::run_app_slot(QString msg)
{
    QVariant var(msg);
    QStringList list;
    list = var.toStringList();
    QStringList list_split;
    QString app_platform = list.at(0);


    list_split = app_platform.split("@");

    QString app_cmd = list_split.at(0) + " "+ list.at(1);

    //判断容器标识相同再执行
    if(platform_and_app.compare(list.at(1))){
        app_start_thread *thread = new app_start_thread(app_cmd,this,appnum);
        thread->start();
        appnum++;
    }
}
void client_daemon::kill_daemon()
{
    exit(0);
}
//arg1: app@platform
void client_daemon::kill_app_slot(QString app_info)
{
    if(platform_and_app.compare(app_info)){
        exit(0);
    }
}
QString client_daemon::get_app_platform()
{
    return platform_and_app;
}


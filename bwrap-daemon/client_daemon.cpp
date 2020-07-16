#include "client_daemon.h"
#include "app_start_thread.h"

client_daemon:: client_daemon(QString app_platform)
{
    qDebug() << "目标文件名称: " <<  __FILE__<< "目标行数编号: " <<  __LINE__<< "目标函数名称: " <<  __FUNCTION__;
    platform_and_app = app_platform;

    QDBusConnection::systemBus().connect(QString("com.kylin.runtime"), QString("/com/kylin/runtime"), "com.kylin.runtime.interface", "app_start", this, SLOT(run_app_slot(QString )));

    QDBusConnection::systemBus().connect(QString("com.kylin.runtime"), QString("/com/kylin/runtime"), "com.kylin.runtime.interface", "kill_app", this, SLOT(kill_app_slot(QString )));

    qDebug()<<"app_platform====="<<app_platform;

    QVariantList platform_status;
    platform_status<<QVariant::fromValue(app_platform);
    QDBusInterface *serviceInterface = new QDBusInterface("com.kylin.runtime",
                                                          "/com/kylin/runtime",
                                                          "com.kylin.runtime.interface",
                                                          QDBusConnection::systemBus());
    if (!serviceInterface->isValid())
    {
        qDebug() << "目标文件名称: " <<  __FILE__<< "目标行数编号: " <<  __LINE__<< "目标函数名称: " <<  __FUNCTION__;
        qDebug() << qPrintable(QDBusConnection::systemBus().lastError().message());
        return ;
    }
    qDebug() << "目标文件名称: " <<  __FILE__<< "目标行数编号: " <<  __LINE__<< "目标函数名称: " <<  __FUNCTION__;
    serviceInterface->asyncCall("daemon_ready",platform_status);

}
//arg1: app@platform  arg2: app_args
void client_daemon::run_app_slot(QString msg)
{
    qDebug() << "目标文件名称: " <<  __FILE__<< "目标行数编号: " <<  __LINE__<< "目标函数名称: " <<  __FUNCTION__;
    QStringList list;
    list = msg.split("###");

    qDebug()<<"list.at(1) ===="<<list.at(1);

    QStringList list_split;
    QString app_platform = list.at(0);

    qDebug() << "目标文件名称: " <<  __FILE__<< "目标行数编号: " <<  __LINE__<< "目标函数名称: " <<  __FUNCTION__;

    qDebug()<<app_platform;
    list_split = app_platform.split("@");

    QString app_cmd = list_split.at(0) + " "+ list.at(1);

    qDebug() << "目标文件名称: " <<  __FILE__<< "目标行数编号: " <<  __LINE__<< "目标函数名称: " <<  __FUNCTION__;

    //判断容器标识相同再执行
    if(platform_and_app.compare(list.at(1))){
        app_start_thread *thread = new app_start_thread(app_cmd,this,appnum);
        thread->start();
        appnum++;
    }
    qDebug() << "目标文件名称: " <<  __FILE__<< "目标行数编号: " <<  __LINE__<< "目标函数名称: " <<  __FUNCTION__;
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
    qDebug() << "目标文件名称: " <<  __FILE__<< "目标行数编号: " <<  __LINE__<< "目标函数名称: " <<  __FUNCTION__;
    return platform_and_app;
}


#include "app_start_thread.h"

app_start_thread::app_start_thread( QString app_cmd,client_daemon *client,int app_num)
{
    qDebug() << "目标文件名称: " <<  __FILE__<< "目标行数编号: " <<  __LINE__<< "目标函数名称: " <<  __FUNCTION__;
    app_shell = app_cmd;
    clients = client;
    app_nums = app_num;
}

void app_start_thread::run()
{

    qDebug() << "目标文件名称: " <<  __FILE__<< "目标行数编号: " <<  __LINE__<< "目标函数名称: " <<  __FUNCTION__;

    QString app_platform = clients->get_app_platform();

    QStringList list;

    list<<app_platform<<"running";

    QVariantList platform_status;
    platform_status<<QVariant::fromValue(list);
    QDBusInterface *serviceInterface = new QDBusInterface("com.kylin.runtime",
                                                          "/com/kylin/runtime",
                                                          "com.kylin.runtime.interface",
                                                          QDBusConnection::systemBus());
    if (!serviceInterface->isValid())
    {
        qDebug() << qPrintable(QDBusConnection::systemBus().lastError().message());
        return ;
    }

    serviceInterface->asyncCallWithArgumentList("set_platform_app_status",platform_status);

    qDebug() << "目标文件名称: " <<  __FILE__<< "目标行数编号: " <<  __LINE__<< "目标函数名称: " <<  __FUNCTION__;

    qDebug()<<"app_shell-----"<<app_shell;
    qDebug()<<"app_nums------"<<app_nums;

    app_nums++;
    QProcess process1;
    process1.start(app_shell);
    process1.waitForFinished();
    app_nums--;



    if(app_nums)
    {
        list.clear();
        list<<app_platform<<"stop";
        platform_status.clear();
        platform_status<<QVariant::fromValue(list);
        QDBusPendingCall msg = serviceInterface->asyncCallWithArgumentList("set_platform_app_status",platform_status);

        clients->kill_daemon();
    }

}

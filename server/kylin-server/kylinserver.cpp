#include "kylinserver.h"

KylinServer::KylinServer()
{

}
void KylinServer::send_to_client_msg(QString msg)
{
    QDBusMessage message =QDBusMessage::createSignal("/com/kylin/runtime", "com.kylin.runtime.interface", "run_app_reply");
    message<<msg;
    QDBusConnection::systemBus().send(message);
}
void KylinServer::mount_and_bwrap(QString app_name,QString platform,QString app_args)
{
    qDebug() << "目标文件名称: " <<  __FILE__<< "目标行数编号: " <<  __LINE__<< "目标函数名称: " <<  __FUNCTION__;

    //判断app的容器是否已经启动，如果启动直接跳过mount bwrap.
    int app_in_flag = 0;
    QHash<QString, QString>::const_iterator iter1 = platform_status_hash.constBegin(); //遍历hash

    //find

    while(iter1 != platform_status_hash.constEnd())
    {
        qDebug() <<"hash key:"<<iter1.key();
        if(iter1.key() == (app_name+"@"+platform) )
        {
            app_in_flag = 1;
        }
        ++iter1;
    }
    //判断路径是否存在
    //get_path_form_appcmd
    QString apppath = QString("/opt/%1/%2").arg(platform).arg(app_name);
    QString basepath = QString("/opt/%1/basedir").arg(platform);
    QString localpath = QString("/opt/%1/localdir").arg(platform);
    if(!app_in_flag)
    {
        QDir appdir(apppath);
        if(!appdir.exists()){
            //app dir not exist!
            send_to_client_msg(QString("%1 not exist").arg(apppath));
            return ;
        }
        QDir basedir(basepath);
        if(!basedir.exists()){
            //base dir not exist!
            send_to_client_msg(QString("%1 not exist").arg(basepath));
            return ;
        }
        QDir localdir(localpath);
        if(!localdir.exists()){
            //local dir not exist!
            send_to_client_msg(QString("%1 not exist").arg(localpath));
            return ;
        }

        //mount
        QString mount_shell = QString("mount -t overlay overlay -o lowerdir=%1,upperdir=%2,workdir=/opt/worker %3").arg(basepath).arg(localpath).arg(apppath);

        qDebug()<<"mount shell ="<<mount_shell;

        QProcess mount_process;

        mount_process.start(mount_shell);

        mount_process.waitForFinished();
        bwrap_thread *thread = new bwrap_thread(apppath,app_name+"@"+platform);

        thread->start();
    }

//    run_app_send_signal(QString(app_name+"@"+platform),app_args);

}

//arg 1: app@platform   arg2: status(enum)
void KylinServer::set_platform_app_status(QVariantList platform_status)
{
    //判断状态 删除或者插入hash
    if(platform_status.at(0).toStringList().at(1) == "running"){
        platform_status_hash.insert(platform_status.at(0).toStringList().at(0),platform_status.at(0).toStringList().at(1));
    }else if(platform_status.at(0).toStringList().at(1) == "stop"){
        platform_status_hash.remove(platform_status.at(0).toStringList().at(0));
    }
}
//arg1: run/stop/status...  arg2: app   arg3: platform arg4: app's args
void KylinServer::exec_command(QVariantList app_info)
{
    app_args_public = app_info.at(0).toStringList().at(3);
    QString app_platform = app_info.at(0).toStringList().at(1) + "@" + app_info.at(0).toStringList().at(2);
    qDebug()<<app_info.at(0).toStringList();
    if(app_info.at(0).toStringList().at(0) == "run"){

        mount_and_bwrap(app_info.at(0).toStringList().at(1) ,app_info.at(0).toStringList().at(2),app_info.at(0).toStringList().at(3));

    }else if (app_info.at(0).toStringList().at(0) == "stop"){
        kill_app_send_signal(app_platform);
    }else if (app_info.at(0).toStringList().at(0) == "status"){

    }
}
//arg: app@platform
void KylinServer::daemon_ready(QVariantList app_cmd_andapp_platform)
{

    qDebug() << "目标文件名称: " <<  __FILE__<< "目标行数编号: " <<  __LINE__<< "目标函数名称: " <<  __FUNCTION__;

    //app@platform
    run_app_send_signal(app_cmd_andapp_platform.at(0).toString(),app_args_public);
}

void KylinServer::kill_app_send_signal(QString app_platform)
{
    QDBusMessage message =QDBusMessage::createSignal("/com/kylin/runtime", "com.kylin.runtime.interface", "kill_app");
    message<<app_platform;
    QDBusConnection::systemBus().send(message);
}

void KylinServer::run_app_send_signal(QString app_platform,QString app_args)
{

    qDebug() << "目标文件名称: " <<  __FILE__<< "目标行数编号: " <<  __LINE__<< "目标函数名称: " <<  __FUNCTION__;
    //app_platform###app_args
    QString msg = app_platform + "###" + app_args;

    qDebug()<<"msg===="<<msg;

    QDBusMessage message =QDBusMessage::createSignal("/com/kylin/runtime", "com.kylin.runtime.interface", "app_start");
    message<<msg;
    QDBusConnection::systemBus().send(message);
}

void KylinServer::test()
{
    qDebug()<<"TEST!!";
}

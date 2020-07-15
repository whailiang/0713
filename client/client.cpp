#include "client.h"
#include <string.h>
#include <QVariant>

Client::Client()
{
    QDBusConnection::systemBus().connect(QString("com.kylin.runtime"), QString("/com/kylin/runtime"), "com.kylin.runtime.interface", "run_app_reply", this, SLOT(run_app_reply_slot(QString )));
}

void Client::run_app_reply_slot(QString msg)
{
    qDebug()<<msg;
}

void Client::string_to_variant(QString run_stop, QString app_name, QString platform, QString app_args)
{

    qDebug()<<run_stop<<"  111";
    qDebug()<<app_name<<"  222";
    qDebug()<<platform<<"  333";
    qDebug()<<app_args<<"  444";

    list.append(run_stop);
    list.append(app_name);
    list.append(platform);
    list.append(app_args);

    QVariantList app_info_varlist;
    app_info_varlist.append(QVariant::fromValue(list));

    QDBusInterface *serviceInterface = new QDBusInterface("com.kylin.runtime",
                                                          "/com/kylin/runtime",
                                                          "com.kylin.runtime.interface",
                                                          QDBusConnection::systemBus());
    if (!serviceInterface->isValid())
    {
        qDebug() << qPrintable(QDBusConnection::systemBus().lastError().message());
        return ;
    }
    QDBusPendingCall msg = serviceInterface->asyncCall("exec_command",app_info_varlist);

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    if(!QString(QLatin1String(argv[2])).contains("@")){
        puts("kylin run/stop/status app@platform");
        exit(1);
    }
    QStringList app_info = QString(QLatin1String(argv[2])).split("@");
    QString run_stop;
    QString app_name = app_info.at(0);
    QString app_args;
    QString platform =app_info.at(1);

    if(argc>=3){
        if(!strcmp(argv[1],"run")){
            // no app args
            if(3 ==argc ){
                run_stop="run";
                app_args="";
            }
            else{
                run_stop = "run";
                for(int i=argc-3;i!=0;i--){
                    app_args.append(argv[argc-i]);
                    app_args.append(" ");
                }
            }
        }
        else if(!strcmp(argv[1],"stop")){
            run_stop="stop";
            app_args="";
        }
        else if(!strcmp(argv[1],"status")){
            run_stop="status";
            app_args="";
        }
        else{
            puts("kylin run/stop/status app@platform");
            exit(1);
        }
    }
    else{
        puts("kylin run/stop/status app@platform");
        exit(1);
    }

    Client *client = new Client();

    client->string_to_variant(run_stop,app_name,platform,app_args);

    return a.exec();
}

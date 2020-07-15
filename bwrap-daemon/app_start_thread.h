#ifndef APP_START_THREAD_H
#define APP_START_THREAD_H

#include <QThread>
#include <QProcess>
#include <QDBusInterface>
#include <QDebug>
#include <QDBusPendingCall>
#include "client_daemon.h"

class app_start_thread : public QThread
{
public:
    app_start_thread(QString app_cmd,client_daemon *client,int app_num);

    void run();

    QString app_shell;

    client_daemon *clients;
    int app_nums;
};

#endif // APP_START_THREAD_H

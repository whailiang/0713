#ifndef CLIENT_DAEMON_H
#define CLIENT_DAEMON_H

#include <QObject>
#include <QDBusMessage>
#include <QDBusConnection>
#include <QProcess>
#include <QDebug>

class client_daemon : public QObject
{
    Q_OBJECT

public:
    client_daemon(QString app_platform);

    int appnum = 0;
    QString platform_and_app;

    void kill_daemon();

    QString get_app_platform();

public slots:
    void run_app_slot(QString app_cmd);

    void kill_app_slot(QString app_info);


};
#endif // CLIENT_DAEMON_H

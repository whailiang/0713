#ifndef KYLINSERVER_H
#define KYLINSERVER_H

#include "bwrap_thread.h"
#include <QObject>
#include <QVariant>
#include <QDBusConnection>
#include <QDBusError>
#include <QDebug>
#include <QDir>
#include <QDBusMessage>
#include <QProcess>
#include <QHash>

enum status{
    platform_ready,
    app_running,
    app_stop
};

Q_DECLARE_METATYPE(status)


class KylinServer : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.kylin.runtime.interface")
public:
    explicit KylinServer();

    void mount_and_bwrap(QString app_name,QString platform,QString app_args);

    void send_to_client_msg(QString msg);

    QHash<QString,QString> platform_status_hash;

    void run_app_send_signal(QString app_platform,QString app_args);

    void kill_app_send_signal(QString app_platform);

    QString app_args_public;


public slots:
    void exec_command(QVariantList app_info);

    void set_platform_app_status(QVariantList platform_status);

    void test();

    void daemon_ready(QVariantList app_cmd_andapp_platform);


signals:
    void app_start(QString app_info);

    void run_app_reply(QString reply);

    void kill_app(QString app_info);


};
#endif // KYLINSERVER_H

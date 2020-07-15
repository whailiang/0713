#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>

#include <QtCore/QObject>
#include <QTextStream>
#include <QCoreApplication>
#include <QtDBus>
#include <QDebug>
#include <thread>
#include <stdlib.h>
#include <stdio.h>

class Client: public QObject
{
    Q_OBJECT
public:
    Client();

    QStringList list;

    QVariantList app_info_list;


    void string_to_variant(QString run_stop,QString app_name,QString platform,QString app_args);

public slots:

    void run_app_reply_slot(QString msg);

};

#endif // CLIENT_H

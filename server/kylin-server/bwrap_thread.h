#ifndef BWRAP_THREAD_H
#define BWRAP_THREAD_H

#include <QThread>
#include <QProcess>
#include <QDebug>

class bwrap_thread : public QThread
{
public:
    bwrap_thread(QString app_dir,QString app_platform);

    void run();

    QString app_path;
    QString platform_and_app;
};

#endif // BWRAP_THREAD_H

#include "bwrap_thread.h"

bwrap_thread::bwrap_thread(QString app_dir,QString app_platform)
{
    app_path = app_dir;
    platform_and_app = app_platform;
}

void bwrap_thread::run()
{
    qDebug() << "目标文件名称: " <<  __FILE__<< "目标行数编号: " <<  __LINE__<< "目标函数名称: " <<  __FUNCTION__;
    QString shell = QString("bwrap " \
                            "--bind  %1/bin  /bin " \
                            "--bind  %1/boot /boot " \
                            "--ro-bind /dev /dev "   \
                            "--bind  %1/etc /etc " \
                            "--bind  %1/lib  /lib " \
                            "--bind  %1/lib64 /lib64 " \
                            "--bind  %1/media /media " \
                            "--bind  %1/mnt /mnt " \
                            "--bind  %1/opt  /opt " \
                            "--proc  /proc " \
                            "--bind  %1/root /root " \
                            "--bind  /run /run " \
                            "--bind  %1/sbin /sbin " \
                            "--bind  %1/srv /srv " \
                            "--ro-bind /sys /sys " \
                            "--bind  /tmp /tmp " \
                            "--bind  %1/usr /usr " \
                            "--bind  %1/var /var " \
                            "--bind /home /home " \
                            "--unshare-pid " \
                            "--bind /etc/passwd  /etc/passwd " \
                            "--bind /etc/group   /etc/group " \
                            "/usr/bin/bwrap-daemon %2").arg(app_path).arg(platform_and_app);


    qDebug()<<"-----"<<shell;


    QProcess process;
    process.start(shell);
    process.waitForFinished();

    qDebug() << "目标文件名称: " <<  __FILE__<< "目标行数编号: " <<  __LINE__<< "目标函数名称: " <<  __FUNCTION__;
}

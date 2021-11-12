#include "myeasydevice.h"
#include <QDebug>
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyEasyDevice device;

    for(int i=0;i<10;i++){
        QString num = QString::number(i);
        QByteArray data = num.toUtf8();
        device.toDevice(data);
    }

    qInfo() << device.fromDevice() ;

    return a.exec();
}

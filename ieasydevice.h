#ifndef IEASYDEVICE_H
#define IEASYDEVICE_H

#include <QByteArray>

struct iEasyDevice{
    virtual ~iEasyDevice()=default;
    virtual qint64 toDevice(QByteArray)=0;
    virtual QByteArray fromDevice()const=0;
    virtual void clear()=0;
};

#endif // IEASYDEVICE_H

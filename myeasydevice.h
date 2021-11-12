#ifndef MYEASYDEVICE_H
#define MYEASYDEVICE_H

#include "ieasydevice.h"

class MyEasyDevice : public iEasyDevice
{
    QByteArray mArray;

public:
    MyEasyDevice();
    ~MyEasyDevice();

    // iEasyDevice interface
public:
    virtual qint64 toDevice(QByteArray) override;
    virtual QByteArray fromDevice() const override;
    virtual void clear() override;

};

#endif // MYEASYDEVICE_H

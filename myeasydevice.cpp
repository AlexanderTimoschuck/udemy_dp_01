#include "myeasydevice.h"

MyEasyDevice::MyEasyDevice()
{
}

MyEasyDevice::~MyEasyDevice()
{
}

qint64 MyEasyDevice::toDevice(QByteArray a)
{
    mArray.append(a);
    return mArray.length();
}

QByteArray MyEasyDevice::fromDevice() const
{
    return mArray;
}

void MyEasyDevice::clear()
{
    mArray.clear();
}

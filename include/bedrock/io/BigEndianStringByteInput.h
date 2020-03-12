#pragma once

#include <string>
#include "StringByteInput.h"


class BigEndianStringByteInput : StringByteInput {

public:
    virtual void readBytes(void *, unsigned long);
    virtual void readShort();
    virtual void readFloat();
    virtual void readDouble();
    virtual void readLongLong();
    ~BigEndianStringByteInput();
    virtual void readBigEndianBytes(void *, unsigned long);
    virtual void readInt();
    BigEndianStringByteInput(std::string const&);
};

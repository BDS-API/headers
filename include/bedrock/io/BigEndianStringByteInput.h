#pragma once

#include <string>
#include "StringByteInput.h"


class BigEndianStringByteInput : StringByteInput {

public:
    virtual void readFloat();
    virtual void readInt();
    virtual void readLongLong();
    virtual void readBytes(void *, unsigned long);
    ~BigEndianStringByteInput();
    virtual void readBigEndianBytes(void *, unsigned long);
    virtual void readShort();
    virtual void readDouble();
    BigEndianStringByteInput(std::string const&);
};

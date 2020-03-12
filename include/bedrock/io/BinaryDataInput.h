#pragma once

#include <string>
#include "BytesDataInput.h"


class BinaryDataInput : BytesDataInput {

public:
    virtual void readByte();
    virtual void readBytes(void *, unsigned long);
    ~BinaryDataInput();
    virtual void readDouble();
    virtual void readShort();
    virtual void readFloat();
    virtual std::string readLongString();
    virtual std::string readString();
    virtual void readInt();
    virtual void readLongLong();
    virtual void numBytesLeft()const;
    BinaryDataInput(ReadOnlyBinaryStream &);
};

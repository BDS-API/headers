#pragma once

#include "ReadOnlyBinaryStream.h"
#include "BytesDataInput.h"


class BinaryDataInput : BytesDataInput {

public:
    virtual void readInt();
    virtual std::string readLongString();
    virtual void readFloat();
    virtual void readShort();
    virtual void numBytesLeft()const;
    virtual std::string readString();
    virtual void readLongLong();
    virtual void readDouble();
    virtual void readBytes(void *, unsigned long);
    ~BinaryDataInput();
    virtual void readByte();
    BinaryDataInput(ReadOnlyBinaryStream &);
};

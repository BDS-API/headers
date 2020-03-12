#pragma once

#include "IDataInput.h"


class BytesDataInput : IDataInput {

public:
    virtual void readByte();
    virtual void readDouble();
    virtual std::string readLongString();
    virtual void readLongLong();
    virtual void readShort();
    virtual std::string readString();
    virtual void readInt();
    virtual void readFloat();
    ~BytesDataInput();
    BytesDataInput();
};

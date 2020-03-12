#pragma once

#include <string>
#include "IDataInput.h"


class BytesDataInput : IDataInput {

public:
    virtual void readLongLong();
    virtual std::string readString();
    virtual void readShort();
    virtual void readInt();
    virtual void readFloat();
    virtual std::string readLongString();
    ~BytesDataInput();
    virtual void readDouble();
    virtual void readByte();
    BytesDataInput();
};

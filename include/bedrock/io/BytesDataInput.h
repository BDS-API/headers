#pragma once

#include "./IDataInput.h"
#include <string>


class BytesDataInput : IDataInput {

public:
    virtual ~BytesDataInput();
    virtual std::string readString();
    virtual std::string readLongString();
    virtual void readFloat();
    virtual void readDouble();
    virtual void readByte();
    virtual void readShort();
    virtual void readInt();
    virtual void readLongLong();

    BytesDataInput();
};

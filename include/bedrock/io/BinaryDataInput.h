#pragma once

#include "./ReadOnlyBinaryStream.h"
#include "./BytesDataInput.h"
#include <string>


class BinaryDataInput : BytesDataInput {

public:
    virtual ~BinaryDataInput();
    virtual std::string readString();
    virtual std::string readLongString();
    virtual void readFloat();
    virtual void readDouble();
    virtual void readByte();
    virtual void readShort();
    virtual void readInt();
    virtual void readLongLong();
//  virtual void readBytes(void *, unsigned long); //TODO: incomplete function definition
    virtual void numBytesLeft()const;

    BinaryDataInput(ReadOnlyBinaryStream &);
};

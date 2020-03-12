#pragma once

#include "BinaryStream.h"
#include "BytesDataOutput.h"


class BinaryDataOutput : BytesDataOutput {

public:
//  virtual void writeString(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    virtual void writeByte(char);
    virtual void writeBytes(void const*, unsigned long);
    virtual void writeInt(int);
    virtual void writeFloat(float);
    virtual void writeShort(short);
    virtual void writeDouble(double);
    ~BinaryDataOutput();
//  virtual void writeLongString(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    virtual void writeLongLong(long);
    BinaryDataOutput(BinaryStream &);
};

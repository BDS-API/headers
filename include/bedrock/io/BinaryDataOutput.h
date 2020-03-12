#pragma once

#include "BytesDataOutput.h"


class BinaryDataOutput : BytesDataOutput {

public:
    virtual void writeBytes(void const*, unsigned long);
    virtual void writeFloat(float);
//  virtual void writeLongString(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    virtual void writeByte(char);
    virtual void writeInt(int);
    ~BinaryDataOutput();
    virtual void writeShort(short);
    virtual void writeLongLong(long);
    virtual void writeDouble(double);
//  virtual void writeString(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    BinaryDataOutput(BinaryStream &);
};

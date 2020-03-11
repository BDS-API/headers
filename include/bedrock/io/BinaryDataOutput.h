#pragma once

#include "./BinaryStream.h"
#include "./BytesDataOutput.h"


class BinaryDataOutput : BytesDataOutput {

public:
    virtual ~BinaryDataOutput();
//  virtual void writeString(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
//  virtual void writeLongString(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    virtual void writeFloat(float);
    virtual void writeDouble(double);
    virtual void writeByte(char);
    virtual void writeShort(short);
    virtual void writeInt(int);
    virtual void writeLongLong(long);
//  virtual void writeBytes(void const*, unsigned long); //TODO: incomplete function definition

    BinaryDataOutput(BinaryStream &);
};

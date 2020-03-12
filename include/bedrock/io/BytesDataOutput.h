#pragma once

#include "IDataOutput.h"


class BytesDataOutput : IDataOutput {

public:
    ~BytesDataOutput();
    virtual void writeDouble(double);
    virtual void writeInt(int);
    virtual void writeFloat(float);
//  virtual void writeLongString(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    virtual void writeByte(char);
//  virtual void writeString(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    virtual void writeLongLong(long);
    virtual void writeShort(short);
    BytesDataOutput();
};

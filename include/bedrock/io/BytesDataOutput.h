#pragma once

#include "IDataOutput.h"


class BytesDataOutput : IDataOutput {

public:
    ~BytesDataOutput();
    virtual void writeFloat(float);
    virtual void writeByte(char);
    virtual void writeDouble(double);
//  virtual void writeLongString(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    virtual void writeShort(short);
    virtual void writeInt(int);
//  virtual void writeString(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    virtual void writeLongLong(long);
    BytesDataOutput();
};

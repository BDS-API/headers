#pragma once

#include "./IDataOutput.h"


class BytesDataOutput : IDataOutput {

public:
    virtual ~BytesDataOutput();
//  virtual void writeString(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
//  virtual void writeLongString(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    virtual void writeFloat(float);
    virtual void writeDouble(double);
    virtual void writeByte(char);
    virtual void writeShort(short);
    virtual void writeInt(int);
    virtual void writeLongLong(long);

    BytesDataOutput();
};

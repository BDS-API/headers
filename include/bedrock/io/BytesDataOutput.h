#pragma once

#include "IDataOutput.h"


class BytesDataOutput : IDataOutput {

public:
    ~BytesDataOutput(); // _ZN15BytesDataOutputD2Ev
//  virtual void writeString(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN15BytesDataOutput11writeStringEN3gsl17basic_string_spanIKcLln1EEE
//  virtual void writeLongString(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN15BytesDataOutput15writeLongStringEN3gsl17basic_string_spanIKcLln1EEE
    virtual void writeFloat(float); // _ZN15BytesDataOutput10writeFloatEf
    virtual void writeDouble(double); // _ZN15BytesDataOutput11writeDoubleEd
    virtual void writeByte(char); // _ZN15BytesDataOutput9writeByteEc
    virtual void writeShort(short); // _ZN15BytesDataOutput10writeShortEs
    virtual void writeInt(int); // _ZN15BytesDataOutput8writeIntEi
    virtual void writeLongLong(long); // _ZN15BytesDataOutput13writeLongLongEl
    BytesDataOutput(); // _ZN15BytesDataOutputC2Ev
};

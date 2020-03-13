#pragma once

#include "BytesDataOutput.h"


class BinaryDataOutput : BytesDataOutput {

public:
    ~BinaryDataOutput(); // _ZN16BinaryDataOutputD2Ev
//  virtual void writeString(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN16BinaryDataOutput11writeStringEN3gsl17basic_string_spanIKcLln1EEE
//  virtual void writeLongString(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN16BinaryDataOutput15writeLongStringEN3gsl17basic_string_spanIKcLln1EEE
    virtual void writeFloat(float); // _ZN16BinaryDataOutput10writeFloatEf
    virtual void writeDouble(double); // _ZN16BinaryDataOutput11writeDoubleEd
    virtual void writeByte(char); // _ZN16BinaryDataOutput9writeByteEc
    virtual void writeShort(short); // _ZN16BinaryDataOutput10writeShortEs
    virtual void writeInt(int); // _ZN16BinaryDataOutput8writeIntEi
    virtual void writeLongLong(long); // _ZN16BinaryDataOutput13writeLongLongEl
    virtual void writeBytes(void const*, unsigned long); // _ZN16BinaryDataOutput10writeBytesEPKvm
    BinaryDataOutput(BinaryStream &); // _ZN16BinaryDataOutputC2ER12BinaryStream
};

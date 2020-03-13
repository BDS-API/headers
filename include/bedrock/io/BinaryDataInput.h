#pragma once

#include <string>
#include "BytesDataInput.h"


class BinaryDataInput : BytesDataInput {

public:
    ~BinaryDataInput(); // _ZN15BinaryDataInputD2Ev
    virtual std::string readString(); // _ZN15BinaryDataInput10readStringB5cxx11Ev
    virtual std::string readLongString(); // _ZN15BinaryDataInput14readLongStringB5cxx11Ev
    virtual void readFloat(); // _ZN15BinaryDataInput9readFloatEv
    virtual void readDouble(); // _ZN15BinaryDataInput10readDoubleEv
    virtual void readByte(); // _ZN15BinaryDataInput8readByteEv
    virtual void readShort(); // _ZN15BinaryDataInput9readShortEv
    virtual void readInt(); // _ZN15BinaryDataInput7readIntEv
    virtual void readLongLong(); // _ZN15BinaryDataInput12readLongLongEv
    virtual void readBytes(void *, unsigned long); // _ZN15BinaryDataInput9readBytesEPvm
    virtual void numBytesLeft()const; // _ZNK15BinaryDataInput12numBytesLeftEv
    BinaryDataInput(ReadOnlyBinaryStream &); // _ZN15BinaryDataInputC2ER20ReadOnlyBinaryStream
};

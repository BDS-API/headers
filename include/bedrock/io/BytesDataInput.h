#pragma once

#include <string>
#include "IDataInput.h"


class BytesDataInput : IDataInput {

public:
    ~BytesDataInput(); // _ZN14BytesDataInputD2Ev
    virtual std::string readString(); // _ZN14BytesDataInput10readStringB5cxx11Ev
    virtual std::string readLongString(); // _ZN14BytesDataInput14readLongStringB5cxx11Ev
    virtual void readFloat(); // _ZN14BytesDataInput9readFloatEv
    virtual void readDouble(); // _ZN14BytesDataInput10readDoubleEv
    virtual void readByte(); // _ZN14BytesDataInput8readByteEv
    virtual void readShort(); // _ZN14BytesDataInput9readShortEv
    virtual void readInt(); // _ZN14BytesDataInput7readIntEv
    virtual void readLongLong(); // _ZN14BytesDataInput12readLongLongEv
    BytesDataInput(); // _ZN14BytesDataInputC2Ev
};

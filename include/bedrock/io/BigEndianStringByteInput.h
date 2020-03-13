#pragma once

#include <string>
#include "StringByteInput.h"


class BigEndianStringByteInput : StringByteInput {

public:
    ~BigEndianStringByteInput(); // _ZN24BigEndianStringByteInputD2Ev
    virtual void readFloat(); // _ZN24BigEndianStringByteInput9readFloatEv
    virtual void readDouble(); // _ZN24BigEndianStringByteInput10readDoubleEv
    virtual void readShort(); // _ZN24BigEndianStringByteInput9readShortEv
    virtual void readInt(); // _ZN24BigEndianStringByteInput7readIntEv
    virtual void readLongLong(); // _ZN24BigEndianStringByteInput12readLongLongEv
    virtual void readBytes(void *, unsigned long); // _ZN24BigEndianStringByteInput9readBytesEPvm
    virtual void readBigEndianBytes(void *, unsigned long); // _ZN24BigEndianStringByteInput18readBigEndianBytesEPvm
    BigEndianStringByteInput(std::string const&); // _ZN24BigEndianStringByteInputC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};

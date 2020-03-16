#pragma once

#include <string>
#include "BytesDataOutput.h"


class StringByteOutput : public BytesDataOutput {

public:
    virtual ~StringByteOutput(); // _ZN16StringByteOutputD2Ev
    virtual void __fake_function0(); // fake
    virtual void writeBytes(void const*, unsigned long); // _ZN16StringByteOutput10writeBytesEPKvm
    StringByteOutput(std::string &); // _ZN16StringByteOutputC2ERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};

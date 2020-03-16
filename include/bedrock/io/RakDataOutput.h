#pragma once

#include "BytesDataOutput.h"


class RakDataOutput : public BytesDataOutput {

public:
    virtual ~RakDataOutput(); // _ZN13RakDataOutputD2Ev
    virtual void __fake_function0(); // fake
    virtual void writeBytes(void const*, unsigned long); // _ZN13RakDataOutput10writeBytesEPKvm
    RakDataOutput(RakNet::BitStream &); // _ZN13RakDataOutputC2ERN6RakNet9BitStreamE
};

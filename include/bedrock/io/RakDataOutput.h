#pragma once

#include "BytesDataOutput.h"


class RakDataOutput : BytesDataOutput {

public:
    ~RakDataOutput(); // _ZN13RakDataOutputD2Ev
    virtual void writeBytes(void const*, unsigned long); // _ZN13RakDataOutput10writeBytesEPKvm
    RakDataOutput(RakNet::BitStream &); // _ZN13RakDataOutputC2ERN6RakNet9BitStreamE
};

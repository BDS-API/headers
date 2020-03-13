#pragma once

#include "BytesDataInput.h"


class RakDataInput : BytesDataInput {

public:
    ~RakDataInput(); // _ZN12RakDataInputD2Ev
    virtual void readBytes(void *, unsigned long); // _ZN12RakDataInput9readBytesEPvm
    virtual void numBytesLeft()const; // _ZNK12RakDataInput12numBytesLeftEv
    RakDataInput(RakNet::BitStream &); // _ZN12RakDataInputC2ERN6RakNet9BitStreamE
};

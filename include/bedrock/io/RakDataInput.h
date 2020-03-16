#pragma once

#include "BytesDataInput.h"


class RakDataInput : public BytesDataInput {

public:
    virtual ~RakDataInput(); // _ZN12RakDataInputD2Ev
    virtual void __fake_function0(); // fake
    virtual void readBytes(void *, unsigned long); // _ZN12RakDataInput9readBytesEPvm
    virtual void numBytesLeft()const; // _ZNK12RakDataInput12numBytesLeftEv
    RakDataInput(RakNet::BitStream &); // _ZN12RakDataInputC2ERN6RakNet9BitStreamE
};

#pragma once

#include "../../raknet/BitStream.h"
#include "BytesDataInput.h"


class RakDataInput : BytesDataInput {

public:
    virtual void readBytes(void *, unsigned long);
    virtual void numBytesLeft()const;
    ~RakDataInput();
    RakDataInput(RakNet::BitStream &);
};

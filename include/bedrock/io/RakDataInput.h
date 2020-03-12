#pragma once

#include "BytesDataInput.h"


class RakDataInput : BytesDataInput {

public:
    virtual void numBytesLeft()const;
    ~RakDataInput();
    virtual void readBytes(void *, unsigned long);
    RakDataInput(RakNet::BitStream &);
};

#pragma once

#include "../../raknet/BitStream"


class RakDataInput : BytesDataInput {

public:
    virtual RakDataInput::~RakDataInput()
    virtual void readBytes(void *, unsigned long);
    virtual void numBytesLeft()const;

    RakDataInput(RakNet::BitStream &);
};

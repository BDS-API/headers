#pragma once

class RakDataInput : BytesDataInput {

public:
    virtual RakDataInput::~RakDataInput();
    virtual void readBytes(void *, unsigned long);
    virtual void numBytesLeft(void)const;

    RakDataInput(RakNet::BitStream &);
};

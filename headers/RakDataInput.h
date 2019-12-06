#pragma once

class RakDataInput : BytesDataInput {

public:
    virtual ~RakDataInput();
    virtual void readBytes(void *, unsigned long);
    virtual void numBytesLeft(void)const;

    void RakDataInput(RakNet::BitStream &);
};

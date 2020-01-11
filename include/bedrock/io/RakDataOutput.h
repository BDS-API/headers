#pragma once

class RakDataOutput : BytesDataOutput {

public:
    virtual RakDataOutput::~RakDataOutput();
    virtual void writeBytes(void const*, unsigned long);

    RakDataOutput(RakNet::BitStream &);
};

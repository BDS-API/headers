#pragma once

class RakDataOutput : BytesDataOutput {

public:
    virtual ~RakDataOutput();
    virtual void writeBytes(void const*, unsigned long);

    void RakDataOutput(RakNet::BitStream &);
};

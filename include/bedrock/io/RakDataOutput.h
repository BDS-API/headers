#pragma once

#include "../../raknet/BitStream"


class RakDataOutput : BytesDataOutput {

public:
    RakDataOutput::~RakDataOutput()
    virtual void writeBytes(void const*, unsigned long);

    RakDataOutput(RakNet::BitStream &);
};

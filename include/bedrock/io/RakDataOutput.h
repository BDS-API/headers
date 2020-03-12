#pragma once

#include "../../raknet/BitStream.h"
#include "BytesDataOutput.h"


class RakDataOutput : BytesDataOutput {

public:
    ~RakDataOutput();
    virtual void writeBytes(void const*, unsigned long);
    RakDataOutput(RakNet::BitStream &);
};

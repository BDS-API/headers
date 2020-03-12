#pragma once

#include "BytesDataOutput.h"


class RakDataOutput : BytesDataOutput {

public:
    ~RakDataOutput();
    virtual void writeBytes(void const*, unsigned long);
    RakDataOutput(RakNet::BitStream &);
};

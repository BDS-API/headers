#pragma once

#include "./BytesDataOutput.h"
#include "../../raknet/BitStream.h"


class RakDataOutput : BytesDataOutput {

public:
    virtual ~RakDataOutput();
//  virtual void writeBytes(void const*, unsigned long); //TODO: incomplete function definition

    RakDataOutput(RakNet::BitStream &);
};

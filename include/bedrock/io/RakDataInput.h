#pragma once

#include "./BytesDataInput.h"
#include "../../raknet/BitStream.h"


class RakDataInput : BytesDataInput {

public:
    virtual ~RakDataInput();
//  virtual void readBytes(void *, unsigned long); //TODO: incomplete function definition
    virtual void numBytesLeft()const;

    RakDataInput(RakNet::BitStream &);
};

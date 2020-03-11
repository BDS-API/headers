#pragma once

#include "../raknet/BitStream.h"


class DatagramHeaderFormat {

public:

    DatagramHeaderFormat();
    void Deserialize(RakNet::BitStream *);
    void Serialize(RakNet::BitStream *);
    void GetDataHeaderByteLength();
};

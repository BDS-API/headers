#pragma once

#include "../raknet/BitStream.h"


class DatagramHeaderFormat {

public:
    void GetDataHeaderByteLength();
    DatagramHeaderFormat();
    void Deserialize(RakNet::BitStream *);
    void Serialize(RakNet::BitStream *);
};

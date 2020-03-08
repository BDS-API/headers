#pragma once

#include "../raknet/BitStream"


class DatagramHeaderFormat {

public:

    DatagramHeaderFormat(void);
    void Deserialize(RakNet::BitStream *);
    void Serialize(RakNet::BitStream *);
    void GetDataHeaderByteLength();
};

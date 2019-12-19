#pragma once

class DatagramHeaderFormat {

public:

    DatagramHeaderFormat(void);
    void Deserialize(RakNet::BitStream *);
    void Serialize(RakNet::BitStream *);
    void GetDataHeaderByteLength(void);
};

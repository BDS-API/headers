#pragma once



class DatagramHeaderFormat {

public:
    void Serialize(RakNet::BitStream *);
    void GetDataHeaderByteLength();
    DatagramHeaderFormat();
    void Deserialize(RakNet::BitStream *);
};

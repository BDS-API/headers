#pragma once



class DatagramHeaderFormat {

public:
    DatagramHeaderFormat(); // _ZN20DatagramHeaderFormatC2Ev
    void Deserialize(RakNet::BitStream *); // _ZN20DatagramHeaderFormat11DeserializeEPN6RakNet9BitStreamE
    void Serialize(RakNet::BitStream *); // _ZN20DatagramHeaderFormat9SerializeEPN6RakNet9BitStreamE
    void GetDataHeaderByteLength(); // _ZN20DatagramHeaderFormat23GetDataHeaderByteLengthEv
};

#pragma once



class PacketHeader {

public:
    void fromRaw(unsigned int); // _ZN12PacketHeader7fromRawEj
    void getPacketId()const; // _ZNK12PacketHeader11getPacketIdEv
    void getClientId()const; // _ZNK12PacketHeader11getClientIdEv
    void getSenderId()const; // _ZNK12PacketHeader11getSenderIdEv
    PacketHeader(); // _ZN12PacketHeaderC2Ev
    void getChannel()const; // _ZNK12PacketHeader10getChannelEv
    void setSenderSubId(unsigned char); // _ZN12PacketHeader14setSenderSubIdEh
//  void setPacketId(MinecraftPacketIds); //TODO: incomplete function definition // _ZN12PacketHeader11setPacketIdE18MinecraftPacketIds
    void setClientId(unsigned char); // _ZN12PacketHeader11setClientIdEh
    void write(BinaryStream &); // _ZN12PacketHeader5writeER12BinaryStream
};

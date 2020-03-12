#pragma once



class PacketHeader {

public:
    void getPacketId()const;
    void fromRaw(unsigned int);
    void write(BinaryStream &);
    void getSenderId()const;
    void getClientId()const;
    void getChannel()const;
//  void setPacketId(MinecraftPacketIds); //TODO: incomplete function definition
    void setClientId(unsigned char);
    PacketHeader();
    void setSenderSubId(unsigned char);
};

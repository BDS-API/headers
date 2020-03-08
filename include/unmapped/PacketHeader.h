#pragma once

#include "../bedrock/io/BinaryStream"


class PacketHeader {

public:

    void fromRaw(unsigned int);
    void getPacketId(void)const;
    void getClientId(void)const;
    void getSenderId(void)const;
    PacketHeader(void);
    void getChannel(void)const;
    void setSenderSubId(unsigned char);
    void setPacketId(MinecraftPacketIds);
    void setClientId(unsigned char);
    void write(BinaryStream &);
};

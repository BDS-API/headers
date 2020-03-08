#pragma once

#include "../bedrock/io/BinaryStream"


class PacketHeader {

public:

    void fromRaw(unsigned int);
    void getPacketId()const;
    void getClientId()const;
    void getSenderId()const;
    PacketHeader(void);
    void getChannel()const;
    void setSenderSubId(unsigned char);
    void setPacketId(MinecraftPacketIds);
    void setClientId(unsigned char);
    void write(BinaryStream &);
};

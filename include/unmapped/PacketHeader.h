#pragma once

#include "../bedrock/io/BinaryStream.h"


class PacketHeader {

public:
    void fromRaw(unsigned int);
    void getClientId()const;
    PacketHeader();
    void setSenderSubId(unsigned char);
    void write(BinaryStream &);
    void setClientId(unsigned char);
    void getPacketId()const;
//  void setPacketId(MinecraftPacketIds); //TODO: incomplete function definition
    void getSenderId()const;
    void getChannel()const;
};

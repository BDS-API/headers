#pragma once

#include "../bedrock/io/BinaryStream.h"


class PacketHeader {

public:

    void fromRaw(unsigned int);
    void getPacketId()const;
    void getClientId()const;
    void getSenderId()const;
    PacketHeader();
    void getChannel()const;
    void setSenderSubId(unsigned char);
//  void setPacketId(MinecraftPacketIds); //TODO: incomplete function definition
    void setClientId(unsigned char);
    void write(BinaryStream &);
};

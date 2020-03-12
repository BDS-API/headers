#pragma once

#include <string>
#include "Packet.h"


class RequestChunkRadiusPacket : Packet {

public:
    ~RequestChunkRadiusPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    RequestChunkRadiusPacket(int);
    RequestChunkRadiusPacket();
};

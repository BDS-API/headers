#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class RequestChunkRadiusPacket : Packet {

public:
    virtual std::string getName()const;
    ~RequestChunkRadiusPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    RequestChunkRadiusPacket(int);
    RequestChunkRadiusPacket();
};

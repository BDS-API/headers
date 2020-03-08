#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class RequestChunkRadiusPacket : Packet {

public:
    virtual RequestChunkRadiusPacket::~RequestChunkRadiusPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    RequestChunkRadiusPacket(void);
    RequestChunkRadiusPacket(int);
};

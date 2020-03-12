#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class ChunkRadiusUpdatedPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    ~ChunkRadiusUpdatedPacket();
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    ChunkRadiusUpdatedPacket(int);
    ChunkRadiusUpdatedPacket();
};

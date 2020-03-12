#pragma once

#include <string>
#include "Packet.h"


class ChunkRadiusUpdatedPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    ~ChunkRadiusUpdatedPacket();
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    ChunkRadiusUpdatedPacket();
    ChunkRadiusUpdatedPacket(int);
};

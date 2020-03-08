#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class ChunkRadiusUpdatedPacket : Packet {

public:
    virtual ChunkRadiusUpdatedPacket::~ChunkRadiusUpdatedPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ChunkRadiusUpdatedPacket(void);
    ChunkRadiusUpdatedPacket(int);
};

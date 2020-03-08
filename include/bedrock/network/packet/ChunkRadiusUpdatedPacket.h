#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class ChunkRadiusUpdatedPacket : Packet {

public:
    virtual ChunkRadiusUpdatedPacket::~ChunkRadiusUpdatedPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ChunkRadiusUpdatedPacket(void);
    ChunkRadiusUpdatedPacket(int);
};

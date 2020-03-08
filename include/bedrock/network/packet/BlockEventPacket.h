#pragma once

#include "../../io/BinaryStream"
#include "../../util/BlockPos"
#include "../../io/ReadOnlyBinaryStream"


class BlockEventPacket : Packet {

public:
    virtual BlockEventPacket::~BlockEventPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BlockEventPacket(BlockPos, int, int);
    BlockEventPacket(void);
};

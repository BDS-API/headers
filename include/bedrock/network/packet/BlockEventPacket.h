#pragma once

#include "../../util/BlockPos"
#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class BlockEventPacket : Packet {

public:
    BlockEventPacket::~BlockEventPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BlockEventPacket(BlockPos, int, int);
    BlockEventPacket(void);
};

#pragma once

#include "../../util/BlockPos"
#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../nbt/CompoundTag"


class BlockActorDataPacket : Packet {

public:
    BlockActorDataPacket::~BlockActorDataPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BlockActorDataPacket(void);
    BlockActorDataPacket(BlockActorDataPacket const&);
    BlockActorDataPacket(BlockPos const&, CompoundTag);
};

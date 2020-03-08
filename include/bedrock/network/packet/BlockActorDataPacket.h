#pragma once

#include "../../io/BinaryStream"
#include "../../nbt/CompoundTag"
#include "../../util/BlockPos"
#include "../../io/ReadOnlyBinaryStream"


class BlockActorDataPacket : Packet {

public:
    virtual BlockActorDataPacket::~BlockActorDataPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BlockActorDataPacket(void);
    BlockActorDataPacket(BlockActorDataPacket const&);
    BlockActorDataPacket(BlockPos const&, CompoundTag);
};

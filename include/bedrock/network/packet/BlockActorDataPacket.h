#pragma once

#include <string>
#include "../../nbt/CompoundTag.h"
#include "Packet.h"


class BlockActorDataPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    ~BlockActorDataPacket();
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    BlockActorDataPacket(BlockActorDataPacket const&);
    BlockActorDataPacket();
    BlockActorDataPacket(BlockPos const&, CompoundTag);
};

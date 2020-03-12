#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../nbt/CompoundTag.h"
#include "../../util/BlockPos.h"
#include "Packet.h"


class BlockActorDataPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    ~BlockActorDataPacket();
    virtual std::string getName()const;
    BlockActorDataPacket(BlockPos const&, CompoundTag);
    BlockActorDataPacket();
    BlockActorDataPacket(BlockActorDataPacket const&);
};

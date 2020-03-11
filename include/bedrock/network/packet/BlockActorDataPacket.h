#pragma once

#include "../../nbt/CompoundTag.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/BlockPos.h"
#include "./Packet.h"
#include "./BlockActorDataPacket.h"
#include <string>


class BlockActorDataPacket : Packet {

public:
    virtual ~BlockActorDataPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BlockActorDataPacket();
    BlockActorDataPacket(BlockActorDataPacket const&);
    BlockActorDataPacket(BlockPos const&, CompoundTag);
};

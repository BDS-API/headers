#pragma once

#include "../../util/BlockPos"
#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class SetSpawnPositionPacket : Packet {

public:
    SetSpawnPositionPacket::~SetSpawnPositionPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetSpawnPositionPacket(void);
    SetSpawnPositionPacket(BlockPos const&, SpawnPositionType, bool);
};

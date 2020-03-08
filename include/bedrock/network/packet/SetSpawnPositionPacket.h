#pragma once

#include "../../io/BinaryStream"
#include "../../util/BlockPos"
#include "../../io/ReadOnlyBinaryStream"


class SetSpawnPositionPacket : Packet {

public:
    virtual SetSpawnPositionPacket::~SetSpawnPositionPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetSpawnPositionPacket(void);
    SetSpawnPositionPacket(BlockPos const&, SpawnPositionType, bool);
};

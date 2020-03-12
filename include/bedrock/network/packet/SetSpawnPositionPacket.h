#pragma once

#include "../../util/BlockPos.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include "../../io/BinaryStream.h"


class SetSpawnPositionPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    ~SetSpawnPositionPacket();
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    SetSpawnPositionPacket();
//  SetSpawnPositionPacket(BlockPos const&, SpawnPositionType, bool); //TODO: incomplete function definition
};

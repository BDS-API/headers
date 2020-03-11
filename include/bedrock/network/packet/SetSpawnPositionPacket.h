#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/BlockPos.h"
#include "./Packet.h"
#include <string>


class SetSpawnPositionPacket : Packet {

public:
    virtual ~SetSpawnPositionPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetSpawnPositionPacket();
//  SetSpawnPositionPacket(BlockPos const&, SpawnPositionType, bool); //TODO: incomplete function definition
};

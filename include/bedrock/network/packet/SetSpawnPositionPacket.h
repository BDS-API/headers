#pragma once

#include <string>
#include "Packet.h"


class SetSpawnPositionPacket : Packet {

public:
    ~SetSpawnPositionPacket();
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
//  SetSpawnPositionPacket(BlockPos const&, SpawnPositionType, bool); //TODO: incomplete function definition
    SetSpawnPositionPacket();
};

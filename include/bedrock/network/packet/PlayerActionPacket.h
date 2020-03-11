#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/BlockPos.h"
#include "./Packet.h"
#include <string>


class PlayerActionPacket : Packet {

public:
    virtual ~PlayerActionPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerActionPacket();
//  PlayerActionPacket(PlayerActionType, BlockPos const&, int, ActorRuntimeID); //TODO: incomplete function definition
//  PlayerActionPacket(PlayerActionType, int, ActorRuntimeID); //TODO: incomplete function definition
//  PlayerActionPacket(PlayerActionType, BlockPos const&, ActorRuntimeID); //TODO: incomplete function definition
//  PlayerActionPacket(PlayerActionType, ActorRuntimeID); //TODO: incomplete function definition
//  PlayerActionPacket(PlayerActionType, BlockPos const&, unsigned char, ActorRuntimeID); //TODO: incomplete function definition
};

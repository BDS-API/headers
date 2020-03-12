#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../util/BlockPos.h"
#include "Packet.h"


class PlayerActionPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    ~PlayerActionPacket();
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
//  PlayerActionPacket(PlayerActionType, int, ActorRuntimeID); //TODO: incomplete function definition
//  PlayerActionPacket(PlayerActionType, BlockPos const&, ActorRuntimeID); //TODO: incomplete function definition
//  PlayerActionPacket(PlayerActionType, ActorRuntimeID); //TODO: incomplete function definition
//  PlayerActionPacket(PlayerActionType, BlockPos const&, int, ActorRuntimeID); //TODO: incomplete function definition
    PlayerActionPacket();
//  PlayerActionPacket(PlayerActionType, BlockPos const&, unsigned char, ActorRuntimeID); //TODO: incomplete function definition
};

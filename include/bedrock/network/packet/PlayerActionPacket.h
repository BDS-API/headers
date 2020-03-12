#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class PlayerActionPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    ~PlayerActionPacket();
    virtual std::string getName()const;
//  PlayerActionPacket(PlayerActionType, int, ActorRuntimeID); //TODO: incomplete function definition
//  PlayerActionPacket(PlayerActionType, BlockPos const&, int, ActorRuntimeID); //TODO: incomplete function definition
    PlayerActionPacket();
//  PlayerActionPacket(PlayerActionType, BlockPos const&, ActorRuntimeID); //TODO: incomplete function definition
//  PlayerActionPacket(PlayerActionType, ActorRuntimeID); //TODO: incomplete function definition
//  PlayerActionPacket(PlayerActionType, BlockPos const&, unsigned char, ActorRuntimeID); //TODO: incomplete function definition
};

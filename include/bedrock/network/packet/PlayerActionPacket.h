#pragma once

#include "../../util/BlockPos"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../io/BinaryStream"


class PlayerActionPacket : Packet {

public:
    PlayerActionPacket::~PlayerActionPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerActionPacket(void);
    PlayerActionPacket(PlayerActionType, BlockPos const&, int, ActorRuntimeID);
    PlayerActionPacket(PlayerActionType, int, ActorRuntimeID);
    PlayerActionPacket(PlayerActionType, BlockPos const&, ActorRuntimeID);
    PlayerActionPacket(PlayerActionType, ActorRuntimeID);
    PlayerActionPacket(PlayerActionType, BlockPos const&, unsigned char, ActorRuntimeID);
};

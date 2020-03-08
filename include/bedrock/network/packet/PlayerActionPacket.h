#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../util/BlockPos"
#include "../../io/ReadOnlyBinaryStream"


class PlayerActionPacket : Packet {

public:
    virtual PlayerActionPacket::~PlayerActionPacket()
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

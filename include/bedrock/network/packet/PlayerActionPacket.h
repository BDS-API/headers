#pragma once

#include "../../../unmapped/BlockPos"
#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../../unmapped/ActorRuntimeID"


class PlayerActionPacket : Packet {

public:
    virtual PlayerActionPacket::~PlayerActionPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerActionPacket(void);
    PlayerActionPacket(PlayerActionType, BlockPos const&, int, ActorRuntimeID);
    PlayerActionPacket(PlayerActionType, int, ActorRuntimeID);
    PlayerActionPacket(PlayerActionType, BlockPos const&, ActorRuntimeID);
    PlayerActionPacket(PlayerActionType, ActorRuntimeID);
    PlayerActionPacket(PlayerActionType, BlockPos const&, unsigned char, ActorRuntimeID);
};

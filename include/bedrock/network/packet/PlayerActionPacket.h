#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class PlayerActionPacket : Packet {

public:
    ~PlayerActionPacket(); // _ZN18PlayerActionPacketD2Ev
    virtual void getId()const; // _ZNK18PlayerActionPacket5getIdEv
    virtual std::string getName()const; // _ZNK18PlayerActionPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK18PlayerActionPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN18PlayerActionPacket4readER20ReadOnlyBinaryStream
    PlayerActionPacket(); // _ZN18PlayerActionPacketC2Ev
//  PlayerActionPacket(PlayerActionType, BlockPos const&, int, ActorRuntimeID); //TODO: incomplete function definition // _ZN18PlayerActionPacketC2E16PlayerActionTypeRK8BlockPosi14ActorRuntimeID
//  PlayerActionPacket(PlayerActionType, int, ActorRuntimeID); //TODO: incomplete function definition // _ZN18PlayerActionPacketC2E16PlayerActionTypei14ActorRuntimeID
//  PlayerActionPacket(PlayerActionType, BlockPos const&, ActorRuntimeID); //TODO: incomplete function definition // _ZN18PlayerActionPacketC2E16PlayerActionTypeRK8BlockPos14ActorRuntimeID
//  PlayerActionPacket(PlayerActionType, ActorRuntimeID); //TODO: incomplete function definition // _ZN18PlayerActionPacketC2E16PlayerActionType14ActorRuntimeID
//  PlayerActionPacket(PlayerActionType, BlockPos const&, unsigned char, ActorRuntimeID); //TODO: incomplete function definition // _ZN18PlayerActionPacketC2E16PlayerActionTypeRK8BlockPosh14ActorRuntimeID
};

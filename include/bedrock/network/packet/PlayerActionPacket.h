#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include <string>
#include "Packet.h"


class PlayerActionPacket : public Packet {

public:
    virtual ~PlayerActionPacket(); // _ZN18PlayerActionPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK18PlayerActionPacket5getIdEv
    virtual std::string getName()const; // _ZNK18PlayerActionPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK18PlayerActionPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN18PlayerActionPacket4readER20ReadOnlyBinaryStream
    PlayerActionPacket(); // _ZN18PlayerActionPacketC2Ev
//    PlayerActionPacket(long, BlockPos const&, int, ActorRuntimeID); //TODO: incomplete function definition // _ZN18PlayerActionPacketC2E16PlayerActionTypeRK8BlockPosi14ActorRuntimeID
//    PlayerActionPacket(long, int, ActorRuntimeID); //TODO: incomplete function definition // _ZN18PlayerActionPacketC2E16PlayerActionTypei14ActorRuntimeID
//    PlayerActionPacket(long, BlockPos const&, ActorRuntimeID); //TODO: incomplete function definition // _ZN18PlayerActionPacketC2E16PlayerActionTypeRK8BlockPos14ActorRuntimeID
//    PlayerActionPacket(long, ActorRuntimeID); //TODO: incomplete function definition // _ZN18PlayerActionPacketC2E16PlayerActionType14ActorRuntimeID
//    PlayerActionPacket(long, BlockPos const&, unsigned char, ActorRuntimeID); //TODO: incomplete function definition // _ZN18PlayerActionPacketC2E16PlayerActionTypeRK8BlockPosh14ActorRuntimeID
};

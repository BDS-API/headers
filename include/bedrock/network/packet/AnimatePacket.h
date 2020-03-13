#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class AnimatePacket : Packet {

public:
    ~AnimatePacket(); // _ZN13AnimatePacketD2Ev
    virtual void getId()const; // _ZNK13AnimatePacket5getIdEv
    virtual std::string getName()const; // _ZNK13AnimatePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK13AnimatePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN13AnimatePacket4readER20ReadOnlyBinaryStream
    AnimatePacket(); // _ZN13AnimatePacketC2Ev
//  AnimatePacket(AnimatePacket::Action, ActorRuntimeID); //TODO: incomplete function definition // _ZN13AnimatePacketC2ENS_6ActionE14ActorRuntimeID
//  AnimatePacket(AnimatePacket::Action, ActorRuntimeID, float); //TODO: incomplete function definition // _ZN13AnimatePacketC2ENS_6ActionE14ActorRuntimeIDf
//  AnimatePacket(AnimatePacket::Action, Actor &); //TODO: incomplete function definition // _ZN13AnimatePacketC2ENS_6ActionER5Actor
};

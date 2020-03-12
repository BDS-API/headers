#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class AnimatePacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual std::string getName()const;
    ~AnimatePacket();
    AnimatePacket();
//  AnimatePacket(AnimatePacket::Action, Actor &); //TODO: incomplete function definition
//  AnimatePacket(AnimatePacket::Action, ActorRuntimeID, float); //TODO: incomplete function definition
//  AnimatePacket(AnimatePacket::Action, ActorRuntimeID); //TODO: incomplete function definition
};

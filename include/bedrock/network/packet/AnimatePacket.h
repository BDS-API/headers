#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../actor/Actor.h"
#include "Packet.h"


class AnimatePacket : Packet {

public:
    virtual void getId()const;
    ~AnimatePacket();
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
//  AnimatePacket(AnimatePacket::Action, Actor &); //TODO: incomplete function definition
    AnimatePacket();
//  AnimatePacket(AnimatePacket::Action, ActorRuntimeID, float); //TODO: incomplete function definition
//  AnimatePacket(AnimatePacket::Action, ActorRuntimeID); //TODO: incomplete function definition
};

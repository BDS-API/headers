#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../io/BinaryStream.h"
#include "../../actor/Actor.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include <string>


class AnimatePacket : Packet {

public:
    virtual ~AnimatePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AnimatePacket();
//  AnimatePacket(AnimatePacket::Action, ActorRuntimeID); //TODO: incomplete function definition
//  AnimatePacket(AnimatePacket::Action, ActorRuntimeID, float); //TODO: incomplete function definition
//  AnimatePacket(AnimatePacket::Action, Actor &); //TODO: incomplete function definition
};

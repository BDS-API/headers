#pragma once

#include "../../actor/Actor"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../io/BinaryStream"


class AnimatePacket : Packet {

public:
    AnimatePacket::~AnimatePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AnimatePacket(void);
    AnimatePacket(AnimatePacket::Action, ActorRuntimeID);
    AnimatePacket(AnimatePacket::Action, ActorRuntimeID, float);
    AnimatePacket(AnimatePacket::Action, Actor &);
};

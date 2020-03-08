#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../actor/Actor"
#include "../../io/ReadOnlyBinaryStream"


class AnimatePacket : Packet {

public:
    virtual AnimatePacket::~AnimatePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AnimatePacket(void);
    AnimatePacket(AnimatePacket::Action, ActorRuntimeID);
    AnimatePacket(AnimatePacket::Action, ActorRuntimeID, float);
    AnimatePacket(AnimatePacket::Action, Actor &);
};

#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../../unmapped/ActorRuntimeID"
#include "../../actor/Actor"


class AnimatePacket : Packet {

public:
    virtual AnimatePacket::~AnimatePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AnimatePacket(void);
    AnimatePacket(AnimatePacket::Action, ActorRuntimeID);
    AnimatePacket(AnimatePacket::Action, ActorRuntimeID, float);
    AnimatePacket(AnimatePacket::Action, Actor &);
};

#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../../unmapped/ActorRuntimeID"


class ActorFallPacket : Packet {

public:
    virtual ActorFallPacket::~ActorFallPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ActorFallPacket(void);
    ActorFallPacket(ActorRuntimeID, float, bool);
};

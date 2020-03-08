#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../io/ReadOnlyBinaryStream"


class ActorFallPacket : Packet {

public:
    virtual ActorFallPacket::~ActorFallPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ActorFallPacket(void);
    ActorFallPacket(ActorRuntimeID, float, bool);
};

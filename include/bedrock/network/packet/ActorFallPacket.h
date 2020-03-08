#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../io/BinaryStream"


class ActorFallPacket : Packet {

public:
    ActorFallPacket::~ActorFallPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ActorFallPacket(void);
    ActorFallPacket(ActorRuntimeID, float, bool);
};

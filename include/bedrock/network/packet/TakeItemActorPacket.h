#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../io/ReadOnlyBinaryStream"


class TakeItemActorPacket : Packet {

public:
    TakeItemActorPacket::~TakeItemActorPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    TakeItemActorPacket(void);
    TakeItemActorPacket(ActorRuntimeID, ActorRuntimeID);
};

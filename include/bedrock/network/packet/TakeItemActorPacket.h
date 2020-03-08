#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"


class TakeItemActorPacket : Packet {

public:
    virtual TakeItemActorPacket::~TakeItemActorPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    TakeItemActorPacket(void);
    TakeItemActorPacket(ActorRuntimeID, ActorRuntimeID);
};

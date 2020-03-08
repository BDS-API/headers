#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../io/BinaryStream"


class ActorEventPacket : Packet {

public:
    ActorEventPacket::~ActorEventPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ActorEventPacket(void);
    ActorEventPacket(ActorRuntimeID, ActorEvent, int);
};

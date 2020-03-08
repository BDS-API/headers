#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../io/ReadOnlyBinaryStream"


class ActorEventPacket : Packet {

public:
    virtual ActorEventPacket::~ActorEventPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ActorEventPacket(void);
    ActorEventPacket(ActorRuntimeID, ActorEvent, int);
};

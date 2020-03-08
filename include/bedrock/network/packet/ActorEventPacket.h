#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../../unmapped/ActorRuntimeID"


class ActorEventPacket : Packet {

public:
    virtual ActorEventPacket::~ActorEventPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ActorEventPacket(void);
    ActorEventPacket(ActorRuntimeID, ActorEvent, int);
};

#pragma once

#include "../../io/BinaryStream"
#include "../../../unmapped/ActorRuntimeID"
#include "../../io/ReadOnlyBinaryStream"


class TakeItemActorPacket : Packet {

public:
    virtual TakeItemActorPacket::~TakeItemActorPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    TakeItemActorPacket(void);
    TakeItemActorPacket(ActorRuntimeID, ActorRuntimeID);
};

#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorLink"
#include "../../io/ReadOnlyBinaryStream"


class SetActorLinkPacket : Packet {

public:
    virtual SetActorLinkPacket::~SetActorLinkPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetActorLinkPacket(void);
    SetActorLinkPacket(ActorLink const&);
};

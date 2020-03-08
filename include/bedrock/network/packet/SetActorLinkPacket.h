#pragma once

#include "../../io/BinaryStream"
#include "../../../unmapped/ActorLink"
#include "../../io/ReadOnlyBinaryStream"


class SetActorLinkPacket : Packet {

public:
    virtual SetActorLinkPacket::~SetActorLinkPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetActorLinkPacket(void);
    SetActorLinkPacket(ActorLink const&);
};

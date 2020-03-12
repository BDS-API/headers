#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../actor/unmapped/ActorLink.h"
#include "Packet.h"


class SetActorLinkPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    ~SetActorLinkPacket();
    SetActorLinkPacket();
    SetActorLinkPacket(ActorLink const&);
};

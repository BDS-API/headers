#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../actor/unmapped/ActorLink.h"
#include <string>


class SetActorLinkPacket : Packet {

public:
    virtual ~SetActorLinkPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetActorLinkPacket();
    SetActorLinkPacket(ActorLink const&);
};

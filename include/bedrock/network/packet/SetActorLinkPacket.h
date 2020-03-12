#pragma once

#include <string>
#include "Packet.h"


class SetActorLinkPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    ~SetActorLinkPacket();
    virtual void read(ReadOnlyBinaryStream &);
    SetActorLinkPacket(ActorLink const&);
    SetActorLinkPacket();
};

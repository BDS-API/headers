#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class ActorPickRequestPacket : Packet {

public:
    ActorPickRequestPacket::~ActorPickRequestPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ActorPickRequestPacket(void);
    ActorPickRequestPacket(long const&, unsigned char const&);
};

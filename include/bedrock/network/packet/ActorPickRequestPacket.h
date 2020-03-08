#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class ActorPickRequestPacket : Packet {

public:
    virtual ActorPickRequestPacket::~ActorPickRequestPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ActorPickRequestPacket(void);
    ActorPickRequestPacket(long const&, unsigned char const&);
};

#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class ActorPickRequestPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void getId()const;
    ~ActorPickRequestPacket();
    ActorPickRequestPacket(long const&, unsigned char const&);
    ActorPickRequestPacket();
};

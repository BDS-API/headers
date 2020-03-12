#pragma once

#include <string>
#include "Packet.h"


class ActorPickRequestPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual std::string getName()const;
    ~ActorPickRequestPacket();
    ActorPickRequestPacket();
    ActorPickRequestPacket(long const&, unsigned char const&);
};

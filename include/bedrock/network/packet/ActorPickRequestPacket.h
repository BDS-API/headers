#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../io/BinaryStream.h"
#include <string>


class ActorPickRequestPacket : Packet {

public:
    virtual ~ActorPickRequestPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ActorPickRequestPacket();
    ActorPickRequestPacket(long const&, unsigned char const&);
};

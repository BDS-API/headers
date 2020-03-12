#pragma once

#include <string>
#include "Packet.h"


class AddItemActorPacket : Packet {

public:
    virtual void getId()const;
    virtual std::string getName()const;
    ~AddItemActorPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    AddItemActorPacket();
    AddItemActorPacket(ItemActor &);
};

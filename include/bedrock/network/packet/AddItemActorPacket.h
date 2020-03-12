#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../actor/ItemActor.h"
#include "Packet.h"


class AddItemActorPacket : Packet {

public:
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    ~AddItemActorPacket();
    virtual std::string getName()const;
    AddItemActorPacket(ItemActor &);
    AddItemActorPacket();
};

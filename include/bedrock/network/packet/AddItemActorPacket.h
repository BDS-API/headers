#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../actor/ItemActor.h"
#include "./Packet.h"
#include <string>


class AddItemActorPacket : Packet {

public:
    virtual ~AddItemActorPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AddItemActorPacket();
    AddItemActorPacket(ItemActor &);
};

#pragma once

#include "../../io/BinaryStream"
#include "../../actor/ItemActor"
#include "../../io/ReadOnlyBinaryStream"


class AddItemActorPacket : Packet {

public:
    AddItemActorPacket::~AddItemActorPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AddItemActorPacket(void);
    AddItemActorPacket(ItemActor &);
};

#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/ItemActor"


class AddItemActorPacket : Packet {

public:
    virtual AddItemActorPacket::~AddItemActorPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AddItemActorPacket(void);
    AddItemActorPacket(ItemActor &);
};

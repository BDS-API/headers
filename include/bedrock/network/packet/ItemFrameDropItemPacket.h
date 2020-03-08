#pragma once

#include "../../io/BinaryStream"
#include "../../item/ItemStack"
#include "../../io/ReadOnlyBinaryStream"


class ItemFrameDropItemPacket : Packet {

public:
    virtual ItemFrameDropItemPacket::~ItemFrameDropItemPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ItemFrameDropItemPacket(void);
    ItemFrameDropItemPacket(ItemStack const&);
};

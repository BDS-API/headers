#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../item/ItemStack.h"
#include "Packet.h"


class ItemFrameDropItemPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    ~ItemFrameDropItemPacket();
    virtual std::string getName()const;
    ItemFrameDropItemPacket();
    ItemFrameDropItemPacket(ItemStack const&);
};

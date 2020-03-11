#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../item/ItemStack.h"
#include <string>


class ItemFrameDropItemPacket : Packet {

public:
    virtual ~ItemFrameDropItemPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ItemFrameDropItemPacket();
    ItemFrameDropItemPacket(ItemStack const&);
};

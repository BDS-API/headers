#pragma once

#include <string>
#include "Packet.h"


class ItemFrameDropItemPacket : Packet {

public:
    virtual void getId()const;
    ~ItemFrameDropItemPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    ItemFrameDropItemPacket(ItemStack const&);
    ItemFrameDropItemPacket();
};

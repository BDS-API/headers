#pragma once

#include "../../io/BinaryStream"
#include "../../actor/Player"
#include "../../io/ReadOnlyBinaryStream"
#include "../../item/ItemStack"


class InventoryContentPacket : Packet {

public:
    virtual InventoryContentPacket::~InventoryContentPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    InventoryContentPacket(void);
    InventoryContentPacket(ContainerID, std::vector<ItemStack, std::allocator<ItemStack>> const&);
    void fromPlayerInventoryId(ContainerID, Player &);
};

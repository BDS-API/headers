#pragma once

#include "../../item/ItemStack"
#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../actor/Player"


class InventoryContentPacket : Packet {

public:
    InventoryContentPacket::~InventoryContentPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    InventoryContentPacket(void);
    InventoryContentPacket(ContainerID, std::vector<ItemStack, std::allocator<ItemStack>> const&);
    void fromPlayerInventoryId(ContainerID, Player &);
};

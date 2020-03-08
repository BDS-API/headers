#pragma once

#include "../../item/ItemStack"
#include "../../../mce/UUID"
#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class CraftingEventPacket : Packet {

public:
    CraftingEventPacket::~CraftingEventPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CraftingEventPacket(void);
    CraftingEventPacket(ContainerID, int, mce::UUID const&, std::vector<ItemStack, std::allocator<ItemStack>> &&, std::vector<ItemStack, std::allocator<ItemStack>> &);
    CraftingEventPacket(ContainerID, int, mce::UUID const&);
};

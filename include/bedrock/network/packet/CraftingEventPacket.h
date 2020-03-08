#pragma once

#include "../../io/BinaryStream"
#include "../../../mce/UUID"
#include "../../io/ReadOnlyBinaryStream"
#include "../../item/ItemStack"


class CraftingEventPacket : Packet {

public:
    virtual CraftingEventPacket::~CraftingEventPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CraftingEventPacket(void);
    CraftingEventPacket(ContainerID, int, mce::UUID const&, std::vector<ItemStack, std::allocator<ItemStack>> &&, std::vector<ItemStack, std::allocator<ItemStack>> &);
    CraftingEventPacket(ContainerID, int, mce::UUID const&);
};

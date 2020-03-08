#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../../mce/UUID"


class CraftingEventPacket : Packet {

public:
    virtual CraftingEventPacket::~CraftingEventPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CraftingEventPacket(void);
    CraftingEventPacket(ContainerID, int, mce::UUID const&, std::vector<ItemStack, std::allocator<ItemStack>> &&, std::vector<ItemStack, std::allocator<ItemStack>> &);
    CraftingEventPacket(ContainerID, int, mce::UUID const&);
};

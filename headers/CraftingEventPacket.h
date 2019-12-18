#pragma once

class CraftingEventPacket : Packet {

public:
    virtual ~CraftingEventPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void CraftingEventPacket(void);
    void CraftingEventPacket(ContainerID, int, mce::UUID const&, std::vector<ItemStack, std::allocator<ItemStack>> &&, std::vector<ItemStack, std::allocator<ItemStack>> &);
    void CraftingEventPacket(ContainerID, int, mce::UUID const&);
};

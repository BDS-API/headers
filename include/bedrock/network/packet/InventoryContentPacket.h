#pragma once

class InventoryContentPacket : Packet {

public:
    virtual InventoryContentPacket::~InventoryContentPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    InventoryContentPacket(void);
    InventoryContentPacket(ContainerID, std::vector<ItemStack, std::allocator<ItemStack>> const&);
    void fromPlayerInventoryId(ContainerID, Player &);
};

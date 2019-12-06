#pragma once

class InventoryContentPacket : Packet {

public:
    virtual ~InventoryContentPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void InventoryContentPacket(void);
    void InventoryContentPacket(ContainerID, std::vector<ItemStack, std::allocator<ItemStack>> const&);
    void fromPlayerInventoryId(ContainerID, Player &);
};

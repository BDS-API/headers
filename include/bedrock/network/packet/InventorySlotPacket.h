#pragma once

class InventorySlotPacket : Packet {

public:
    virtual InventorySlotPacket::~InventorySlotPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    InventorySlotPacket(void);
    InventorySlotPacket(ContainerID, unsigned int, ItemStack const&);
};

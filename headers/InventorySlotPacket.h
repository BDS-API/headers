#pragma once

class InventorySlotPacket : Packet {

public:
    virtual ~InventorySlotPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void InventorySlotPacket(void);
    void InventorySlotPacket(ContainerID, unsigned int, ItemStack const&);
};

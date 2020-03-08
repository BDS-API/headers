#pragma once

#include "../../item/ItemStack"
#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class InventorySlotPacket : Packet {

public:
    InventorySlotPacket::~InventorySlotPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    InventorySlotPacket(void);
    InventorySlotPacket(ContainerID, unsigned int, ItemStack const&);
};

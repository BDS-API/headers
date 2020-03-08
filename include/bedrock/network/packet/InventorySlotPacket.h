#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../item/ItemStack"


class InventorySlotPacket : Packet {

public:
    virtual InventorySlotPacket::~InventorySlotPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    InventorySlotPacket(void);
    InventorySlotPacket(ContainerID, unsigned int, ItemStack const&);
};

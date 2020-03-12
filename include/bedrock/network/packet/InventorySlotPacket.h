#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../item/ItemStack.h"
#include "Packet.h"


class InventorySlotPacket : Packet {

public:
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~InventorySlotPacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
//  InventorySlotPacket(ContainerID, unsigned int, ItemStack const&); //TODO: incomplete function definition
    InventorySlotPacket();
};

#pragma once

#include <string>
#include "Packet.h"


class InventorySlotPacket : Packet {

public:
    virtual std::string getName()const;
    ~InventorySlotPacket();
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
//  InventorySlotPacket(ContainerID, unsigned int, ItemStack const&); //TODO: incomplete function definition
    InventorySlotPacket();
};

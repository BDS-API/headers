#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../item/ItemStack.h"
#include <string>


class InventorySlotPacket : Packet {

public:
    virtual ~InventorySlotPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    InventorySlotPacket();
//  InventorySlotPacket(ContainerID, unsigned int, ItemStack const&); //TODO: incomplete function definition
};

#pragma once

#include <string>
#include "Packet.h"
#include <vector>


class InventoryContentPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    ~InventoryContentPacket();
    InventoryContentPacket();
//  InventoryContentPacket(ContainerID, std::vector<ItemStack> const&); //TODO: incomplete function definition
//  void fromPlayerInventoryId(ContainerID, Player &); //TODO: incomplete function definition
};

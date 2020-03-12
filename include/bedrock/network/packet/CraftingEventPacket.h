#pragma once

#include <string>
#include "Packet.h"
#include <vector>


class CraftingEventPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void getId()const;
    ~CraftingEventPacket();
    virtual void read(ReadOnlyBinaryStream &);
//  CraftingEventPacket(ContainerID, int, mce::UUID const&); //TODO: incomplete function definition
//  CraftingEventPacket(ContainerID, int, mce::UUID const&, std::vector<ItemStack> &&, std::vector<ItemStack> &); //TODO: incomplete function definition
    CraftingEventPacket();
};

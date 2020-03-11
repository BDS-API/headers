#pragma once

#include "../../io/BinaryStream.h"
#include "../../../mce/UUID.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <memory>
#include "./Packet.h"
#include "../../item/ItemStack.h"
#include <vector>
#include <string>


class CraftingEventPacket : Packet {

public:
    virtual ~CraftingEventPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CraftingEventPacket();
//  CraftingEventPacket(ContainerID, int, mce::UUID const&, std::vector<ItemStack, std::allocator<ItemStack>> &&, std::vector<ItemStack, std::allocator<ItemStack>> &); //TODO: incomplete function definition
//  CraftingEventPacket(ContainerID, int, mce::UUID const&); //TODO: incomplete function definition
};

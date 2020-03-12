#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../item/ItemStack.h"
#include "../../../mce/UUID.h"
#include <vector>
#include "Packet.h"


class CraftingEventPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    ~CraftingEventPacket();
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
//  CraftingEventPacket(ContainerID, int, mce::UUID const&); //TODO: incomplete function definition
    CraftingEventPacket();
//  CraftingEventPacket(ContainerID, int, mce::UUID const&, std::vector<ItemStack> &&, std::vector<ItemStack> &); //TODO: incomplete function definition
};

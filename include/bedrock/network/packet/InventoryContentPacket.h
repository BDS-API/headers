#pragma once

#include <string>
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <memory>
#include "./Packet.h"
#include "../../item/ItemStack.h"
#include <vector>
#include "../../actor/Player.h"


class InventoryContentPacket : Packet {

public:
    virtual ~InventoryContentPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    InventoryContentPacket();
//  InventoryContentPacket(ContainerID, std::vector<ItemStack, std::allocator<ItemStack>> const&); //TODO: incomplete function definition
//  void fromPlayerInventoryId(ContainerID, Player &); //TODO: incomplete function definition
};

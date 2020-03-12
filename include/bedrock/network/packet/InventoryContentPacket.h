#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../item/ItemStack.h"
#include <vector>
#include "../../actor/Player.h"
#include "Packet.h"


class InventoryContentPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    ~InventoryContentPacket();
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual std::string getName()const;
    InventoryContentPacket();
//  void fromPlayerInventoryId(ContainerID, Player &); //TODO: incomplete function definition
//  InventoryContentPacket(ContainerID, std::vector<ItemStack> const&); //TODO: incomplete function definition
};

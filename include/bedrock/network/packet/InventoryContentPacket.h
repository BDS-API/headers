#pragma once

#include <string>
#include "Packet.h"
#include <vector>


class InventoryContentPacket : Packet {

public:
    ~InventoryContentPacket(); // _ZN22InventoryContentPacketD2Ev
    virtual void getId()const; // _ZNK22InventoryContentPacket5getIdEv
    virtual std::string getName()const; // _ZNK22InventoryContentPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK22InventoryContentPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN22InventoryContentPacket4readER20ReadOnlyBinaryStream
    InventoryContentPacket(); // _ZN22InventoryContentPacketC2Ev
//  InventoryContentPacket(ContainerID, std::vector<ItemStack> const&); //TODO: incomplete function definition // _ZN22InventoryContentPacketC2E11ContainerIDRKSt6vectorI9ItemStackSaIS2_EE
//  void fromPlayerInventoryId(ContainerID, Player &); //TODO: incomplete function definition // _ZN22InventoryContentPacket21fromPlayerInventoryIdE11ContainerIDR6Player
};

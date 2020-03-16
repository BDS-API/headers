#pragma once

#include <string>
#include <vector>
#include "Packet.h"


class InventoryContentPacket : public Packet {

public:
    virtual ~InventoryContentPacket(); // _ZN22InventoryContentPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK22InventoryContentPacket5getIdEv
    virtual std::string getName()const; // _ZNK22InventoryContentPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK22InventoryContentPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN22InventoryContentPacket4readER20ReadOnlyBinaryStream
    InventoryContentPacket(); // _ZN22InventoryContentPacketC2Ev
//    InventoryContentPacket(long, std::vector<ItemStack> const&); //TODO: incomplete function definition // _ZN22InventoryContentPacketC2E11ContainerIDRKSt6vectorI9ItemStackSaIS2_EE
//    void fromPlayerInventoryId(long, Player &); //TODO: incomplete function definition // _ZN22InventoryContentPacket21fromPlayerInventoryIdE11ContainerIDR6Player
};

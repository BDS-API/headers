#pragma once

#include <string>
#include "Packet.h"


class InventorySlotPacket : Packet {

public:
    ~InventorySlotPacket(); // _ZN19InventorySlotPacketD2Ev
    virtual void getId()const; // _ZNK19InventorySlotPacket5getIdEv
    virtual std::string getName()const; // _ZNK19InventorySlotPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK19InventorySlotPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN19InventorySlotPacket4readER20ReadOnlyBinaryStream
    InventorySlotPacket(); // _ZN19InventorySlotPacketC2Ev
//  InventorySlotPacket(ContainerID, unsigned int, ItemStack const&); //TODO: incomplete function definition // _ZN19InventorySlotPacketC2E11ContainerIDjRK9ItemStack
};

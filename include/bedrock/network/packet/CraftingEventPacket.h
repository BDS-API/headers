#pragma once

#include <string>
#include <vector>
#include "Packet.h"


class CraftingEventPacket : public Packet {

public:
    virtual ~CraftingEventPacket(); // _ZN19CraftingEventPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK19CraftingEventPacket5getIdEv
    virtual std::string getName()const; // _ZNK19CraftingEventPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK19CraftingEventPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN19CraftingEventPacket4readER20ReadOnlyBinaryStream
    CraftingEventPacket(); // _ZN19CraftingEventPacketC2Ev
//    CraftingEventPacket(long, int, mce::UUID const&, std::vector<ItemStack> &&, std::vector<ItemStack> &); //TODO: incomplete function definition // _ZN19CraftingEventPacketC2E11ContainerIDiRKN3mce4UUIDEOSt6vectorI9ItemStackSaIS6_EES9_
//    CraftingEventPacket(long, int, mce::UUID const&); //TODO: incomplete function definition // _ZN19CraftingEventPacketC2E11ContainerIDiRKN3mce4UUIDE
};

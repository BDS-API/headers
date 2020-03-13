#pragma once

#include <string>
#include "Packet.h"


class CraftingDataPacket : Packet {

public:
    ~CraftingDataPacket(); // _ZN18CraftingDataPacketD2Ev
    virtual void getId()const; // _ZNK18CraftingDataPacket5getIdEv
    virtual std::string getName()const; // _ZNK18CraftingDataPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK18CraftingDataPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN18CraftingDataPacket4readER20ReadOnlyBinaryStream
    CraftingDataPacket(); // _ZN18CraftingDataPacketC2Ev
};

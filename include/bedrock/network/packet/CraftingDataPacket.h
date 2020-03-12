#pragma once

#include <string>
#include "Packet.h"


class CraftingDataPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    ~CraftingDataPacket();
    virtual void read(ReadOnlyBinaryStream &);
    CraftingDataPacket();
};

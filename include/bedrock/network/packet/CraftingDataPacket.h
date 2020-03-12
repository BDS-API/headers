#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class CraftingDataPacket : Packet {

public:
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    ~CraftingDataPacket();
    virtual void read(ReadOnlyBinaryStream &);
    CraftingDataPacket();
};

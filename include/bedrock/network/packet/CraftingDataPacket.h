#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class CraftingDataPacket : Packet {

public:
    virtual CraftingDataPacket::~CraftingDataPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CraftingDataPacket(void);
};

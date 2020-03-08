#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../nbt/CompoundTag"


class BiomeDefinitionListPacket : Packet {

public:
    virtual BiomeDefinitionListPacket::~BiomeDefinitionListPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BiomeDefinitionListPacket(void);
    BiomeDefinitionListPacket(CompoundTag);
};

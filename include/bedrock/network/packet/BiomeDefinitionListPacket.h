#pragma once

#include "../../io/BinaryStream"
#include "../../nbt/CompoundTag"
#include "../../io/ReadOnlyBinaryStream"


class BiomeDefinitionListPacket : Packet {

public:
    BiomeDefinitionListPacket::~BiomeDefinitionListPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BiomeDefinitionListPacket(void);
    BiomeDefinitionListPacket(CompoundTag);
};

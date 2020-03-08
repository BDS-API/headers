#pragma once

#include "../../io/BinaryStream"
#include "../../nbt/CompoundTag"
#include "../../io/ReadOnlyBinaryStream"


class BiomeDefinitionListPacket : Packet {

public:
    virtual BiomeDefinitionListPacket::~BiomeDefinitionListPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BiomeDefinitionListPacket(void);
    BiomeDefinitionListPacket(CompoundTag);
};

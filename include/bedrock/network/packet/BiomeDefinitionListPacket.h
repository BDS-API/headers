#pragma once

#include <string>
#include "../../nbt/CompoundTag.h"
#include "Packet.h"


class BiomeDefinitionListPacket : Packet {

public:
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~BiomeDefinitionListPacket();
    BiomeDefinitionListPacket(CompoundTag);
    BiomeDefinitionListPacket();
};

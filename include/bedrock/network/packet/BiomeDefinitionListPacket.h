#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../nbt/CompoundTag.h"
#include "Packet.h"


class BiomeDefinitionListPacket : Packet {

public:
    virtual void getId()const;
    ~BiomeDefinitionListPacket();
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    BiomeDefinitionListPacket(CompoundTag);
    BiomeDefinitionListPacket();
};

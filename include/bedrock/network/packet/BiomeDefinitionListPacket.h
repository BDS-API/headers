#pragma once

#include "../../nbt/CompoundTag.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include <string>


class BiomeDefinitionListPacket : Packet {

public:
    virtual ~BiomeDefinitionListPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BiomeDefinitionListPacket();
    BiomeDefinitionListPacket(CompoundTag);
};

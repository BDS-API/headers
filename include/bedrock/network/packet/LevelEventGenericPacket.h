#pragma once

#include "../../nbt/CompoundTag.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include <string>


class LevelEventGenericPacket : Packet {

public:
    virtual ~LevelEventGenericPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

//  LevelEventGenericPacket(LevelEvent, CompoundTag const&); //TODO: incomplete function definition
    LevelEventGenericPacket();
};

#pragma once

#include "../../nbt/CompoundTag.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include "../../io/BinaryStream.h"


class LevelEventGenericPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~LevelEventGenericPacket();
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    LevelEventGenericPacket();
//  LevelEventGenericPacket(LevelEvent, CompoundTag const&); //TODO: incomplete function definition
};

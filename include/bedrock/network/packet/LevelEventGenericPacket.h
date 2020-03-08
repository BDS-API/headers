#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../nbt/CompoundTag"


class LevelEventGenericPacket : Packet {

public:
    LevelEventGenericPacket::~LevelEventGenericPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LevelEventGenericPacket(LevelEvent, CompoundTag const&);
    LevelEventGenericPacket(void);
};

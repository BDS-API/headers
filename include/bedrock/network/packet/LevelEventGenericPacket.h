#pragma once

#include "../../io/BinaryStream"
#include "../../nbt/CompoundTag"
#include "../../io/ReadOnlyBinaryStream"


class LevelEventGenericPacket : Packet {

public:
    virtual LevelEventGenericPacket::~LevelEventGenericPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LevelEventGenericPacket(LevelEvent, CompoundTag const&);
    LevelEventGenericPacket(void);
};

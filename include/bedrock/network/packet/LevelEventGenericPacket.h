#pragma once

#include <string>
#include "Packet.h"


class LevelEventGenericPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void getId()const;
    ~LevelEventGenericPacket();
//  LevelEventGenericPacket(LevelEvent, CompoundTag const&); //TODO: incomplete function definition
    LevelEventGenericPacket();
};

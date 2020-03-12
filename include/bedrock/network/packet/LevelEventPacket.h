#pragma once

#include <string>
#include "Packet.h"


class LevelEventPacket : Packet {

public:
    ~LevelEventPacket();
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
//  LevelEventPacket(LevelEvent, Vec3 const&, int); //TODO: incomplete function definition
    LevelEventPacket();
//  LevelEventPacket(LevelEvent, float, float, float, int); //TODO: incomplete function definition
};

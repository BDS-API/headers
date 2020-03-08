#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../util/Vec3"
#include "../../io/BinaryStream"


class LevelEventPacket : Packet {

public:
    LevelEventPacket::~LevelEventPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LevelEventPacket(LevelEvent, Vec3 const&, int);
    LevelEventPacket(LevelEvent, float, float, float, int);
    LevelEventPacket(void);
};

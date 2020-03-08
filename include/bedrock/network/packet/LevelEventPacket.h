#pragma once

#include "../../io/BinaryStream"
#include "../../util/Vec3"
#include "../../io/ReadOnlyBinaryStream"


class LevelEventPacket : Packet {

public:
    virtual LevelEventPacket::~LevelEventPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LevelEventPacket(LevelEvent, Vec3 const&, int);
    LevelEventPacket(LevelEvent, float, float, float, int);
    LevelEventPacket(void);
};

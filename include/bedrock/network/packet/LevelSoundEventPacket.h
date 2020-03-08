#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../util/Vec3"
#include "../../io/BinaryStream"


class LevelSoundEventPacket : Packet {

public:
    LevelSoundEventPacket::~LevelSoundEventPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LevelSoundEventPacket(LevelSoundEvent, Vec3 const&, int, std::string const&, bool, bool);
    LevelSoundEventPacket(void);
};

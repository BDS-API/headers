#pragma once

#include "../../io/BinaryStream"
#include "../../util/Vec3"
#include "../../io/ReadOnlyBinaryStream"


class LevelSoundEventPacket : Packet {

public:
    virtual LevelSoundEventPacket::~LevelSoundEventPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LevelSoundEventPacket(LevelSoundEvent, Vec3 const&, int, std::string const&, bool, bool);
    LevelSoundEventPacket(void);
};

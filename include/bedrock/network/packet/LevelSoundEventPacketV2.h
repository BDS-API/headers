#pragma once

#include "../../io/BinaryStream"
#include "../../util/Vec3"
#include "../../io/ReadOnlyBinaryStream"


class LevelSoundEventPacketV2 : Packet {

public:
    virtual LevelSoundEventPacketV2::~LevelSoundEventPacketV2()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LevelSoundEventPacketV2(LevelSoundEvent, Vec3 const&, int, std::string const&, bool, bool);
    LevelSoundEventPacketV2(void);
};

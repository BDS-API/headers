#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../util/Vec3"
#include "../../io/BinaryStream"


class LevelSoundEventPacketV1 : Packet {

public:
    LevelSoundEventPacketV1::~LevelSoundEventPacketV1()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LevelSoundEventPacketV1(LevelSoundEvent, Vec3 const&, int, ActorType, bool, bool);
    LevelSoundEventPacketV1(void);
};

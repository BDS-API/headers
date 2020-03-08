#pragma once

#include "../../io/BinaryStream"
#include "../../util/Vec3"
#include "../../io/ReadOnlyBinaryStream"


class LevelSoundEventPacketV1 : Packet {

public:
    virtual LevelSoundEventPacketV1::~LevelSoundEventPacketV1()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LevelSoundEventPacketV1(LevelSoundEvent, Vec3 const&, int, ActorType, bool, bool);
    LevelSoundEventPacketV1(void);
};

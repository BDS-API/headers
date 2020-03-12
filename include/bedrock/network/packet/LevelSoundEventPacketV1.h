#pragma once

#include <string>
#include "Packet.h"


class LevelSoundEventPacketV1 : Packet {

public:
    ~LevelSoundEventPacketV1();
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    LevelSoundEventPacketV1();
//  LevelSoundEventPacketV1(LevelSoundEvent, Vec3 const&, int, ActorType, bool, bool); //TODO: incomplete function definition
};

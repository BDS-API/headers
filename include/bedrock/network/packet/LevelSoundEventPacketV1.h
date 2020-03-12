#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/Vec3.h"
#include "Packet.h"


class LevelSoundEventPacketV1 : Packet {

public:
    ~LevelSoundEventPacketV1();
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
//  LevelSoundEventPacketV1(LevelSoundEvent, Vec3 const&, int, ActorType, bool, bool); //TODO: incomplete function definition
    LevelSoundEventPacketV1();
};

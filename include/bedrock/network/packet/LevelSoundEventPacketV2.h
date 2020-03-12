#pragma once

#include <string>
#include "Packet.h"


class LevelSoundEventPacketV2 : Packet {

public:
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    ~LevelSoundEventPacketV2();
//  LevelSoundEventPacketV2(LevelSoundEvent, Vec3 const&, int, std::string const&, bool, bool); //TODO: incomplete function definition
    LevelSoundEventPacketV2();
};

#pragma once

#include <string>
#include "Packet.h"


class LevelSoundEventPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    ~LevelSoundEventPacket();
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    LevelSoundEventPacket();
//  LevelSoundEventPacket(LevelSoundEvent, Vec3 const&, int, std::string const&, bool, bool); //TODO: incomplete function definition
};

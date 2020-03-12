#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../util/Vec3.h"
#include "Packet.h"


class LevelSoundEventPacket : Packet {

public:
    virtual void getId()const;
    ~LevelSoundEventPacket();
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    LevelSoundEventPacket();
//  LevelSoundEventPacket(LevelSoundEvent, Vec3 const&, int, std::string const&, bool, bool); //TODO: incomplete function definition
};

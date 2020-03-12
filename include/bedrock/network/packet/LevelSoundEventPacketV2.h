#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../util/Vec3.h"
#include "Packet.h"


class LevelSoundEventPacketV2 : Packet {

public:
    virtual void getId()const;
    ~LevelSoundEventPacketV2();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    LevelSoundEventPacketV2();
//  LevelSoundEventPacketV2(LevelSoundEvent, Vec3 const&, int, std::string const&, bool, bool); //TODO: incomplete function definition
};

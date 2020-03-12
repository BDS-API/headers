#pragma once

#include <string>
#include "Packet.h"


class SpawnExperienceOrbPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    ~SpawnExperienceOrbPacket();
    SpawnExperienceOrbPacket();
    SpawnExperienceOrbPacket(Vec3 const&, int);
};

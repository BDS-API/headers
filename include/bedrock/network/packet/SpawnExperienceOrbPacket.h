#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/Vec3.h"
#include "Packet.h"


class SpawnExperienceOrbPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~SpawnExperienceOrbPacket();
    SpawnExperienceOrbPacket();
    SpawnExperienceOrbPacket(Vec3 const&, int);
};

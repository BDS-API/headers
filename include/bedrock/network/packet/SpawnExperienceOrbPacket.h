#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/Vec3.h"
#include "./Packet.h"
#include <string>


class SpawnExperienceOrbPacket : Packet {

public:
    virtual ~SpawnExperienceOrbPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SpawnExperienceOrbPacket();
    SpawnExperienceOrbPacket(Vec3 const&, int);
};

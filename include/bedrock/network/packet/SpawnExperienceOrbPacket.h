#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../util/Vec3"
#include "../../io/BinaryStream"


class SpawnExperienceOrbPacket : Packet {

public:
    SpawnExperienceOrbPacket::~SpawnExperienceOrbPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SpawnExperienceOrbPacket(void);
    SpawnExperienceOrbPacket(Vec3 const&, int);
};

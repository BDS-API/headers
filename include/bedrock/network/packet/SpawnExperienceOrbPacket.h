#pragma once

#include "../../io/BinaryStream"
#include "../../util/Vec3"
#include "../../io/ReadOnlyBinaryStream"


class SpawnExperienceOrbPacket : Packet {

public:
    virtual SpawnExperienceOrbPacket::~SpawnExperienceOrbPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SpawnExperienceOrbPacket(void);
    SpawnExperienceOrbPacket(Vec3 const&, int);
};

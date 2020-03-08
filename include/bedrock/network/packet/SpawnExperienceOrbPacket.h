#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/Vec3"


class SpawnExperienceOrbPacket : Packet {

public:
    virtual SpawnExperienceOrbPacket::~SpawnExperienceOrbPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SpawnExperienceOrbPacket(void);
    SpawnExperienceOrbPacket(Vec3 const&, int);
};

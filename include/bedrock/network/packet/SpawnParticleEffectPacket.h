#pragma once

#include "../../actor/unmapped/ActorUniqueID"
#include "../../io/ReadOnlyBinaryStream"
#include "../../util/Vec3"
#include "../../io/BinaryStream"


class SpawnParticleEffectPacket : Packet {

public:
    SpawnParticleEffectPacket::~SpawnParticleEffectPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SpawnParticleEffectPacket(void);
    SpawnParticleEffectPacket(ActorUniqueID, Vec3 const&, std::string const&, unsigned char);
    SpawnParticleEffectPacket(Vec3 const&, std::string const&, unsigned char);
};

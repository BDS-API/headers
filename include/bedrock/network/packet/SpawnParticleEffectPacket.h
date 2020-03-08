#pragma once

#include "../../io/BinaryStream"
#include "../../util/Vec3"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorUniqueID"


class SpawnParticleEffectPacket : Packet {

public:
    virtual SpawnParticleEffectPacket::~SpawnParticleEffectPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SpawnParticleEffectPacket(void);
    SpawnParticleEffectPacket(ActorUniqueID, Vec3 const&, std::string const&, unsigned char);
    SpawnParticleEffectPacket(Vec3 const&, std::string const&, unsigned char);
};

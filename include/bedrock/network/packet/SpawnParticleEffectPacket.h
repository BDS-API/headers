#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/ActorUniqueID"
#include "../../io/BinaryStream"
#include "../../../unmapped/Vec3"


class SpawnParticleEffectPacket : Packet {

public:
    virtual SpawnParticleEffectPacket::~SpawnParticleEffectPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SpawnParticleEffectPacket(void);
    SpawnParticleEffectPacket(ActorUniqueID, Vec3 const&, std::string const&, unsigned char);
    SpawnParticleEffectPacket(Vec3 const&, std::string const&, unsigned char);
};

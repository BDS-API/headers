#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class SpawnParticleEffectPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    ~SpawnParticleEffectPacket();
    SpawnParticleEffectPacket();
    SpawnParticleEffectPacket(Vec3 const&, std::string const&, unsigned char);
    SpawnParticleEffectPacket(ActorUniqueID, Vec3 const&, std::string const&, unsigned char);
};

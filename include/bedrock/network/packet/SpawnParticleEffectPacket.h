#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/Vec3.h"
#include "./Packet.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include <string>


class SpawnParticleEffectPacket : Packet {

public:
    virtual ~SpawnParticleEffectPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SpawnParticleEffectPacket();
    SpawnParticleEffectPacket(ActorUniqueID, Vec3 const&, std::string const&, unsigned char);
    SpawnParticleEffectPacket(Vec3 const&, std::string const&, unsigned char);
};

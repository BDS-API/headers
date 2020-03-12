#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../util/Vec3.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class SpawnParticleEffectPacket : Packet {

public:
    virtual std::string getName()const;
    ~SpawnParticleEffectPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    SpawnParticleEffectPacket(Vec3 const&, std::string const&, unsigned char);
    SpawnParticleEffectPacket(ActorUniqueID, Vec3 const&, std::string const&, unsigned char);
    SpawnParticleEffectPacket();
};

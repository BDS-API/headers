#pragma once

class SpawnParticleEffectPacket : Packet {

public:
    virtual ~SpawnParticleEffectPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void SpawnParticleEffectPacket(void);
    void SpawnParticleEffectPacket(ActorUniqueID, Vec3 const&, std::string const&, unsigned char);
    void SpawnParticleEffectPacket(Vec3 const&, std::string const&, unsigned char);
};

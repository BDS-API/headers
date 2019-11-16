#pragma once

class SpawnParticleEffectPacket : Packet {

    virtual void SpawnParticleEffect~SpawnParticleEffectPacket();
    virtual void SpawnParticleEffect~SpawnParticleEffectPacket();
    virtual void SpawnParticleEffectgetId(void)const;
    virtual void _ZNK25SpawnParticleEffectPacket7getNameB5cxx11Ev;
    virtual void SpawnParticleEffectwrite(BinaryStream &)const;
    virtual void SpawnParticleEffectread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

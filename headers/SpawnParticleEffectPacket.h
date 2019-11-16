#pragma once

class SpawnParticleEffectPacket : Packet {

    virtual ~SpawnParticleEffectPacket();
    virtual ~SpawnParticleEffectPacket();
    virtual void getId(void)const;
    virtual void _ZNK25SpawnParticleEffectPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

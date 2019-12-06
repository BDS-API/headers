#pragma once

class SpawnParticleEffectPacket : Packet {

public:
    virtual ~SpawnParticleEffectPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void SpawnParticleEffectPacket(void);
    void SpawnParticleEffectPacket(ActorUniqueID, Vec3 const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned char);
    void SpawnParticleEffectPacket(Vec3 const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned char);
};

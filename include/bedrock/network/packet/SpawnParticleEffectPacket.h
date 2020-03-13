#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class SpawnParticleEffectPacket : Packet {

public:
    ~SpawnParticleEffectPacket(); // _ZN25SpawnParticleEffectPacketD2Ev
    virtual void getId()const; // _ZNK25SpawnParticleEffectPacket5getIdEv
    virtual std::string getName()const; // _ZNK25SpawnParticleEffectPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK25SpawnParticleEffectPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN25SpawnParticleEffectPacket4readER20ReadOnlyBinaryStream
    SpawnParticleEffectPacket(); // _ZN25SpawnParticleEffectPacketC2Ev
    SpawnParticleEffectPacket(ActorUniqueID, Vec3 const&, std::string const&, unsigned char); // _ZN25SpawnParticleEffectPacketC2E13ActorUniqueIDRK4Vec3RKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEh
    SpawnParticleEffectPacket(Vec3 const&, std::string const&, unsigned char); // _ZN25SpawnParticleEffectPacketC2ERK4Vec3RKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEh
};

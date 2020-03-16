#pragma once

#include <string>
#include "Packet.h"


class SpawnExperienceOrbPacket : public Packet {

public:
    virtual ~SpawnExperienceOrbPacket(); // _ZN24SpawnExperienceOrbPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK24SpawnExperienceOrbPacket5getIdEv
    virtual std::string getName()const; // _ZNK24SpawnExperienceOrbPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK24SpawnExperienceOrbPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN24SpawnExperienceOrbPacket4readER20ReadOnlyBinaryStream
    SpawnExperienceOrbPacket(); // _ZN24SpawnExperienceOrbPacketC2Ev
    SpawnExperienceOrbPacket(Vec3 const&, int); // _ZN24SpawnExperienceOrbPacketC2ERK4Vec3i
};

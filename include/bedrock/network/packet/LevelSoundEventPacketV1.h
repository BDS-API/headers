#pragma once

#include <string>
#include "Packet.h"


class LevelSoundEventPacketV1 : public Packet {

public:
    virtual ~LevelSoundEventPacketV1(); // _ZN23LevelSoundEventPacketV1D2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK23LevelSoundEventPacketV15getIdEv
    virtual std::string getName()const; // _ZNK23LevelSoundEventPacketV17getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK23LevelSoundEventPacketV15writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN23LevelSoundEventPacketV14readER20ReadOnlyBinaryStream
//    LevelSoundEventPacketV1(long, Vec3 const&, int, long, bool, bool); //TODO: incomplete function definition // _ZN23LevelSoundEventPacketV1C2E15LevelSoundEventRK4Vec3i9ActorTypebb
    LevelSoundEventPacketV1(); // _ZN23LevelSoundEventPacketV1C2Ev
};

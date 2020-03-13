#pragma once

#include <string>
#include "Packet.h"


class LevelSoundEventPacketV2 : Packet {

public:
    ~LevelSoundEventPacketV2(); // _ZN23LevelSoundEventPacketV2D2Ev
    virtual void getId()const; // _ZNK23LevelSoundEventPacketV25getIdEv
    virtual std::string getName()const; // _ZNK23LevelSoundEventPacketV27getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK23LevelSoundEventPacketV25writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN23LevelSoundEventPacketV24readER20ReadOnlyBinaryStream
//  LevelSoundEventPacketV2(LevelSoundEvent, Vec3 const&, int, std::string const&, bool, bool); //TODO: incomplete function definition // _ZN23LevelSoundEventPacketV2C2E15LevelSoundEventRK4Vec3iRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbb
    LevelSoundEventPacketV2(); // _ZN23LevelSoundEventPacketV2C2Ev
};

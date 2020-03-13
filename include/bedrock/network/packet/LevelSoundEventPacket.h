#pragma once

#include <string>
#include "Packet.h"


class LevelSoundEventPacket : Packet {

public:
    ~LevelSoundEventPacket(); // _ZN21LevelSoundEventPacketD2Ev
    virtual void getId()const; // _ZNK21LevelSoundEventPacket5getIdEv
    virtual std::string getName()const; // _ZNK21LevelSoundEventPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK21LevelSoundEventPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN21LevelSoundEventPacket4readER20ReadOnlyBinaryStream
//  LevelSoundEventPacket(LevelSoundEvent, Vec3 const&, int, std::string const&, bool, bool); //TODO: incomplete function definition // _ZN21LevelSoundEventPacketC2E15LevelSoundEventRK4Vec3iRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbb
    LevelSoundEventPacket(); // _ZN21LevelSoundEventPacketC2Ev
};

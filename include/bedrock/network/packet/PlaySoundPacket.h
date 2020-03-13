#pragma once

#include <string>
#include "Packet.h"


class PlaySoundPacket : Packet {

public:
    ~PlaySoundPacket(); // _ZN15PlaySoundPacketD2Ev
    virtual void getId()const; // _ZNK15PlaySoundPacket5getIdEv
    virtual std::string getName()const; // _ZNK15PlaySoundPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK15PlaySoundPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN15PlaySoundPacket4readER20ReadOnlyBinaryStream
    PlaySoundPacket(); // _ZN15PlaySoundPacketC2Ev
    PlaySoundPacket(std::string, Vec3 const&, float, float); // _ZN15PlaySoundPacketC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK4Vec3ff
};

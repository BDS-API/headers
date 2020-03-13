#pragma once

#include <string>
#include "Packet.h"


class StopSoundPacket : Packet {

public:
    ~StopSoundPacket(); // _ZN15StopSoundPacketD2Ev
    virtual void getId()const; // _ZNK15StopSoundPacket5getIdEv
    virtual std::string getName()const; // _ZNK15StopSoundPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK15StopSoundPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN15StopSoundPacket4readER20ReadOnlyBinaryStream
    StopSoundPacket(); // _ZN15StopSoundPacketC2Ev
    StopSoundPacket(std::string const&, bool); // _ZN15StopSoundPacketC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
};

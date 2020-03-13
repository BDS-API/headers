#pragma once

#include <string>
#include "Packet.h"


class AnvilDamagePacket : Packet {

public:
    ~AnvilDamagePacket(); // _ZN17AnvilDamagePacketD2Ev
    virtual void getId()const; // _ZNK17AnvilDamagePacket5getIdEv
    virtual std::string getName()const; // _ZNK17AnvilDamagePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK17AnvilDamagePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN17AnvilDamagePacket4readER20ReadOnlyBinaryStream
    AnvilDamagePacket(); // _ZN17AnvilDamagePacketC2Ev
    AnvilDamagePacket(int, NetworkBlockPosition const&); // _ZN17AnvilDamagePacketC2EiRK20NetworkBlockPosition
};

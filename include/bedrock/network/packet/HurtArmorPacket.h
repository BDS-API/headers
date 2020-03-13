#pragma once

#include <string>
#include "Packet.h"


class HurtArmorPacket : Packet {

public:
    ~HurtArmorPacket(); // _ZN15HurtArmorPacketD2Ev
    virtual void getId()const; // _ZNK15HurtArmorPacket5getIdEv
    virtual std::string getName()const; // _ZNK15HurtArmorPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK15HurtArmorPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN15HurtArmorPacket4readER20ReadOnlyBinaryStream
    HurtArmorPacket(); // _ZN15HurtArmorPacketC2Ev
    HurtArmorPacket(int); // _ZN15HurtArmorPacketC2Ei
};

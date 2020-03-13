#pragma once

#include <string>
#include "Packet.h"


class PlayerInputPacket : Packet {

public:
    ~PlayerInputPacket(); // _ZN17PlayerInputPacketD2Ev
    virtual void getId()const; // _ZNK17PlayerInputPacket5getIdEv
    virtual std::string getName()const; // _ZNK17PlayerInputPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK17PlayerInputPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN17PlayerInputPacket4readER20ReadOnlyBinaryStream
    PlayerInputPacket(); // _ZN17PlayerInputPacketC2Ev
    PlayerInputPacket(float, float, bool, bool); // _ZN17PlayerInputPacketC2Effbb
};

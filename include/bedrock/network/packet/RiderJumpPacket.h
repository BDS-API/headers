#pragma once

#include <string>
#include "Packet.h"


class RiderJumpPacket : Packet {

public:
    ~RiderJumpPacket(); // _ZN15RiderJumpPacketD2Ev
    virtual void getId()const; // _ZNK15RiderJumpPacket5getIdEv
    virtual std::string getName()const; // _ZNK15RiderJumpPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK15RiderJumpPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN15RiderJumpPacket4readER20ReadOnlyBinaryStream
    RiderJumpPacket(); // _ZN15RiderJumpPacketC2Ev
    RiderJumpPacket(int); // _ZN15RiderJumpPacketC2Ei
};

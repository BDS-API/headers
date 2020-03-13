#pragma once

#include <string>
#include "Packet.h"


class SetHealthPacket : Packet {

public:
    ~SetHealthPacket(); // _ZN15SetHealthPacketD2Ev
    virtual void getId()const; // _ZNK15SetHealthPacket5getIdEv
    virtual std::string getName()const; // _ZNK15SetHealthPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK15SetHealthPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN15SetHealthPacket4readER20ReadOnlyBinaryStream
    SetHealthPacket(); // _ZN15SetHealthPacketC2Ev
    SetHealthPacket(int); // _ZN15SetHealthPacketC2Ei
};

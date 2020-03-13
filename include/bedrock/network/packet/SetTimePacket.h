#pragma once

#include <string>
#include "Packet.h"


class SetTimePacket : Packet {

public:
    ~SetTimePacket(); // _ZN13SetTimePacketD2Ev
    virtual void getId()const; // _ZNK13SetTimePacket5getIdEv
    virtual std::string getName()const; // _ZNK13SetTimePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK13SetTimePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN13SetTimePacket4readER20ReadOnlyBinaryStream
    SetTimePacket(); // _ZN13SetTimePacketC2Ev
    SetTimePacket(int); // _ZN13SetTimePacketC2Ei
};

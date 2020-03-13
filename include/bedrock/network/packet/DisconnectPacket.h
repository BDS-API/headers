#pragma once

#include <string>
#include "Packet.h"


class DisconnectPacket : Packet {

public:
    ~DisconnectPacket(); // _ZN16DisconnectPacketD2Ev
    virtual void getId()const; // _ZNK16DisconnectPacket5getIdEv
    virtual std::string getName()const; // _ZNK16DisconnectPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK16DisconnectPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN16DisconnectPacket4readER20ReadOnlyBinaryStream
    DisconnectPacket(); // _ZN16DisconnectPacketC2Ev
    DisconnectPacket(std::string const&, bool); // _ZN16DisconnectPacketC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
};

#pragma once

#include <string>
#include "Packet.h"


class SimpleEventPacket : Packet {

public:
    ~SimpleEventPacket(); // _ZN17SimpleEventPacketD2Ev
    virtual void getId()const; // _ZNK17SimpleEventPacket5getIdEv
    virtual std::string getName()const; // _ZNK17SimpleEventPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK17SimpleEventPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN17SimpleEventPacket4readER20ReadOnlyBinaryStream
    SimpleEventPacket(); // _ZN17SimpleEventPacketC2Ev
//  SimpleEventPacket(SimpleEventPacket::Subtype const&); //TODO: incomplete function definition // _ZN17SimpleEventPacketC2ERKNS_7SubtypeE
//  void setSubtype(SimpleEventPacket::Subtype); //TODO: incomplete function definition // _ZN17SimpleEventPacket10setSubtypeENS_7SubtypeE
    void getSubtype()const; // _ZNK17SimpleEventPacket10getSubtypeEv
};

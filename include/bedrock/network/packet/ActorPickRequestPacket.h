#pragma once

#include <string>
#include "Packet.h"


class ActorPickRequestPacket : Packet {

public:
    ~ActorPickRequestPacket(); // _ZN22ActorPickRequestPacketD2Ev
    virtual void getId()const; // _ZNK22ActorPickRequestPacket5getIdEv
    virtual std::string getName()const; // _ZNK22ActorPickRequestPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK22ActorPickRequestPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN22ActorPickRequestPacket4readER20ReadOnlyBinaryStream
    ActorPickRequestPacket(); // _ZN22ActorPickRequestPacketC2Ev
    ActorPickRequestPacket(long const&, unsigned char const&); // _ZN22ActorPickRequestPacketC2ERKlRKh
};

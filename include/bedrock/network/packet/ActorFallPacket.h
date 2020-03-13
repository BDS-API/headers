#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class ActorFallPacket : Packet {

public:
    ~ActorFallPacket(); // _ZN15ActorFallPacketD2Ev
    virtual void getId()const; // _ZNK15ActorFallPacket5getIdEv
    virtual std::string getName()const; // _ZNK15ActorFallPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK15ActorFallPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN15ActorFallPacket4readER20ReadOnlyBinaryStream
    ActorFallPacket(); // _ZN15ActorFallPacketC2Ev
    ActorFallPacket(ActorRuntimeID, float, bool); // _ZN15ActorFallPacketC2E14ActorRuntimeIDfb
};

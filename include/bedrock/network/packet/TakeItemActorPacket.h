#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class TakeItemActorPacket : Packet {

public:
    ~TakeItemActorPacket(); // _ZN19TakeItemActorPacketD2Ev
    virtual void getId()const; // _ZNK19TakeItemActorPacket5getIdEv
    virtual std::string getName()const; // _ZNK19TakeItemActorPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK19TakeItemActorPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN19TakeItemActorPacket4readER20ReadOnlyBinaryStream
    TakeItemActorPacket(); // _ZN19TakeItemActorPacketC2Ev
    TakeItemActorPacket(ActorRuntimeID, ActorRuntimeID); // _ZN19TakeItemActorPacketC2E14ActorRuntimeIDS0_
};

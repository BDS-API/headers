#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class ActorEventPacket : Packet {

public:
    ~ActorEventPacket(); // _ZN16ActorEventPacketD2Ev
    virtual void getId()const; // _ZNK16ActorEventPacket5getIdEv
    virtual std::string getName()const; // _ZNK16ActorEventPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK16ActorEventPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN16ActorEventPacket4readER20ReadOnlyBinaryStream
    ActorEventPacket(); // _ZN16ActorEventPacketC2Ev
//  ActorEventPacket(ActorRuntimeID, ActorEvent, int); //TODO: incomplete function definition // _ZN16ActorEventPacketC2E14ActorRuntimeID10ActorEventi
};

#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class RemoveActorPacket : Packet {

public:
    ~RemoveActorPacket(); // _ZN17RemoveActorPacketD2Ev
    virtual void getId()const; // _ZNK17RemoveActorPacket5getIdEv
    virtual std::string getName()const; // _ZNK17RemoveActorPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK17RemoveActorPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN17RemoveActorPacket4readER20ReadOnlyBinaryStream
    RemoveActorPacket(); // _ZN17RemoveActorPacketC2Ev
    RemoveActorPacket(ActorUniqueID); // _ZN17RemoveActorPacketC2E13ActorUniqueID
};

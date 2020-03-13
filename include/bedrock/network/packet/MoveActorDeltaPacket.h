#pragma once

#include <string>
#include "Packet.h"


class MoveActorDeltaPacket : Packet {

public:
    ~MoveActorDeltaPacket(); // _ZN20MoveActorDeltaPacketD2Ev
    virtual void getId()const; // _ZNK20MoveActorDeltaPacket5getIdEv
    virtual std::string getName()const; // _ZNK20MoveActorDeltaPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK20MoveActorDeltaPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN20MoveActorDeltaPacket4readER20ReadOnlyBinaryStream
    MoveActorDeltaPacket(); // _ZN20MoveActorDeltaPacketC2Ev
    MoveActorDeltaPacket(MoveActorDeltaData const&); // _ZN20MoveActorDeltaPacketC2ERK18MoveActorDeltaData
};

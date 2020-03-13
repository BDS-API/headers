#pragma once

#include <string>
#include "Packet.h"


class MoveActorAbsolutePacket : Packet {

public:
    ~MoveActorAbsolutePacket(); // _ZN23MoveActorAbsolutePacketD2Ev
    virtual void getId()const; // _ZNK23MoveActorAbsolutePacket5getIdEv
    virtual std::string getName()const; // _ZNK23MoveActorAbsolutePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK23MoveActorAbsolutePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN23MoveActorAbsolutePacket4readER20ReadOnlyBinaryStream
    MoveActorAbsolutePacket(); // _ZN23MoveActorAbsolutePacketC2Ev
    MoveActorAbsolutePacket(MoveActorAbsoluteData const&); // _ZN23MoveActorAbsolutePacketC2ERK21MoveActorAbsoluteData
};

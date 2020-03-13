#pragma once

#include <string>
#include "Packet.h"


class AddItemActorPacket : Packet {

public:
    ~AddItemActorPacket(); // _ZN18AddItemActorPacketD2Ev
    virtual void getId()const; // _ZNK18AddItemActorPacket5getIdEv
    virtual std::string getName()const; // _ZNK18AddItemActorPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK18AddItemActorPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN18AddItemActorPacket4readER20ReadOnlyBinaryStream
    AddItemActorPacket(); // _ZN18AddItemActorPacketC2Ev
    AddItemActorPacket(ItemActor &); // _ZN18AddItemActorPacketC2ER9ItemActor
};

#pragma once

#include <string>
#include "Packet.h"
#include <vector>


class AvailableActorIdentifiersPacket : Packet {

public:
    ~AvailableActorIdentifiersPacket(); // _ZN31AvailableActorIdentifiersPacketD2Ev
    virtual void getId()const; // _ZNK31AvailableActorIdentifiersPacket5getIdEv
    virtual std::string getName()const; // _ZNK31AvailableActorIdentifiersPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK31AvailableActorIdentifiersPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN31AvailableActorIdentifiersPacket4readER20ReadOnlyBinaryStream
    AvailableActorIdentifiersPacket(); // _ZN31AvailableActorIdentifiersPacketC2Ev
    AvailableActorIdentifiersPacket(std::vector<ActorInfo> const&); // _ZN31AvailableActorIdentifiersPacketC2ERKSt6vectorI9ActorInfoSaIS1_EE
    void getIdentifiers()const; // _ZNK31AvailableActorIdentifiersPacket14getIdentifiersEv
};

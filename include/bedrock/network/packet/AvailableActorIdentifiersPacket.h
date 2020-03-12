#pragma once

#include <string>
#include "Packet.h"
#include <vector>


class AvailableActorIdentifiersPacket : Packet {

public:
    ~AvailableActorIdentifiersPacket();
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void getId()const;
    AvailableActorIdentifiersPacket(std::vector<ActorInfo> const&);
    void getIdentifiers()const;
    AvailableActorIdentifiersPacket();
};

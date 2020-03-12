#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <vector>
#include "../../actor/unmapped/ActorInfo.h"
#include "Packet.h"


class AvailableActorIdentifiersPacket : Packet {

public:
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~AvailableActorIdentifiersPacket();
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    AvailableActorIdentifiersPacket();
    AvailableActorIdentifiersPacket(std::vector<ActorInfo> const&);
    void getIdentifiers()const;
};

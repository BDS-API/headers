#pragma once

#include "../../io/BinaryStream.h"
#include "../../actor/unmapped/ActorInfo.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <memory>
#include "./Packet.h"
#include <vector>
#include <string>


class AvailableActorIdentifiersPacket : Packet {

public:
    virtual ~AvailableActorIdentifiersPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AvailableActorIdentifiersPacket();
    AvailableActorIdentifiersPacket(std::vector<ActorInfo, std::allocator<ActorInfo>> const&);
    void getIdentifiers()const;
};

#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorInfo"


class AvailableActorIdentifiersPacket : Packet {

public:
    AvailableActorIdentifiersPacket::~AvailableActorIdentifiersPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AvailableActorIdentifiersPacket(void);
    AvailableActorIdentifiersPacket(std::vector<ActorInfo, std::allocator<ActorInfo>> const&);
    void getIdentifiers()const;
};

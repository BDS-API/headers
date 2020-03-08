#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorInfo"
#include "../../io/ReadOnlyBinaryStream"


class AvailableActorIdentifiersPacket : Packet {

public:
    virtual AvailableActorIdentifiersPacket::~AvailableActorIdentifiersPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AvailableActorIdentifiersPacket(void);
    AvailableActorIdentifiersPacket(std::vector<ActorInfo, std::allocator<ActorInfo>> const&);
    void getIdentifiers()const;
};

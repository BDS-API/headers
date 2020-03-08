#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorUniqueID"
#include "../../io/ReadOnlyBinaryStream"


class RemoveActorPacket : Packet {

public:
    RemoveActorPacket::~RemoveActorPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    RemoveActorPacket(void);
    RemoveActorPacket(ActorUniqueID);
};

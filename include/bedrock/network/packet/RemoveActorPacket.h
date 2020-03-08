#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorUniqueID"


class RemoveActorPacket : Packet {

public:
    virtual RemoveActorPacket::~RemoveActorPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    RemoveActorPacket(void);
    RemoveActorPacket(ActorUniqueID);
};

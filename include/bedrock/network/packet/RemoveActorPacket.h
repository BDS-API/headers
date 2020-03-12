#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class RemoveActorPacket : Packet {

public:
    ~RemoveActorPacket();
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual std::string getName()const;
    RemoveActorPacket(ActorUniqueID);
    RemoveActorPacket();
};

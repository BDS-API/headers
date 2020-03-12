#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class RemoveActorPacket : Packet {

public:
    ~RemoveActorPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    RemoveActorPacket(ActorUniqueID);
    RemoveActorPacket();
};

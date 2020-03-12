#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class TakeItemActorPacket : Packet {

public:
    ~TakeItemActorPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    TakeItemActorPacket(ActorRuntimeID, ActorRuntimeID);
    TakeItemActorPacket();
};

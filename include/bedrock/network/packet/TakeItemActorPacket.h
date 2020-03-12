#pragma once

#include "../../io/BinaryStream.h"
#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class TakeItemActorPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    ~TakeItemActorPacket();
    virtual void read(ReadOnlyBinaryStream &);
    TakeItemActorPacket();
    TakeItemActorPacket(ActorRuntimeID, ActorRuntimeID);
};

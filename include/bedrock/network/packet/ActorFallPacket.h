#pragma once

#include "../../io/BinaryStream.h"
#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class ActorFallPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    ~ActorFallPacket();
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    ActorFallPacket(ActorRuntimeID, float, bool);
    ActorFallPacket();
};

#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class ActorFallPacket : Packet {

public:
    ~ActorFallPacket();
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    ActorFallPacket();
    ActorFallPacket(ActorRuntimeID, float, bool);
};

#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class ActorEventPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    ~ActorEventPacket();
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    ActorEventPacket();
//  ActorEventPacket(ActorRuntimeID, ActorEvent, int); //TODO: incomplete function definition
};

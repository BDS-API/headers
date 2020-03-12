#pragma once

#include "../../io/BinaryStream.h"
#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class ActorEventPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    ~ActorEventPacket();
    virtual std::string getName()const;
//  ActorEventPacket(ActorRuntimeID, ActorEvent, int); //TODO: incomplete function definition
    ActorEventPacket();
};

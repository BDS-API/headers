#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include <string>


class ActorEventPacket : Packet {

public:
    virtual ~ActorEventPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ActorEventPacket();
//  ActorEventPacket(ActorRuntimeID, ActorEvent, int); //TODO: incomplete function definition
};

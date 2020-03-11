#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include <string>


class RemoveActorPacket : Packet {

public:
    virtual ~RemoveActorPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    RemoveActorPacket();
    RemoveActorPacket(ActorUniqueID);
};

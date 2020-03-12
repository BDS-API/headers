#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class SetLocalPlayerAsInitializedPacket : Packet {

public:
    ~SetLocalPlayerAsInitializedPacket();
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    SetLocalPlayerAsInitializedPacket();
    SetLocalPlayerAsInitializedPacket(ActorRuntimeID);
};

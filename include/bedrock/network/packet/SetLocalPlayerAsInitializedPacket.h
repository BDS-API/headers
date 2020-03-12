#pragma once

#include "../../io/BinaryStream.h"
#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class SetLocalPlayerAsInitializedPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    ~SetLocalPlayerAsInitializedPacket();
    SetLocalPlayerAsInitializedPacket();
    SetLocalPlayerAsInitializedPacket(ActorRuntimeID);
};

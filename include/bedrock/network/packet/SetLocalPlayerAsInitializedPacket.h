#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include <string>


class SetLocalPlayerAsInitializedPacket : Packet {

public:
    virtual ~SetLocalPlayerAsInitializedPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetLocalPlayerAsInitializedPacket();
    SetLocalPlayerAsInitializedPacket(ActorRuntimeID);
};

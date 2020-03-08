#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../io/ReadOnlyBinaryStream"


class SetLocalPlayerAsInitializedPacket : Packet {

public:
    SetLocalPlayerAsInitializedPacket::~SetLocalPlayerAsInitializedPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetLocalPlayerAsInitializedPacket(void);
    SetLocalPlayerAsInitializedPacket(ActorRuntimeID);
};

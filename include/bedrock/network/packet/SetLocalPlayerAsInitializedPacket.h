#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"


class SetLocalPlayerAsInitializedPacket : Packet {

public:
    virtual SetLocalPlayerAsInitializedPacket::~SetLocalPlayerAsInitializedPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetLocalPlayerAsInitializedPacket(void);
    SetLocalPlayerAsInitializedPacket(ActorRuntimeID);
};

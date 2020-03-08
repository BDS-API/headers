#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../io/BinaryStream"


class MobEffectPacket : Packet {

public:
    MobEffectPacket::~MobEffectPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MobEffectPacket(void);
    MobEffectPacket(ActorRuntimeID, MobEffectPacket::Event, int, int, int, bool);
};

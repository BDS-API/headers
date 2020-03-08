#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../io/ReadOnlyBinaryStream"


class MobEffectPacket : Packet {

public:
    virtual MobEffectPacket::~MobEffectPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MobEffectPacket(void);
    MobEffectPacket(ActorRuntimeID, MobEffectPacket::Event, int, int, int, bool);
};

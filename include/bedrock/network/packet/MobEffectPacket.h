#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../../unmapped/ActorRuntimeID"


class MobEffectPacket : Packet {

public:
    virtual MobEffectPacket::~MobEffectPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MobEffectPacket(void);
    MobEffectPacket(ActorRuntimeID, MobEffectPacket::Event, int, int, int, bool);
};

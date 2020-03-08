#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class SetLastHurtByPacket : Packet {

public:
    virtual SetLastHurtByPacket::~SetLastHurtByPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetLastHurtByPacket(void);
    SetLastHurtByPacket(ActorType);
};

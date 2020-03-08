#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class SetLastHurtByPacket : Packet {

public:
    virtual SetLastHurtByPacket::~SetLastHurtByPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetLastHurtByPacket(void);
    SetLastHurtByPacket(ActorType);
};

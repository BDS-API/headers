#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/Actor"


class SetActorMotionPacket : Packet {

public:
    SetActorMotionPacket::~SetActorMotionPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetActorMotionPacket(void);
    SetActorMotionPacket(Actor const&);
};

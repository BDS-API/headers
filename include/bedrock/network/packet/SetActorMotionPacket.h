#pragma once

#include "../../io/BinaryStream"
#include "../../actor/Actor"
#include "../../io/ReadOnlyBinaryStream"


class SetActorMotionPacket : Packet {

public:
    virtual SetActorMotionPacket::~SetActorMotionPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetActorMotionPacket(void);
    SetActorMotionPacket(Actor const&);
};

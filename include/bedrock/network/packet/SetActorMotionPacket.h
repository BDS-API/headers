#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include "../../actor/Actor.h"


class SetActorMotionPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    ~SetActorMotionPacket();
    SetActorMotionPacket(Actor const&);
    SetActorMotionPacket();
};

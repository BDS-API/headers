#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../actor/Actor.h"
#include "./Packet.h"
#include <string>


class SetActorMotionPacket : Packet {

public:
    virtual ~SetActorMotionPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetActorMotionPacket();
    SetActorMotionPacket(Actor const&);
};

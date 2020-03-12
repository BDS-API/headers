#pragma once

#include <string>
#include "Packet.h"


class SetActorMotionPacket : Packet {

public:
    ~SetActorMotionPacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    SetActorMotionPacket();
    SetActorMotionPacket(Actor const&);
};

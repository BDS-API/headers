#pragma once

#include <string>
#include "Packet.h"


class MoveActorAbsolutePacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    ~MoveActorAbsolutePacket();
    MoveActorAbsolutePacket();
    MoveActorAbsolutePacket(MoveActorAbsoluteData const&);
};

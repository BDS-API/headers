#pragma once

#include <string>
#include "Packet.h"


class MoveActorDeltaPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    ~MoveActorDeltaPacket();
    virtual void getId()const;
    MoveActorDeltaPacket();
    MoveActorDeltaPacket(MoveActorDeltaData const&);
};

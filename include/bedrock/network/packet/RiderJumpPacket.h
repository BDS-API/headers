#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class RiderJumpPacket : Packet {

public:
    ~RiderJumpPacket();
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    RiderJumpPacket();
    RiderJumpPacket(int);
};

#pragma once

#include <string>
#include "Packet.h"


class RiderJumpPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    ~RiderJumpPacket();
    virtual std::string getName()const;
    RiderJumpPacket();
    RiderJumpPacket(int);
};

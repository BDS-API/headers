#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class RiderJumpPacket : Packet {

public:
    virtual RiderJumpPacket::~RiderJumpPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    RiderJumpPacket(void);
    RiderJumpPacket(int);
};

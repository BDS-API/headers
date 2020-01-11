#pragma once

class RiderJumpPacket : Packet {

public:
    virtual RiderJumpPacket::~RiderJumpPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    RiderJumpPacket(void);
    RiderJumpPacket(int);
};
#pragma once

class RiderJumpPacket : Packet {

public:
    virtual ~RiderJumpPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void RiderJumpPacket(void);
    void RiderJumpPacket(int);
};

#pragma once

class RiderJumpPacket : Packet {

    virtual void RiderJumpPacket::~RiderJumpPacket();
    virtual void RiderJumpPacket::~RiderJumpPacket();
    virtual void getId(void)const;
    virtual void _ZNK15RiderJumpPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

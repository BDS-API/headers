#pragma once

class BossEventPacket : Packet {

    virtual void BossEventPacket::~BossEventPacket();
    virtual void BossEventPacket::~BossEventPacket();
    virtual void getId(void)const;
    virtual void _ZNK15BossEventPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

#pragma once

class BlockEventPacket : Packet {

    virtual void BlockEventPacket::~BlockEventPacket();
    virtual void BlockEventPacket::~BlockEventPacket();
    virtual void getId(void)const;
    virtual void _ZNK16BlockEventPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

#pragma once

class TransferPacket : Packet {

    virtual void TransferPacket::~TransferPacket();
    virtual void TransferPacket::~TransferPacket();
    virtual void getId(void)const;
    virtual void _ZNK14TransferPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

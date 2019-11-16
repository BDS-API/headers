#pragma once

class PhotoTransferPacket : Packet {

    virtual void PhotoTransferPacket::~PhotoTransferPacket();
    virtual void PhotoTransferPacket::~PhotoTransferPacket();
    virtual void getId(void)const;
    virtual void _ZNK19PhotoTransferPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

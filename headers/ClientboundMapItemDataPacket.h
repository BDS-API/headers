#pragma once

class ClientboundMapItemDataPacket : Packet {

    virtual void ClientboundMapItemDataPacket::~ClientboundMapItemDataPacket();
    virtual void ClientboundMapItemDataPacket::~ClientboundMapItemDataPacket();
    virtual void getId(void)const;
    virtual void _ZNK28ClientboundMapItemDataPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

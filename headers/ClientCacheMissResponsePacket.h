#pragma once

class ClientCacheMissResponsePacket : Packet {

    virtual void ClientCacheMissResponsePacket::~ClientCacheMissResponsePacket();
    virtual void ClientCacheMissResponsePacket::~ClientCacheMissResponsePacket();
    virtual void getId(void)const;
    virtual void _ZNK29ClientCacheMissResponsePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

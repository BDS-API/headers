#pragma once

class ClientCacheBlobStatusPacket : Packet {

    virtual void ClientCacheBlobStatusPacket::~ClientCacheBlobStatusPacket();
    virtual void ClientCacheBlobStatusPacket::~ClientCacheBlobStatusPacket();
    virtual void getId(void)const;
    virtual void _ZNK27ClientCacheBlobStatusPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

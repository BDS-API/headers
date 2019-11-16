#pragma once

class ClientCacheBlobStatusPacket : Packet {

    virtual void ClientCacheBlobStatus~ClientCacheBlobStatusPacket();
    virtual void ClientCacheBlobStatus~ClientCacheBlobStatusPacket();
    virtual void ClientCacheBlobStatusgetId(void)const;
    virtual void _ZNK27ClientCacheBlobStatusPacket7getNameB5cxx11Ev;
    virtual void ClientCacheBlobStatuswrite(BinaryStream &)const;
    virtual void ClientCacheBlobStatusread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

#pragma once

class ClientCacheStatusPacket : Packet {

    virtual void ClientCacheStatus~ClientCacheStatusPacket();
    virtual void ClientCacheStatus~ClientCacheStatusPacket();
    virtual void ClientCacheStatusgetId(void)const;
    virtual void _ZNK23ClientCacheStatusPacket7getNameB5cxx11Ev;
    virtual void ClientCacheStatuswrite(BinaryStream &)const;
    virtual void ClientCacheStatusread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

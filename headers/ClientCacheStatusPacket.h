#pragma once

class ClientCacheStatusPacket : Packet {

public:
    virtual ~ClientCacheStatusPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ClientCacheStatusPacket(void);
    void ClientCacheStatusPacket(bool);
};

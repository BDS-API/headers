#pragma once

class ClientCacheStatusPacket : Packet {

public:
    virtual ClientCacheStatusPacket::~ClientCacheStatusPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ClientCacheStatusPacket(void);
    ClientCacheStatusPacket(bool);
};

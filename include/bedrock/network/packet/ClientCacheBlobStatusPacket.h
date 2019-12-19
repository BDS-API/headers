#pragma once

class ClientCacheBlobStatusPacket : Packet {

public:
    virtual ClientCacheBlobStatusPacket::~ClientCacheBlobStatusPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ClientCacheBlobStatusPacket(void);
    bool isFull(void)const;
    bool isEmpty(void)const;
};

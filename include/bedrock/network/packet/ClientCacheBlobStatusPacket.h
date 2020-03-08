#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class ClientCacheBlobStatusPacket : Packet {

public:
    virtual ClientCacheBlobStatusPacket::~ClientCacheBlobStatusPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ClientCacheBlobStatusPacket(void);
    bool isFull()const;
    bool isEmpty()const;
};

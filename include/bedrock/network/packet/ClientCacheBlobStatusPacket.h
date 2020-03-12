#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class ClientCacheBlobStatusPacket : Packet {

public:
    virtual void getId()const;
    ~ClientCacheBlobStatusPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    ClientCacheBlobStatusPacket();
    bool isFull()const;
    bool isEmpty()const;
};

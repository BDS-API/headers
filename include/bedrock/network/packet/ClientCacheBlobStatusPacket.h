#pragma once

#include <string>
#include "Packet.h"


class ClientCacheBlobStatusPacket : Packet {

public:
    virtual std::string getName()const;
    ~ClientCacheBlobStatusPacket();
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    ClientCacheBlobStatusPacket();
    bool isFull()const;
    bool isEmpty()const;
};

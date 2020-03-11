#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../io/BinaryStream.h"
#include <string>


class ClientCacheBlobStatusPacket : Packet {

public:
    virtual ~ClientCacheBlobStatusPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ClientCacheBlobStatusPacket();
    bool isFull()const;
    bool isEmpty()const;
};

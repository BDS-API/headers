#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class ClientCacheMissResponsePacket : Packet {

public:
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~ClientCacheMissResponsePacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    ClientCacheMissResponsePacket();
};

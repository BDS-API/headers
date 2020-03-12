#pragma once

#include <string>
#include "Packet.h"


class ClientCacheMissResponsePacket : Packet {

public:
    virtual void getId()const;
    ~ClientCacheMissResponsePacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    ClientCacheMissResponsePacket();
};

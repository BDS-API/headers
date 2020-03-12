#pragma once

#include <string>
#include "Packet.h"


class ClientCacheStatusPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void getId()const;
    ~ClientCacheStatusPacket();
    ClientCacheStatusPacket();
    ClientCacheStatusPacket(bool);
};

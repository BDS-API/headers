#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class ClientCacheStatusPacket : Packet {

public:
    ~ClientCacheStatusPacket();
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual std::string getName()const;
    ClientCacheStatusPacket(bool);
    ClientCacheStatusPacket();
};

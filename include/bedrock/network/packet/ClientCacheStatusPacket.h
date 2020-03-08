#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class ClientCacheStatusPacket : Packet {

public:
    ClientCacheStatusPacket::~ClientCacheStatusPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ClientCacheStatusPacket(void);
    ClientCacheStatusPacket(bool);
};

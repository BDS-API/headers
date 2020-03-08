#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class ClientCacheMissResponsePacket : Packet {

public:
    virtual ClientCacheMissResponsePacket::~ClientCacheMissResponsePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ClientCacheMissResponsePacket(void);
};

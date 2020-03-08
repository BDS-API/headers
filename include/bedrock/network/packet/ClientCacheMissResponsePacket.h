#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class ClientCacheMissResponsePacket : Packet {

public:
    virtual ClientCacheMissResponsePacket::~ClientCacheMissResponsePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ClientCacheMissResponsePacket(void);
};

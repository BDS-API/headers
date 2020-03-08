#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../../unmapped/SubClientConnectionRequest"


class SubClientLoginPacket : Packet {

public:
    virtual SubClientLoginPacket::~SubClientLoginPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;

    SubClientLoginPacket(void);
    SubClientLoginPacket(SubClientConnectionRequest const&);
    SubClientLoginPacket(SubClientLoginPacket&&);
};

#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/SubClientConnectionRequest"
#include "../../io/BinaryStream"


class SubClientLoginPacket : Packet {

public:
    SubClientLoginPacket::~SubClientLoginPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching()const;

    SubClientLoginPacket(void);
    SubClientLoginPacket(SubClientConnectionRequest const&);
    SubClientLoginPacket(SubClientLoginPacket&&);
};

#pragma once

#include "../../io/BinaryStream"
#include "../../../unmapped/SubClientConnectionRequest"
#include "../../io/ReadOnlyBinaryStream"


class SubClientLoginPacket : Packet {

public:
    virtual SubClientLoginPacket::~SubClientLoginPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching()const;

    SubClientLoginPacket(void);
    SubClientLoginPacket(SubClientConnectionRequest const&);
    SubClientLoginPacket(SubClientLoginPacket&&);
};

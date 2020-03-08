#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class ClientToServerHandshakePacket : Packet {

public:
    virtual ClientToServerHandshakePacket::~ClientToServerHandshakePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ClientToServerHandshakePacket(void);
};

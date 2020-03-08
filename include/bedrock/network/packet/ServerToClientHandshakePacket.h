#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class ServerToClientHandshakePacket : Packet {

public:
    virtual ServerToClientHandshakePacket::~ServerToClientHandshakePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ServerToClientHandshakePacket(void);
    ServerToClientHandshakePacket(std::string const&);
};

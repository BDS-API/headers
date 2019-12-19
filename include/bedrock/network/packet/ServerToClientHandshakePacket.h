#pragma once

class ServerToClientHandshakePacket : Packet {

public:
    virtual ServerToClientHandshakePacket::~ServerToClientHandshakePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ServerToClientHandshakePacket(void);
    ServerToClientHandshakePacket(std::string const&);
};

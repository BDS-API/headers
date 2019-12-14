#pragma once

class ServerToClientHandshakePacket : Packet {

public:
    virtual ~ServerToClientHandshakePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ServerToClientHandshakePacket(void);
    void ServerToClientHandshakePacket(std::string const&);
};

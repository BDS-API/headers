#pragma once

class ClientToServerHandshakePacket : Packet {

public:
    virtual ~ClientToServerHandshakePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ClientToServerHandshakePacket(void);
};

#pragma once

class ServerToClientHandshakePacket : Packet {

public:
    virtual ~ServerToClientHandshakePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ServerToClientHandshakePacket(void);
    void ServerToClientHandshakePacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};

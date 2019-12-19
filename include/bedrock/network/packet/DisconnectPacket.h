#pragma once

class DisconnectPacket : Packet {

public:
    virtual DisconnectPacket::~DisconnectPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    DisconnectPacket(void);
    DisconnectPacket(std::string const&, bool);
};

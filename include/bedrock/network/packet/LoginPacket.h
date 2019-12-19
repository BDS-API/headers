#pragma once

class LoginPacket : Packet {

public:
    virtual LoginPacket::~LoginPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;

    LoginPacket(void);
    LoginPacket(int, ConnectionRequest const&);
    LoginPacket(LoginPacket&&);
};

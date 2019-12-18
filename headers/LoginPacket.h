#pragma once

class LoginPacket : Packet {

public:
    virtual ~LoginPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;

    void LoginPacket(void);
    void LoginPacket(int, ConnectionRequest const&);
    void LoginPacket(LoginPacket&&);
};

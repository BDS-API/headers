#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/ConnectionRequest"
#include "../../io/BinaryStream"


class LoginPacket : Packet {

public:
    LoginPacket::~LoginPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching()const;

    LoginPacket(void);
    LoginPacket(int, ConnectionRequest const&);
    LoginPacket(LoginPacket&&);
};

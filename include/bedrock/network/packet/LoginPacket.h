#pragma once

#include "../../../unmapped/ConnectionRequest"
#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class LoginPacket : Packet {

public:
    virtual LoginPacket::~LoginPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching()const;

    LoginPacket(void);
    LoginPacket(int, ConnectionRequest const&);
    LoginPacket(LoginPacket&&);
};

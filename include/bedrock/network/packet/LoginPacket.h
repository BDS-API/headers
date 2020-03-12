#pragma once

#include <string>
#include "Packet.h"


class LoginPacket : Packet {

public:
    ~LoginPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching()const;
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    LoginPacket(int, ConnectionRequest const&);
    LoginPacket(LoginPacket &&);
    LoginPacket();
};

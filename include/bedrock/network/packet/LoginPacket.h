#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/ConnectionRequest.h"
#include "Packet.h"


class LoginPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void disallowBatching()const;
    virtual std::string getName()const;
    ~LoginPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    LoginPacket();
    LoginPacket(int, ConnectionRequest const&);
    LoginPacket(LoginPacket &&);
};

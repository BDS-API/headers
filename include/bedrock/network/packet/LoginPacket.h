#pragma once

#include "../../../unmapped/ConnectionRequest.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "./LoginPacket.h"
#include <string>


class LoginPacket : Packet {

public:
    virtual ~LoginPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching()const;

    LoginPacket();
    LoginPacket(int, ConnectionRequest const&);
    LoginPacket(LoginPacket &&);
};

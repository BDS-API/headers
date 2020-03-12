#pragma once

#include <string>
#include "Packet.h"


class ClientToServerHandshakePacket : Packet {

public:
    ~ClientToServerHandshakePacket();
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    ClientToServerHandshakePacket();
};

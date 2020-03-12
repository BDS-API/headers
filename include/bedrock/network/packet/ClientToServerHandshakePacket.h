#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class ClientToServerHandshakePacket : Packet {

public:
    virtual void getId()const;
    ~ClientToServerHandshakePacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    ClientToServerHandshakePacket();
};

#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include <string>


class ServerToClientHandshakePacket : Packet {

public:
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    ~ServerToClientHandshakePacket();
    virtual std::string getName()const;
    ServerToClientHandshakePacket();
    std::string getData()const;
    ServerToClientHandshakePacket(std::string const&);
};

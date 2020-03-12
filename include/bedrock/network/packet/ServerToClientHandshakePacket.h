#pragma once

#include <string>
#include "Packet.h"


class ServerToClientHandshakePacket : Packet {

public:
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    ~ServerToClientHandshakePacket();
    virtual void read(ReadOnlyBinaryStream &);
    ServerToClientHandshakePacket(std::string const&);
    std::string getData()const;
    ServerToClientHandshakePacket();
};

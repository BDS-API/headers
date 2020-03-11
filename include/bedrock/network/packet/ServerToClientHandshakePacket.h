#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../io/BinaryStream.h"
#include <string>


class ServerToClientHandshakePacket : Packet {

public:
    virtual ~ServerToClientHandshakePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ServerToClientHandshakePacket();
    ServerToClientHandshakePacket(std::string const&);
    std::string getData()const;
};

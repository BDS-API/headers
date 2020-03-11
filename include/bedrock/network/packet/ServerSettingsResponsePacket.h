#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../io/BinaryStream.h"
#include <string>


class ServerSettingsResponsePacket : Packet {

public:
    virtual ~ServerSettingsResponsePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ServerSettingsResponsePacket();
    ServerSettingsResponsePacket(unsigned int, std::string const&);
};

#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include <string>


class ServerSettingsResponsePacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    ~ServerSettingsResponsePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    ServerSettingsResponsePacket(unsigned int, std::string const&);
    ServerSettingsResponsePacket();
};

#pragma once

#include <string>
#include "Packet.h"


class ServerSettingsResponsePacket : Packet {

public:
    ~ServerSettingsResponsePacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    ServerSettingsResponsePacket(unsigned int, std::string const&);
    ServerSettingsResponsePacket();
};

#pragma once

#include <string>
#include "Packet.h"


class ServerSettingsRequestPacket : Packet {

public:
    virtual void getId()const;
    ~ServerSettingsRequestPacket();
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    ServerSettingsRequestPacket();
};

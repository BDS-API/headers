#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../io/BinaryStream.h"
#include <string>


class ServerSettingsRequestPacket : Packet {

public:
    virtual ~ServerSettingsRequestPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ServerSettingsRequestPacket();
};

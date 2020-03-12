#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class ServerSettingsRequestPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    ~ServerSettingsRequestPacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    ServerSettingsRequestPacket();
};

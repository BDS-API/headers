#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class ServerSettingsRequestPacket : Packet {

public:
    virtual ServerSettingsRequestPacket::~ServerSettingsRequestPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ServerSettingsRequestPacket(void);
};

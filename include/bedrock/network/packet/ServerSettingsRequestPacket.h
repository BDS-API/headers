#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class ServerSettingsRequestPacket : Packet {

public:
    virtual ServerSettingsRequestPacket::~ServerSettingsRequestPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ServerSettingsRequestPacket(void);
};

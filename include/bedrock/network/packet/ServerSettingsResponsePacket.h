#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class ServerSettingsResponsePacket : Packet {

public:
    virtual ServerSettingsResponsePacket::~ServerSettingsResponsePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ServerSettingsResponsePacket(void);
    ServerSettingsResponsePacket(unsigned int, std::string const&);
};

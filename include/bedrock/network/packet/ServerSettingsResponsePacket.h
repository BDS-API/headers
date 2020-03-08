#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class ServerSettingsResponsePacket : Packet {

public:
    ServerSettingsResponsePacket::~ServerSettingsResponsePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ServerSettingsResponsePacket(void);
    ServerSettingsResponsePacket(unsigned int, std::string const&);
};

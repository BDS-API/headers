#pragma once

class ServerSettingsResponsePacket : Packet {

public:
    virtual ServerSettingsResponsePacket::~ServerSettingsResponsePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ServerSettingsResponsePacket(void);
    ServerSettingsResponsePacket(unsigned int, std::string const&);
};

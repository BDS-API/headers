#pragma once

class ServerSettingsResponsePacket : Packet {

public:
    virtual ~ServerSettingsResponsePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ServerSettingsResponsePacket(void);
    void ServerSettingsResponsePacket(unsigned int, std::string const&);
};

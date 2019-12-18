#pragma once

class ServerSettingsRequestPacket : Packet {

public:
    virtual ~ServerSettingsRequestPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ServerSettingsRequestPacket(void);
};

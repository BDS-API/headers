#pragma once

class ServerSettingsRequestPacket : Packet {

    virtual void ServerSettingsRequestPacket::~ServerSettingsRequestPacket();
    virtual void ServerSettingsRequestPacket::~ServerSettingsRequestPacket();
    virtual void getId(void)const;
    virtual void _ZNK27ServerSettingsRequestPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

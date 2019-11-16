#pragma once

class ServerSettingsResponsePacket : Packet {

    virtual void ServerSettingsResponsePacket::~ServerSettingsResponsePacket();
    virtual void ServerSettingsResponsePacket::~ServerSettingsResponsePacket();
    virtual void getId(void)const;
    virtual void _ZNK28ServerSettingsResponsePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

#pragma once

class ServerSettingsResponsePacket : Packet {

    virtual void ServerSettingsResponse~ServerSettingsResponsePacket();
    virtual void ServerSettingsResponse~ServerSettingsResponsePacket();
    virtual void ServerSettingsResponsegetId(void)const;
    virtual void _ZNK28ServerSettingsResponsePacket7getNameB5cxx11Ev;
    virtual void ServerSettingsResponsewrite(BinaryStream &)const;
    virtual void ServerSettingsResponseread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

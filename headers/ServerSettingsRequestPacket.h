#pragma once

class ServerSettingsRequestPacket : Packet {

    virtual void ServerSettingsRequest~ServerSettingsRequestPacket();
    virtual void ServerSettingsRequest~ServerSettingsRequestPacket();
    virtual void ServerSettingsRequestgetId(void)const;
    virtual void _ZNK27ServerSettingsRequestPacket7getNameB5cxx11Ev;
    virtual void ServerSettingsRequestwrite(BinaryStream &)const;
    virtual void ServerSettingsRequestread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

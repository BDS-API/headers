#pragma once

class MultiplayerSettingsPacket : Packet {

    virtual void MultiplayerSettingsPacket::~MultiplayerSettingsPacket();
    virtual void MultiplayerSettingsPacket::~MultiplayerSettingsPacket();
    virtual void getId(void)const;
    virtual void _ZNK25MultiplayerSettingsPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

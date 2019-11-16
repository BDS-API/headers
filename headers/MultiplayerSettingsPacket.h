#pragma once

class MultiplayerSettingsPacket : Packet {

    virtual void MultiplayerSettings~MultiplayerSettingsPacket();
    virtual void MultiplayerSettings~MultiplayerSettingsPacket();
    virtual void MultiplayerSettingsgetId(void)const;
    virtual void _ZNK25MultiplayerSettingsPacket7getNameB5cxx11Ev;
    virtual void MultiplayerSettingswrite(BinaryStream &)const;
    virtual void MultiplayerSettingsread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

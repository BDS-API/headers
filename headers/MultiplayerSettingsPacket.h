#pragma once

class MultiplayerSettingsPacket : Packet {

public:
    virtual ~MultiplayerSettingsPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void MultiplayerSettingsPacket(void);
    void MultiplayerSettingsPacket(MultiplayerSettingsPacketType);
};

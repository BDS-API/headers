#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class MultiplayerSettingsPacket : Packet {

public:
    virtual MultiplayerSettingsPacket::~MultiplayerSettingsPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MultiplayerSettingsPacket(void);
    MultiplayerSettingsPacket(MultiplayerSettingsPacketType);
};

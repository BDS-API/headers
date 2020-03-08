#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class MultiplayerSettingsPacket : Packet {

public:
    virtual MultiplayerSettingsPacket::~MultiplayerSettingsPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MultiplayerSettingsPacket(void);
    MultiplayerSettingsPacket(MultiplayerSettingsPacketType);
};

#pragma once

#include <string>
#include "Packet.h"


class MultiplayerSettingsPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    ~MultiplayerSettingsPacket();
    virtual void getId()const;
    MultiplayerSettingsPacket();
//  MultiplayerSettingsPacket(MultiplayerSettingsPacketType); //TODO: incomplete function definition
};

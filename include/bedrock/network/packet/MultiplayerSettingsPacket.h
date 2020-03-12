#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class MultiplayerSettingsPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void getId()const;
    ~MultiplayerSettingsPacket();
    virtual void write(BinaryStream &)const;
//  MultiplayerSettingsPacket(MultiplayerSettingsPacketType); //TODO: incomplete function definition
    MultiplayerSettingsPacket();
};

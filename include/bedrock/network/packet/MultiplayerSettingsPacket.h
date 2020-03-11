#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../io/BinaryStream.h"
#include "./Packet.h"


class MultiplayerSettingsPacket : Packet {

public:
    virtual ~MultiplayerSettingsPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MultiplayerSettingsPacket();
//  MultiplayerSettingsPacket(MultiplayerSettingsPacketType); //TODO: incomplete function definition
};

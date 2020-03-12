#pragma once

#include <string>
#include "Packet.h"


class NetworkSettingsPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    ~NetworkSettingsPacket();
    NetworkSettingsPacket();
//  NetworkSettingsPacket(NetworkSettingOptions const&); //TODO: incomplete function definition
};

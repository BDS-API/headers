#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../io/BinaryStream.h"
#include "./Packet.h"


class NetworkSettingsPacket : Packet {

public:
    virtual ~NetworkSettingsPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    NetworkSettingsPacket();
//  NetworkSettingsPacket(NetworkSettingOptions const&); //TODO: incomplete function definition
};

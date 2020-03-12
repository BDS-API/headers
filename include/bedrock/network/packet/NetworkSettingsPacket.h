#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class NetworkSettingsPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual std::string getName()const;
    ~NetworkSettingsPacket();
    virtual void read(ReadOnlyBinaryStream &);
    NetworkSettingsPacket();
//  NetworkSettingsPacket(NetworkSettingOptions const&); //TODO: incomplete function definition
};

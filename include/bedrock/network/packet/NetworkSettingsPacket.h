#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class NetworkSettingsPacket : Packet {

public:
    virtual NetworkSettingsPacket::~NetworkSettingsPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    NetworkSettingsPacket(void);
    NetworkSettingsPacket(NetworkSettingOptions const&);
};

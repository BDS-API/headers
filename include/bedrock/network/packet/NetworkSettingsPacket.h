#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class NetworkSettingsPacket : Packet {

public:
    virtual NetworkSettingsPacket::~NetworkSettingsPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    NetworkSettingsPacket(void);
    NetworkSettingsPacket(NetworkSettingOptions const&);
};

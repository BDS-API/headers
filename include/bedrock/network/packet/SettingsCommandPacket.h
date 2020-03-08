#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class SettingsCommandPacket : Packet {

public:
    virtual SettingsCommandPacket::~SettingsCommandPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SettingsCommandPacket(void);
    SettingsCommandPacket(std::string const&, bool);
    void getSupressOutput(void)const;
};

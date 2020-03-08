#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class SettingsCommandPacket : Packet {

public:
    SettingsCommandPacket::~SettingsCommandPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SettingsCommandPacket(void);
    SettingsCommandPacket(std::string const&, bool);
    void getSupressOutput()const;
};

#pragma once

#include <string>
#include "Packet.h"


class SettingsCommandPacket : Packet {

public:
    ~SettingsCommandPacket();
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    SettingsCommandPacket();
    void getSupressOutput()const;
    std::string getCommandString()const;
    SettingsCommandPacket(std::string const&, bool);
};

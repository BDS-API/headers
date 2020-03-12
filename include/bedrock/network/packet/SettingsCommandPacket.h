#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include <string>


class SettingsCommandPacket : Packet {

public:
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    ~SettingsCommandPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    std::string getCommandString()const;
    void getSupressOutput()const;
    SettingsCommandPacket(std::string const&, bool);
    SettingsCommandPacket();
};

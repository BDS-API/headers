#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../io/BinaryStream.h"
#include <string>


class SettingsCommandPacket : Packet {

public:
    virtual ~SettingsCommandPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SettingsCommandPacket();
    SettingsCommandPacket(std::string const&, bool);
    std::string getCommandString()const;
    void getSupressOutput()const;
};

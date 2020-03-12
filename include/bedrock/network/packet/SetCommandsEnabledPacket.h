#pragma once

#include <string>
#include "Packet.h"


class SetCommandsEnabledPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    ~SetCommandsEnabledPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void getId()const;
    SetCommandsEnabledPacket(bool);
    bool hasCommandsEnabled()const;
    SetCommandsEnabledPacket();
};

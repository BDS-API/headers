#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../io/BinaryStream.h"
#include <string>


class SetCommandsEnabledPacket : Packet {

public:
    virtual ~SetCommandsEnabledPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetCommandsEnabledPacket();
    SetCommandsEnabledPacket(bool);
    bool hasCommandsEnabled()const;
};

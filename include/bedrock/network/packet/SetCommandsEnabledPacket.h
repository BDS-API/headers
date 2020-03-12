#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class SetCommandsEnabledPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    ~SetCommandsEnabledPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    SetCommandsEnabledPacket(bool);
    bool hasCommandsEnabled()const;
    SetCommandsEnabledPacket();
};

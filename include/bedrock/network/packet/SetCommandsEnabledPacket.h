#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class SetCommandsEnabledPacket : Packet {

public:
    virtual SetCommandsEnabledPacket::~SetCommandsEnabledPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetCommandsEnabledPacket(void);
    SetCommandsEnabledPacket(bool);
    bool hasCommandsEnabled()const;
};

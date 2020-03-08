#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class SetCommandsEnabledPacket : Packet {

public:
    virtual SetCommandsEnabledPacket::~SetCommandsEnabledPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetCommandsEnabledPacket(void);
    SetCommandsEnabledPacket(bool);
    bool hasCommandsEnabled(void)const;
};

#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class SetDefaultGameTypePacket : Packet {

public:
    virtual SetDefaultGameTypePacket::~SetDefaultGameTypePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetDefaultGameTypePacket(void);
    SetDefaultGameTypePacket(GameType);
};

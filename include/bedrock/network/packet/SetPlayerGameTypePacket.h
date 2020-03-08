#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class SetPlayerGameTypePacket : Packet {

public:
    virtual SetPlayerGameTypePacket::~SetPlayerGameTypePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetPlayerGameTypePacket(void);
    SetPlayerGameTypePacket(GameType);
};

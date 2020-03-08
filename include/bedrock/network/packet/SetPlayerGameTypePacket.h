#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class SetPlayerGameTypePacket : Packet {

public:
    SetPlayerGameTypePacket::~SetPlayerGameTypePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetPlayerGameTypePacket(void);
    SetPlayerGameTypePacket(GameType);
};

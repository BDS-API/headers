#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class SetDefaultGameTypePacket : Packet {

public:
    SetDefaultGameTypePacket::~SetDefaultGameTypePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetDefaultGameTypePacket(void);
    SetDefaultGameTypePacket(GameType);
};

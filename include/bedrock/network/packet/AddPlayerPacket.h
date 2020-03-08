#pragma once

#include "../../io/BinaryStream"
#include "../../actor/Player"
#include "../../io/ReadOnlyBinaryStream"


class AddPlayerPacket : Packet {

public:
    AddPlayerPacket::~AddPlayerPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AddPlayerPacket(void);
    AddPlayerPacket(Player &);
};

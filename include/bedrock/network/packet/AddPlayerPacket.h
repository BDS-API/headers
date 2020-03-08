#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/Player"


class AddPlayerPacket : Packet {

public:
    virtual AddPlayerPacket::~AddPlayerPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AddPlayerPacket(void);
    AddPlayerPacket(Player &);
};

#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class PlayerInputPacket : Packet {

public:
    PlayerInputPacket::~PlayerInputPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerInputPacket(void);
    PlayerInputPacket(float, float, bool, bool);
};

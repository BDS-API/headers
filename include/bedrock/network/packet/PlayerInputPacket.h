#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class PlayerInputPacket : Packet {

public:
    virtual PlayerInputPacket::~PlayerInputPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerInputPacket(void);
    PlayerInputPacket(float, float, bool, bool);
};

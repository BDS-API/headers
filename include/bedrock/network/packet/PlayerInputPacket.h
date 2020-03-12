#pragma once

#include <string>
#include "Packet.h"


class PlayerInputPacket : Packet {

public:
    ~PlayerInputPacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    PlayerInputPacket();
    PlayerInputPacket(float, float, bool, bool);
};

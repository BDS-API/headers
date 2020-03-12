#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class PlayerInputPacket : Packet {

public:
    ~PlayerInputPacket();
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    PlayerInputPacket(float, float, bool, bool);
    PlayerInputPacket();
};

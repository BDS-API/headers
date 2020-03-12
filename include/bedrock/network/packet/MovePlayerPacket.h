#pragma once

#include <string>
#include "Packet.h"


class MovePlayerPacket : Packet {

public:
    ~MovePlayerPacket();
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    MovePlayerPacket();
    MovePlayerPacket(Player &, Vec3 const&);
//  MovePlayerPacket(Player &, Player::PositionMode, int, int); //TODO: incomplete function definition
};

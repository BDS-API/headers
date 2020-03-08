#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../util/Vec3"
#include "../../io/BinaryStream"
#include "../../actor/Player"


class MovePlayerPacket : Packet {

public:
    MovePlayerPacket::~MovePlayerPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MovePlayerPacket(void);
    MovePlayerPacket(Player &, Vec3 const&);
    MovePlayerPacket(Player &, Player::PositionMode, int, int);
};

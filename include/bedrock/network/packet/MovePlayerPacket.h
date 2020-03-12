#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/Vec3.h"
#include "../../actor/Player.h"
#include "Packet.h"


class MovePlayerPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    ~MovePlayerPacket();
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
//  MovePlayerPacket(Player &, Player::PositionMode, int, int); //TODO: incomplete function definition
    MovePlayerPacket(Player &, Vec3 const&);
    MovePlayerPacket();
};

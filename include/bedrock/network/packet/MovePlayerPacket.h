#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/Vec3.h"
#include "../../actor/Player.h"
#include "./Packet.h"
#include <string>


class MovePlayerPacket : Packet {

public:
    virtual ~MovePlayerPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MovePlayerPacket();
    MovePlayerPacket(Player &, Vec3 const&);
//  MovePlayerPacket(Player &, Player::PositionMode, int, int); //TODO: incomplete function definition
};

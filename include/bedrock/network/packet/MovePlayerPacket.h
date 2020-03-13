#pragma once

#include <string>
#include "Packet.h"


class MovePlayerPacket : Packet {

public:
    ~MovePlayerPacket(); // _ZN16MovePlayerPacketD2Ev
    virtual void getId()const; // _ZNK16MovePlayerPacket5getIdEv
    virtual std::string getName()const; // _ZNK16MovePlayerPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK16MovePlayerPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN16MovePlayerPacket4readER20ReadOnlyBinaryStream
    MovePlayerPacket(); // _ZN16MovePlayerPacketC2Ev
    MovePlayerPacket(Player &, Vec3 const&); // _ZN16MovePlayerPacketC2ER6PlayerRK4Vec3
//  MovePlayerPacket(Player &, Player::PositionMode, int, int); //TODO: incomplete function definition // _ZN16MovePlayerPacketC2ER6PlayerNS0_12PositionModeEii
};

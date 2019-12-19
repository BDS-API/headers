#pragma once

class MovePlayerPacket : Packet {

public:
    virtual MovePlayerPacket::~MovePlayerPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MovePlayerPacket(void);
    MovePlayerPacket(Player &, Vec3 const&);
    MovePlayerPacket(Player &, Player::PositionMode, int, int);
};

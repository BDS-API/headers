#pragma once

class MovePlayerPacket : Packet {

public:
    virtual ~MovePlayerPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void MovePlayerPacket(void);
    void MovePlayerPacket(Player &, Vec3 const&);
    void MovePlayerPacket(Player &, Player::PositionMode, int, int);
};

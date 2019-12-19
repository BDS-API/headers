#pragma once

class PlayerInputPacket : Packet {

public:
    virtual PlayerInputPacket::~PlayerInputPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerInputPacket(void);
    PlayerInputPacket(float, float, bool, bool);
};

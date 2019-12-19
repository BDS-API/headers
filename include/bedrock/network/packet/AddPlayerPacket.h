#pragma once

class AddPlayerPacket : Packet {

public:
    virtual AddPlayerPacket::~AddPlayerPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AddPlayerPacket(void);
    AddPlayerPacket(Player &);
};

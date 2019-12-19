#pragma once

class AnvilDamagePacket : Packet {

public:
    virtual AnvilDamagePacket::~AnvilDamagePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AnvilDamagePacket(void);
    AnvilDamagePacket(int, NetworkBlockPosition const&);
};

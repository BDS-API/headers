#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class HurtArmorPacket : Packet {

public:
    virtual HurtArmorPacket::~HurtArmorPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    HurtArmorPacket(void);
    HurtArmorPacket(int);
};

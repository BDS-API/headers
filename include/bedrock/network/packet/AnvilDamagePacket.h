#pragma once

#include "../../../unmapped/NetworkBlockPosition"
#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class AnvilDamagePacket : Packet {

public:
    AnvilDamagePacket::~AnvilDamagePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AnvilDamagePacket(void);
    AnvilDamagePacket(int, NetworkBlockPosition const&);
};

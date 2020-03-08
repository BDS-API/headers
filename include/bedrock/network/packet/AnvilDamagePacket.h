#pragma once

#include "../../../unmapped/NetworkBlockPosition"
#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class AnvilDamagePacket : Packet {

public:
    virtual AnvilDamagePacket::~AnvilDamagePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AnvilDamagePacket(void);
    AnvilDamagePacket(int, NetworkBlockPosition const&);
};

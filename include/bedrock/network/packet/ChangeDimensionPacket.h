#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/Dimension"
#include "../../io/BinaryStream"
#include "../../../unmapped/Vec3"


class ChangeDimensionPacket : Packet {

public:
    virtual ChangeDimensionPacket::~ChangeDimensionPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ChangeDimensionPacket(void);
    ChangeDimensionPacket(AutomaticID<Dimension, int>, Vec3, bool);
};

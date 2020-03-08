#pragma once

#include "../../io/BinaryStream"
#include "../../../unmapped/Dimension"
#include "../../util/Vec3"
#include "../../io/ReadOnlyBinaryStream"


class ChangeDimensionPacket : Packet {

public:
    virtual ChangeDimensionPacket::~ChangeDimensionPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ChangeDimensionPacket(void);
    ChangeDimensionPacket(AutomaticID<Dimension, int>, Vec3, bool);
};

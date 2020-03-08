#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../util/Vec3"
#include "../../../unmapped/Dimension"
#include "../../io/BinaryStream"


class ChangeDimensionPacket : Packet {

public:
    ChangeDimensionPacket::~ChangeDimensionPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ChangeDimensionPacket(void);
    ChangeDimensionPacket(AutomaticID<Dimension, int>, Vec3, bool);
};

#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/Vec3.h"
#include "../../../unmapped/Dimension.h"
#include "Packet.h"


class ChangeDimensionPacket : Packet {

public:
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    ~ChangeDimensionPacket();
    ChangeDimensionPacket();
//  ChangeDimensionPacket(AutomaticID<Dimension, int>, Vec3, bool); //TODO: incomplete function definition
};

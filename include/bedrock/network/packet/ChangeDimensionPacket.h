#pragma once

#include <string>
#include "../../util/Vec3.h"
#include "Packet.h"


class ChangeDimensionPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    ~ChangeDimensionPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    ChangeDimensionPacket();
//  ChangeDimensionPacket(AutomaticID<Dimension, int>, Vec3, bool); //TODO: incomplete function definition
};

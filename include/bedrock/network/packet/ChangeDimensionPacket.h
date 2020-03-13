#pragma once

#include <string>
#include "../../util/Vec3.h"
#include "Packet.h"


class ChangeDimensionPacket : Packet {

public:
    ~ChangeDimensionPacket(); // _ZN21ChangeDimensionPacketD2Ev
    virtual void getId()const; // _ZNK21ChangeDimensionPacket5getIdEv
    virtual std::string getName()const; // _ZNK21ChangeDimensionPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK21ChangeDimensionPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN21ChangeDimensionPacket4readER20ReadOnlyBinaryStream
    ChangeDimensionPacket(); // _ZN21ChangeDimensionPacketC2Ev
//  ChangeDimensionPacket(AutomaticID<Dimension, int>, Vec3, bool); //TODO: incomplete function definition // _ZN21ChangeDimensionPacketC2E11AutomaticIDI9DimensioniE4Vec3b
};

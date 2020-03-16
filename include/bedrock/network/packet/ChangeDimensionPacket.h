#pragma once

#include "../../util/Vec3.h"
#include <string>
#include "Packet.h"


class ChangeDimensionPacket : public Packet {

public:
    virtual ~ChangeDimensionPacket(); // _ZN21ChangeDimensionPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK21ChangeDimensionPacket5getIdEv
    virtual std::string getName()const; // _ZNK21ChangeDimensionPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK21ChangeDimensionPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN21ChangeDimensionPacket4readER20ReadOnlyBinaryStream
    ChangeDimensionPacket(); // _ZN21ChangeDimensionPacketC2Ev
//    ChangeDimensionPacket(long, Vec3, bool); //TODO: incomplete function definition // _ZN21ChangeDimensionPacketC2E11AutomaticIDI9DimensioniE4Vec3b
};

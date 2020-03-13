#pragma once

#include <string>
#include "Packet.h"


class AddPaintingPacket : Packet {

public:
    ~AddPaintingPacket(); // _ZN17AddPaintingPacketD2Ev
    virtual void getId()const; // _ZNK17AddPaintingPacket5getIdEv
    virtual std::string getName()const; // _ZNK17AddPaintingPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK17AddPaintingPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN17AddPaintingPacket4readER20ReadOnlyBinaryStream
    AddPaintingPacket(); // _ZN17AddPaintingPacketC2Ev
    AddPaintingPacket(Painting const&); // _ZN17AddPaintingPacketC2ERK8Painting
};

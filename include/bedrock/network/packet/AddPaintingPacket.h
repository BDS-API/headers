#pragma once

#include <string>
#include "Packet.h"


class AddPaintingPacket : Packet {

public:
    virtual std::string getName()const;
    ~AddPaintingPacket();
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    AddPaintingPacket(Painting const&);
    AddPaintingPacket();
};

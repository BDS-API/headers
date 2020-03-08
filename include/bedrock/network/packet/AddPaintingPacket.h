#pragma once

#include "../../io/BinaryStream"
#include "../../actor/Painting"
#include "../../io/ReadOnlyBinaryStream"


class AddPaintingPacket : Packet {

public:
    AddPaintingPacket::~AddPaintingPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AddPaintingPacket(void);
    AddPaintingPacket(Painting const&);
};

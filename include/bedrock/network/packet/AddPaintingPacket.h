#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/Painting"


class AddPaintingPacket : Packet {

public:
    virtual AddPaintingPacket::~AddPaintingPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AddPaintingPacket(void);
    AddPaintingPacket(Painting const&);
};

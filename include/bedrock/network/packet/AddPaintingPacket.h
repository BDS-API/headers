#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/Painting"


class AddPaintingPacket : Packet {

public:
    virtual AddPaintingPacket::~AddPaintingPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AddPaintingPacket(void);
    AddPaintingPacket(Painting const&);
};

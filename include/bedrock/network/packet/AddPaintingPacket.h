#pragma once

#include "../../actor/Painting.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include "../../io/BinaryStream.h"


class AddPaintingPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    ~AddPaintingPacket();
    virtual void getId()const;
    AddPaintingPacket();
    AddPaintingPacket(Painting const&);
};
